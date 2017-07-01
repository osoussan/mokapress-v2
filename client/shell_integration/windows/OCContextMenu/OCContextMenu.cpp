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

#include "OCContextMenu.h"
#include "OCClientInterface.h"

#include <shobjidl.h>
#include <shlwapi.h>
#include <shellapi.h>
#include <StringUtil.h>
#include <assert.h>

#include <iostream>
#include <locale>
#include <codecvt>

extern HINSTANCE g_hInst;
extern long g_cDllRef;

#define IDM_SHARE          	0
#define IDM_INFO           	0
#define IDM_WEB				1



OCContextMenu::OCContextMenu(void)
	: m_cRef(2)
 	, m_pszMenuText(L"&Info")
    , m_pszVerb("ocinfo")
    , m_pwszVerb(L"ocinfo")
    , m_pszVerbCanonicalName("OCInfo")
    , m_pwszVerbCanonicalName(L"OCInfo")
    , m_pszVerbHelpText("Informations Mokapress")
    , m_pwszVerbHelpText(L"Informations Mokapress")
	, m_pszMenuText2(L"&Web")
	, m_pszVerb2("ocweb")
	, m_pwszVerb2(L"ocweb")
	, m_pszVerbCanonicalName2("OCWeb")
	, m_pwszVerbCanonicalName2(L"OCWeb")
	, m_pszVerbHelpText2("Créer une page")
	, m_pwszVerbHelpText2(L"Créer une page")
{
	InterlockedIncrement(&g_cDllRef);
}

OCContextMenu::~OCContextMenu(void)
{
	InterlockedDecrement(&g_cDllRef);
}


void OCContextMenu::OnVerbDisplayFileName(HWND hWnd)
{
	OCClientInterface::InfoObject(std::wstring(m_szSelectedFile));
}

