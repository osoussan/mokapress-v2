/*
 * libcsync -- a library to sync a directory with another
 *
 * Copyright (c) 2008-2013 by Andreas Schneider <asn@cryptomilk.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */
#include "torture.h"

#define CSYNC_TEST 1
#include "csync_statedb.c"

#define TESTDB "/tmp/check_csync1/test.db"
#define TESTDBTMP "/tmp/check_csync1/test.db.ctmp"



static void setup(void **state)
{
    CSYNC *csync;
    int rc = 0;

    rc = system("rm -rf /tmp/check_csync1");
    assert_int_equal(rc, 0);
    rc = system("rm -rf /tmp/check_csync2");
    assert_int_equal(rc, 0);
    rc = system("mkdir -p /tmp/check_csync1");
    assert_int_equal(rc, 0);
    rc = system("mkdir -p /tmp/check_csync2");
    assert_int_equal(rc, 0);
    rc = system("mkdir -p /tmp/check_csync");
    assert_int_equal(rc, 0);
    csync_create(&csync, "/tmp/check_csync1", "/tmp/check_csync2");
    csync_init(csync);

    sqlite3 *db = NULL;
    rc = sqlite3_open_v2(TESTDB, &db, SQLITE_OPEN_CREATE | SQLITE_OPEN_READWRITE, NULL);
    assert_int_equal(rc, SQLITE_OK);
    rc = sqlite3_close(db);
    assert_int_equal(rc, SQLITE_OK);

    rc = csync_statedb_load(csync, TESTDB, &csync->statedb.db);
    assert_int_equal(rc, 0);

    *state = csync;
}

static void setup_db(void **state)
{
    char *errmsg;
    int rc = 0;
    sqlite3 *db = NULL;

    const char *sql = "CREATE TABLE IF NOT EXISTS metadata ("
        "phash INTEGER(8),"
        "pathlen INTEGER,"
        "path VARCHAR(4096),"
        "inode INTEGER,"
        "uid INTEGER,"
        "gid INTEGER,"
        "mode INTEGER,"
        "modtime INTEGER(8),"
        "type INTEGER,"
        "md5 VARCHAR(32),"
        "PRIMARY KEY(phash)"
        ");";

        const char *sql2 = "INSERT INTO metadata"
                           "(phash, pathlen, path, inode, uid, gid, mode, modtime, type, md5) VALUES"
                           "(42, 42, 'Its funny stuff', 23, 42, 43, 55, 66, 2, 54);";


    setup(state);
    rc = sqlite3_open( TESTDB, &db);
    assert_int_equal(rc, SQLITE_OK);

    rc = sqlite3_exec( db, sql, NULL, NULL, &errmsg );
    assert_int_equal(rc, SQLITE_OK);

    rc = sqlite3_exec( db, sql2, NULL, NULL, &errmsg );
    assert_int_equal(rc, SQLITE_OK);

    sqlite3_close(db);

}

static void teardown(void **state) {
    CSYNC *csync = *state;
    int rc = 0;

    rc = csync_destroy(csync);
    assert_int_equal(rc, 0);
    rc = system("rm -rf /tmp/check_csync");
    assert_int_equal(rc, 0);
    rc = system("rm -rf /tmp/check_csync1");
    assert_int_equal(rc, 0);
    rc = system("rm -rf /tmp/check_csync2");
    assert_int_equal(rc, 0);

    *state = NULL;
}


static void check_csync_statedb_query_statement(void **state)
{
    CSYNC *csync = *state;
    c_strlist_t *result;

    result = csync_statedb_query(csync->statedb.db, "");
    assert_null(result);
    if (result != NULL) {
      c_strlist_destroy(result);
    }

    result = csync_statedb_query(csync->statedb.db, "SELECT;");
    assert_null(result);
    if (result != NULL) {
      c_strlist_destroy(result);
    }
}

static void check_csync_statedb_drop_tables(void **state)
{
    // CSYNC *csync = *state;
    int rc = 0;
    (void) state;

    // rc = csync_statedb_drop_tables(csync->statedb.db);
    assert_int_equal(rc, 0);
    // rc = csync_statedb_create_tables(csync->statedb.db);
    assert_int_equal(rc, 0);
    // rc = csync_statedb_drop_tables(csync->statedb.db);
    assert_int_equal(rc, 0);
}

static void check_csync_statedb_insert_metadata(void **state)
{
    CSYNC *csync = *state;
    csync_file_stat_t *st;
    int i, rc = 0;

    // rc = csync_statedb_create_tables(csync->statedb.db);
    assert_int_equal(rc, 0);

    for (i = 0; i < 100; i++) {
        st = c_malloc(sizeof(csync_file_stat_t) + 30 );
        snprintf(st->path, 29, "file_%d" , i );
        st->phash = i;

        rc = c_rbtree_insert(csync->local.tree, (void *) st);
        assert_int_equal(rc, 0);
    }

    // rc = csync_statedb_insert_metadata(csync, csync->statedb.db);
    assert_int_equal(rc, 0);
}

static void check_csync_statedb_write(void **state)
{
    CSYNC *csync = *state;
    csync_file_stat_t *st;
    int i, rc;

    for (i = 0; i < 100; i++) {
        st = c_malloc(sizeof(csync_file_stat_t) + 30);
        snprintf(st->path, 29, "file_%d" , i );
        st->phash = i;

        rc = c_rbtree_insert(csync->local.tree, (void *) st);
        assert_int_equal(rc, 0);
    }

    // rc = csync_statedb_write(csync, csync->statedb.db);
    assert_int_equal(rc, 0);
}


static void check_csync_statedb_get_stat_by_hash_not_found(void **state)
{
    CSYNC *csync = *state;
    csync_file_stat_t *tmp;

    tmp = csync_statedb_get_stat_by_hash(csync, (uint64_t) 666);
    assert_null(tmp);

    free(tmp);
}


static void check_csync_statedb_get_stat_by_inode_not_found(void **state)
{
    CSYNC *csync = *state;
    csync_file_stat_t *tmp;

    tmp = csync_statedb_get_stat_by_inode(csync, (ino_t) 666);
    assert_null(tmp);
}

int torture_run_tests(void)
{
    const UnitTest tests[] = {
        unit_test_setup_teardown(check_csync_statedb_query_statement, setup, teardown),
        unit_test_setup_teardown(check_csync_statedb_drop_tables, setup, teardown),
        unit_test_setup_teardown(check_csync_statedb_insert_metadata, setup, teardown),
        unit_test_setup_teardown(check_csync_statedb_write, setup, teardown),
        unit_test_setup_teardown(check_csync_statedb_get_stat_by_hash_not_found, setup_db, teardown),
        unit_test_setup_teardown(check_csync_statedb_get_stat_by_inode_not_found, setup_db, teardown),
    };

    return run_tests(tests);
}

