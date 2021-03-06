//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSCKRecordHolder.h"

@class NSString;
@protocol SecCKKSProcessedState;

__attribute__((visibility("hidden")))
@interface CKKSCurrentItemPointer : CKKSCKRecordHolder
{
    NSString<SecCKKSProcessedState> *_state;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_currentItemUUID;	// 24 = 0x18
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0000000100085b8c
+ (id)sqlColumns;	// IMP=0x0000000100085b80
+ (id)sqlTable;	// IMP=0x0000000100085b74
+ (_Bool)deleteAll:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100085a3c
+ (id)allInZone:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100085950
+ (id)remoteItemPointers:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100085850
+ (id)tryFromDatabase:(id)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100085714
+ (id)fromDatabase:(id)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000855d8
- (void).cxx_destruct;	// IMP=0x0000000100085584
@property(retain) NSString *currentItemUUID; // @synthesize currentItemUUID=_currentItemUUID;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString<SecCKKSProcessedState> *state; // @synthesize state=_state;
- (id)sqlValues;	// IMP=0x000000010008527c
- (id)whereClauseToFindSelf;	// IMP=0x0000000100085134
- (void)setFromCKRecord:(id)arg1;	// IMP=0x0000000100084f28
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x0000000100084d68
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x0000000100084a10
- (id)CKRecordName;	// IMP=0x0000000100084a04
- (id)description;	// IMP=0x0000000100084910
- (id)initForIdentifier:(id)arg1 currentItemUUID:(id)arg2 state:(id)arg3 zoneID:(id)arg4 encodedCKRecord:(id)arg5;	// IMP=0x00000001000847f4

@end

