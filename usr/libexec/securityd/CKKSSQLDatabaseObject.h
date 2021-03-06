//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CKKSSQLDatabaseObject : NSObject <NSCopying>
{
    NSDictionary *_originalSelfWhereClause;	// 8 = 0x8
}

+ (id)sqlColumns;	// IMP=0x0000000100031970
+ (id)sqlTable;	// IMP=0x00000001000318c0
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0000000100031804
+ (id)fetch:(unsigned long long)arg1 where:(id)arg2 orderBy:(id)arg3 error:(id *)arg4;	// IMP=0x000000010003165c
+ (id)fetch:(unsigned long long)arg1 where:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100031648
+ (id)fetch:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000100031630
+ (id)allWhere:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000314ac
+ (id)all:(id *)arg1;	// IMP=0x0000000100031498
+ (id)tryFromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100031328
+ (id)fromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000311c0
+ (_Bool)deleteAll:(id *)arg1;	// IMP=0x000000010003114c
+ (_Bool)performCKKSTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100031004
+ (_Bool)queryMaxValueForField:(id)arg1 inTable:(id)arg2 where:(id)arg3 columns:(id)arg4 processRow:(CDUnknownBlockType)arg5;	// IMP=0x0000000100030e4c
+ (id)quotedString:(id)arg1;	// IMP=0x0000000100030db4
+ (_Bool)queryDatabaseTable:(id)arg1 where:(id)arg2 columns:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 processRow:(CDUnknownBlockType)arg7 error:(id *)arg8;	// IMP=0x0000000100030b7c
+ (_Bool)deleteFromTable:(id)arg1 where:(id)arg2 connection:(struct __OpaqueSecDbConnection *)arg3 error:(id *)arg4;	// IMP=0x00000001000309f8
+ (void)bindWhereClause:(struct sqlite3_stmt *)arg1 whereDict:(id)arg2 cferror:(struct __CFError **)arg3;	// IMP=0x00000001000308ec
+ (id)orderByClause:(id)arg1;	// IMP=0x00000001000307ec
+ (id)groupByClause:(id)arg1;	// IMP=0x0000000100030700
+ (id)makeWhereClause:(id)arg1;	// IMP=0x0000000100030614
+ (_Bool)saveToDatabaseTable:(id)arg1 row:(id)arg2 connection:(struct __OpaqueSecDbConnection *)arg3 error:(id *)arg4;	// IMP=0x0000000100030498
+ (_Bool)deleteAll:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005a460
+ (id)all:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005a33c
+ (id)allUUIDs:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005a108
- (void).cxx_destruct;	// IMP=0x000000010003048c
@property(copy) NSDictionary *originalSelfWhereClause; // @synthesize originalSelfWhereClause=_originalSelfWhereClause;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100030424
- (id)whereClauseToFindSelf;	// IMP=0x0000000100030374
- (id)sqlValues;	// IMP=0x00000001000302c4
- (id)memoizeOriginalSelfWhereClause;	// IMP=0x0000000100030280
- (_Bool)deleteFromDatabase:(id *)arg1;	// IMP=0x00000001000301e0
- (_Bool)saveToDatabaseWithConnection:(struct __OpaqueSecDbConnection *)arg1 error:(id *)arg2;	// IMP=0x000000010003001c
- (_Bool)saveToDatabase:(id *)arg1;	// IMP=0x0000000100030008

@end

