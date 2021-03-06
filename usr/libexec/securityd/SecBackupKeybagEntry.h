//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSSQLDatabaseObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SecBackupKeybagEntry : CKKSSQLDatabaseObject
{
    NSData *_publickeyHash;	// 8 = 0x8
    NSData *_publickey;	// 16 = 0x10
    NSData *_musr;	// 24 = 0x18
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x000000010016ac34
+ (id)sqlColumns;	// IMP=0x000000010016ac28
+ (id)sqlTable;	// IMP=0x000000010016ac1c
+ (id)tryFromDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x000000010016ab34
+ (id)fromDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x000000010016aa4c
+ (id)state:(id)arg1;	// IMP=0x000000010016a900
- (void).cxx_destruct;	// IMP=0x000000010016a8ac
@property(retain) NSData *musr; // @synthesize musr=_musr;
@property(retain) NSData *publickey; // @synthesize publickey=_publickey;
@property(retain) NSData *publickeyHash; // @synthesize publickeyHash=_publickeyHash;
- (id)sqlValues;	// IMP=0x000000010016a6c0
- (id)whereClauseToFindSelf;	// IMP=0x000000010016a614
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010016a538
- (id)initWithPublicKey:(id)arg1 publickeyHash:(id)arg2 user:(id)arg3;	// IMP=0x000000010016a450

@end