void OCContextMenu::OnVerbDisplayFileName2(HWND hWnd)
{
	OCClientInterface::WebObject(std::wstring(m_szSelectedFile));
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP OCContextMenu::QueryInterface(REFIID riid, void **ppv)
{
	static const QITAB qit[] =
	{
		QITABENT(OCContextMenu, IContextMenu),
		QITABENT(OCContextMenu, IShellExtInit),
		{ 0 },
	};
	return QISearch(this, qit, riid, ppv);
}

// Increase the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) OCContextMenu::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) OCContextMenu::Release()
{
	ULONG cRef = InterlockedDecrement(&m_cRef);
	if (0 == cRef) {
		delete this;
	}

	return cRef;
}

#pragma endregion


#pragma region IShellExtInit

// Initialize the context menu handler.
IFACEMETHODIMP OCContextMenu::Initialize(
	LPCITEMIDLIST pidlFolder, LPDATAOBJECT pDataObj, HKEY hKeyProgID)
{
	if (!pDataObj) {
		return E_INVALIDARG;
	}

	HRESULT hr = E_FAIL;

	FORMATETC fe = { CF_HDROP, NULL, DVASPECT_CONTENT, -1, TYMED_HGLOBAL };
	STGMEDIUM stm;

	if (SUCCEEDED(pDataObj->GetData(&fe, &stm))) {
		// Get an HDROP handle.
		HDROP hDrop = static_cast<HDROP>(GlobalLock(stm.hGlobal));
		if (hDrop) {
			// Ignore multi-selections
			UINT nFiles = DragQueryFile(hDrop, 0xFFFFFFFF, NULL, 0);
			if (nFiles == 1) {
				// Get the path of the file.
				if (0 != DragQueryFile(hDrop, 0, m_szSelectedFile,	ARRAYSIZE(m_szSelectedFile)))
				{
					hr = S_OK;
				}
			}

			GlobalUnlock(stm.hGlobal);
		}

		ReleaseStgMedium(&stm);
	}

	// If any value other than S_OK is returned from the method, the context 
	// menu item is not displayed.
	return hr;
}

#pragma endregion


#pragma region IContextMenu

void InsertSeperator(HMENU hMenu, UINT indexMenu)
{
	// Add a separator.
	MENUITEMINFO sep = { sizeof(sep) };
	sep.fMask = MIIM_TYPE;
	sep.fType = MFT_SEPARATOR;
	InsertMenuItem(hMenu, indexMenu, TRUE, &sep);
}

IFACEMETHODIMP OCContextMenu::QueryContextMenu(HMENU hMenu, UINT indexMenu, UINT idCmdFirst, UINT idCmdLast, UINT uFlags)
{
	// If uFlags include CMF_DEFAULTONLY then we should not do anything.
	if (CMF_DEFAULTONLY & uFlags)
	{
		return MAKE_HRESULT(SEVERITY_SUCCESS, 0, USHORT(0));
	}

	OCClientInterface::ContextMenuInfo info = OCClientInterface::FetchInfo();

	bool skip = true;
	for (const std::wstring path : info.watchedDirectories) {
		if (StringUtil::begins_with(std::wstring(m_szSelectedFile), path)) {
			skip = false;
			break;
		}
	}

	if (skip) {
		return MAKE_HRESULT(SEVERITY_SUCCESS, 0, USHORT(0));
	}

	InsertSeperator(hMenu, indexMenu);

	indexMenu++;

    /*
	assert(!info.shareMenuTitle.empty());
	MENUITEMINFO mii = { sizeof(mii) };
	mii.fMask = MIIM_STRING | MIIM_FTYPE | MIIM_ID | MIIM_STATE;
	mii.wID = idCmdFirst + IDM_SHARE;
	mii.fType = MFT_STRING;
	mii.dwTypeData = &info.shareMenuTitle[0];
	mii.fState = MFS_ENABLED;
	if (!InsertMenuItem(hMenu, indexMenu, TRUE, &mii))
	{
		return HRESULT_FROM_WIN32(GetLastError());
	} */

	assert(!info.infoMenuTitle.empty());
	MENUITEMINFO mii = { sizeof(mii) };
	mii.fMask = MIIM_STRING | MIIM_FTYPE | MIIM_ID | MIIM_STATE;
	mii.wID = idCmdFirst + IDM_INFO; //0 + 0
	mii.fType = MFT_STRING;
	mii.dwTypeData = &info.infoMenuTitle[0];
	mii.fState = MFS_ENABLED;
	if (!InsertMenuItem(hMenu, indexMenu++, TRUE, &mii)) {
		return HRESULT_FROM_WIN32(GetLastError());
	}

	assert(!info.webMenuTitle.empty());
	MENUITEMINFO mii2 = { sizeof(mii2) };
	mii2.fMask = MIIM_STRING | MIIM_FTYPE | MIIM_ID | MIIM_STATE;
	mii2.wID = idCmdFirst + IDM_WEB; //0 + 1
	mii2.fType = MFT_STRING;
	mii2.dwTypeData = &info.webMenuTitle[0];
	mii2.fState = MFS_ENABLED;
	if (!InsertMenuItem(hMenu, indexMenu++, TRUE, &mii2))
	{
		return HRESULT_FROM_WIN32(GetLastError());
	}

	InsertSeperator(hMenu, indexMenu);

	// Return an HRESULT value with the severity set to SEVERITY_SUCCESS. 
	// Set the code value to the offset of the largest command identifier 
	// that was assigned, plus one (1).
	return MAKE_HRESULT(SEVERITY_SUCCESS, 0, USHORT(idCmdFirst + IDM_WEB + 1));
}

IFACEMETHODIMP OCContextMenu::InvokeCommand(LPCMINVOKECOMMANDINFO pici)
{

	// For the Unicode case, if the high-order word is not zero, the 
	// command's verb string is in lpcmi->lpVerbW.

	if (HIWORD(((CMINVOKECOMMANDINFOEX*)pici)->lpVerbW))
	{
		// Is the verb supported by this context menu extension?
		if (StrCmpIW(((CMINVOKECOMMANDINFOEX*)pici)->lpVerbW, m_pwszVerb) == 0) {
			OnVerbDisplayFileName(pici->hwnd);
		} else if (StrCmpIW(((CMINVOKECOMMANDINFOEX*)pici)->lpVerbW, m_pwszVerb2) == 0) {
			OnVerbDisplayFileName2(pici->hwnd);
		} else {
			// If the verb is not recognized by the context menu handler, it 
			// must return E_FAIL to allow it to be passed on to the other 
			// context menu handlers that might implement that verb.
			return E_FAIL;
		}
	}

	// If the command cannot be identified through the verb string, then 
	// check the identifier offset.
	else
	{
		// Is the command identifier offset supported by this context menu 
		// extension?
		if (LOWORD(pici->lpVerb) == IDM_INFO) {
			OnVerbDisplayFileName(pici->hwnd);
		} else if (LOWORD(pici->lpVerb) == IDM_WEB) {
			OnVerbDisplayFileName2(pici->hwnd);
		} else {
			// If the verb is not recognized by the context menu handler, it 
			// must return E_FAIL to allow it to be passed on to the other 
			// context menu handlers that might implement that verb.
			return E_FAIL;
		}
	}

	return S_OK;
}

IFACEMETHODIMP OCContextMenu::GetCommandString(UINT_PTR idCommand,
	UINT uFlags, UINT *pwReserved, LPSTR pszName, UINT cchMax)
{
	HRESULT hr = E_INVALIDARG;

	if (idCommand == IDM_INFO) {

		switch (uFlags)
		{
		case GCS_HELPTEXTW:
			// Only useful for pre-Vista versions of Windows that have a 
			// Status bar.
			hr = StringCchCopy(reinterpret_cast<PWSTR>(pszName), cchMax,
				m_pwszVerbHelpText);
			break;

		case GCS_VERBW:
			// GCS_VERBW is an optional feature that enables a caller to 
			// discover the canonical name for the verb passed in through 
			// idCommand.
			hr = StringCchCopy(reinterpret_cast<PWSTR>(pszName), cchMax,
				m_pwszVerbCanonicalName);
			break;

		default:
			hr = S_OK;
		}
	} else if (idCommand == IDM_WEB) {

		switch (uFlags)
		{
		case GCS_HELPTEXTW:
			// Only useful for pre-Vista versions of Windows that have a
			// Status bar.
			hr = StringCchCopy(reinterpret_cast<PWSTR>(pszName), cchMax, m_pwszVerbHelpText2);
			break;

		case GCS_VERBW:
			// GCS_VERBW is an optional feature that enables a caller to
			// discover the canonical name for the verb passed in through
			// idCommand.
			hr = StringCchCopy(reinterpret_cast<PWSTR>(pszName), cchMax, m_pwszVerbCanonicalName2);
			break;

		default:
			hr = S_OK;
		}
	}

	// If the command (idCommand) is not supported by this context menu 
	// extension handler, return E_INVALIDARG.

	return hr;
}

#pragma endregion