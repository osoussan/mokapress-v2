/**
* Copyright (c) 2015 Daniel Molkentin <danimo@owncloud.com>. All rights reserved.
*
* This library is free software; you can redistribute it and/or modify it under
* the terms of the GNU Lesser General Public License as published by the Free
* Software Foundation; either version 2.1 of the License, or (at your option)
* any later version.
*
* This library is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
* FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
* details.
*/

#include "stdafx.h"

#include "OCContextMenuRegHandler.h"
#include "RegDelnode.h"
#include <strsafe.h>
#include <objbase.h>

namespace {

HRESULT SetHKCRRegistryKeyAndValue(PCWSTR pszSubKey, PCWSTR pszValueName, PCWSTR pszData)
{
	HRESULT hr;
	HKEY hKey = NULL;

	// Creates the specified registry key. If the key already exists, the 
	// function opens it. 
	hr = HRESULT_FROM_WIN32(RegCreateKeyEx(HKEY_CLASSES_ROOT, pszSubKey, 0,
		NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL));

	if (SUCCEEDED(hr))
	{
		if (pszData != NULL)
		{
			// Set the specified value of the key.
			DWORD cbData = lstrlen(pszData) * sizeof(*pszData);
			hr = HRESULT_FROM_WIN32(RegSetValueEx(hKey, pszValueName, 0,
				REG_SZ, reinterpret_cast<const BYTE *>(pszData), cbData));
		}

		RegCloseKey(hKey);
	}

	return hr;
}

HRESULT GetHKCRRegistryKeyAndValue(PCWSTR pszSubKey, PCWSTR pszValueName, PWSTR pszData, DWORD cbData)
{
	HRESULT hr;
	HKEY hKey = NULL;

	// Try to open the specified registry key. 
	hr = HRESULT_FROM_WIN32(RegOpenKeyEx(HKEY_CLASSES_ROOT, pszSubKey, 0,
		KEY_READ, &hKey));

	if (SUCCEEDED(hr))
	{
		// Get the data for the specified value name.
		hr = HRESULT_FROM_WIN32(RegQueryValueEx(hKey, pszValueName, NULL,
			NULL, reinterpret_cast<LPBYTE>(pszData), &cbData));

		RegCloseKey(hKey);
	}

	return hr;
}

}

HRESULT OCContextMenuRegHandler::RegisterInprocServer(PCWSTR pszModule, const CLSID& clsid, PCWSTR pszFriendlyName, PCWSTR pszThreadModel)
{
	if (pszModule == NULL || pszThreadModel == NULL)
	{
		return E_INVALIDARG;
	}

	HRESULT hr;

	wchar_t szCLSID[MAX_PATH];
	StringFromGUID2(clsid, szCLSID, ARRAYSIZE(szCLSID));

	wchar_t szSubkey[MAX_PATH];

	// Create the HKCR\CLSID\{<CLSID>} key.
	hr = StringCchPrintf(szSubkey, ARRAYSIZE(szSubkey), L"CLSID\\%s", szCLSID);
	if (SUCCEEDED(hr))
	{
		hr = SetHKCRRegistryKeyAndValue(szSubkey, NULL, pszFriendlyName);

		// Create the HKCR\CLSID\{<CLSID>}\InprocServer32 key.
		if (SUCCEEDED(hr))
		{
			hr = StringCchPrintf(szSubkey, ARRAYSIZE(szSubkey),
				L"CLSID\\%s\\InprocServer32", szCLSID);
			if (SUCCEEDED(hr))
			{
				// Set the default value of the InprocServer32 key to the 
				// path of the COM module.
				hr = SetHKCRRegistryKeyAndValue(szSubkey, NULL, pszModule);
				if (SUCCEEDED(hr))
				{
					// Set the threading model of the component.
					hr = SetHKCRRegistryKeyAndValue(szSubkey,
						L"ThreadingModel", pszThreadModel);
				}
			}
		}
	}

	return hr;
}

HRESULT OCContextMenuRegHandler::UnregisterInprocServer(const CLSID& clsid)
{
	HRESULT hr = S_OK;

	wchar_t szCLSID[MAX_PATH];
	StringFromGUID2(clsid, szCLSID, ARRAYSIZE(szCLSID));

	wchar_t szSubkey[MAX_PATH];

	// Delete the HKCR\CLSID\{<CLSID>} key.
	hr = StringCchPrintf(szSubkey, ARRAYSIZE(szSubkey), L"CLSID\\%s", szCLSID);
	if (SUCCEEDED(hr))
	{
		hr = HRESULT_FROM_WIN32(RegDelnode(HKEY_CLASSES_ROOT, szSubkey));
	}

	return hr;
}


HRESULT OCContextMenuRegHandler::RegisterShellExtContextMenuHandler(
	PCWSTR pszFileType, const CLSID& clsid, PCWSTR pszFriendlyName)
{
	if (pszFileType == NULL)
	{
		return E_INVALIDARG;
	}

	HRESULT hr;

	wchar_t szCLSID[MAX_PATH];
	StringFromGUID2(clsid, szCLSID, ARRAYSIZE(szCLSID));

	wchar_t szSubkey[MAX_PATH];

	// If pszFileType starts with '.', try to read the default value of the 
	// HKCR\<File Type> key which contains the ProgID to which the file type 
	// is linked.
	if (*pszFileType == L'.')
	{
		wchar_t szDefaultVal[260];
		hr = GetHKCRRegistryKeyAndValue(pszFileType, NULL, szDefaultVal,
			sizeof(szDefaultVal));

		// If the key exists and its default value is not empty, use the 
		// ProgID as the file type.
		if (SUCCEEDED(hr) && szDefaultVal[0] != L'\0')
		{
			pszFileType = szDefaultVal;
		}
	}

	// Create the key HKCR\<File Type>\shellex\ContextMenuHandlers\{friendlyName>}
	hr = StringCchPrintf(szSubkey, ARRAYSIZE(szSubkey),
		L"%s\\shellex\\ContextMenuHandlers\\%s", pszFileType, pszFriendlyName);
	if (SUCCEEDED(hr))
	{
		// Set the default value of the key.
		hr = SetHKCRRegistryKeyAndValue(szSubkey, NULL, szCLSID);
	}

	return hr;
}

HRESULT OCContextMenuRegHandler::UnregisterShellExtContextMenuHandler(
	PCWSTR pszFileType, PCWSTR pszFriendlyName)
{
	if (pszFileType == NULL)
	{
		return E_INVALIDARG;
	}

	HRESULT hr;
	
	wchar_t szSubkey[MAX_PATH];

	// If pszFileType starts with '.', try to read the default value of the 
	// HKCR\<File Type> key which contains the ProgID to which the file type 
	// is linked.
	if (*pszFileType == L'.')
	{
		wchar_t szDefaultVal[260];
		hr = GetHKCRRegistryKeyAndValue(pszFileType, NULL, szDefaultVal,
			sizeof(szDefaultVal));

		// If the key exists and its default value is not empty, use the 
		// ProgID as the file type.
		if (SUCCEEDED(hr) && szDefaultVal[0] != L'\0')
		{
			pszFileType = szDefaultVal;
		}
	}

	// Remove the HKCR\<File Type>\shellex\ContextMenuHandlers\{friendlyName} key.
	hr = StringCchPrintf(szSubkey, ARRAYSIZE(szSubkey),
		L"%s\\shellex\\ContextMenuHandlers\\%s", pszFileType, pszFriendlyName);
	if (SUCCEEDED(hr))
	{
		hr = HRESULT_FROM_WIN32(RegDelnode(HKEY_CLASSES_ROOT, szSubkey));
	}

	return hr;
}