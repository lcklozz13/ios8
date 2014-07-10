/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface HDSQLiteDatabase : NSObject
{
    struct sqlite3 *_db;
    _Bool _isInTransaction;
    long long _transactionType;
    struct __CFDictionary *_statementCache;
    NSMutableDictionary *_attachedDatabaseURLsByName;
}

+ (_Bool)deleteDatabaseAtPath:(id)arg1;
+ (void)_stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(_Bool *)arg2 didFinish:(_Bool *)arg3;
+ (id)virtualFilesystemModule;
+ (_Bool)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg1;
+ (_Bool)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg1;
- (void).cxx_destruct;
- (struct sqlite3_stmt *)_statementForSQL:(id)arg1 cache:(_Bool)arg2;
- (void)_deleteDatabaseWithPath:(id)arg1;
- (_Bool)isDatabaseWithNameAttached:(id)arg1;
- (void)detachDatabaseWithName:(id)arg1;
- (_Bool)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id *)arg3;
- (_Bool)insertColumns:(id)arg1 fromTableNamed:(id)arg2 toTableNamed:(id)arg3;
- (_Bool)renameTable:(id)arg1 newName:(id)arg2;
- (_Bool)dropTable:(id)arg1;
- (_Bool)alterTable:(id)arg1 removeColumns:(id)arg2 renameColumns:(id)arg3;
- (_Bool)renameColumnInTable:(id)arg1 oldName:(id)arg2 newName:(id)arg3;
- (_Bool)removeColumnInTable:(id)arg1 name:(id)arg2;
- (_Bool)addColumnInTable:(id)arg1 columnSQL:(id)arg2;
- (long long)userVersionWithDatabaseName:(id)arg1;
- (_Bool)setUserVersion:(long long)arg1 withDatabaseName:(id)arg2;
- (void)prepareStatementForSQL:(id)arg1 cache:(_Bool)arg2 usingBlock:(id)arg3;
- (void)performTransactionWithType:(long long)arg1 usingBlock:(id)arg2;
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2;
- (_Bool)executeSQL:(id)arg1;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (int)_openWithPath:(id)arg1;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1;

@end
