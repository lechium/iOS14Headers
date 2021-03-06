//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface KCellularMmCommonInfo : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSMutableArray *_eplmnLists;	// 16 = 0x10
    NSData *_imsi;	// 24 = 0x18
    NSMutableArray *_regProvFlaiLists;	// 32 = 0x20
    NSMutableArray *_regProvFtaiLists;	// 40 = 0x28
    NSMutableArray *_roamingFlaiLists;	// 48 = 0x30
    NSMutableArray *_roamingFtaiLists;	// 56 = 0x38
    unsigned int _subsId;	// 64 = 0x40
    CDStruct_178f3450 _has;	// 68 = 0x44
}

+ (Class)regProvFtaiListType;	// IMP=0x000000010000bc10
+ (Class)roamingFtaiListType;	// IMP=0x000000010000bb48
+ (Class)regProvFlaiListType;	// IMP=0x000000010000ba80
+ (Class)roamingFlaiListType;	// IMP=0x000000010000b9b8
+ (Class)eplmnListType;	// IMP=0x000000010000b8f0
- (void).cxx_destruct;	// IMP=0x000000010000e060
@property(nonatomic) unsigned int subsId; // @synthesize subsId=_subsId;
@property(retain, nonatomic) NSMutableArray *regProvFtaiLists; // @synthesize regProvFtaiLists=_regProvFtaiLists;
@property(retain, nonatomic) NSMutableArray *roamingFtaiLists; // @synthesize roamingFtaiLists=_roamingFtaiLists;
@property(retain, nonatomic) NSMutableArray *regProvFlaiLists; // @synthesize regProvFlaiLists=_regProvFlaiLists;
@property(retain, nonatomic) NSMutableArray *roamingFlaiLists; // @synthesize roamingFlaiLists=_roamingFlaiLists;
@property(retain, nonatomic) NSMutableArray *eplmnLists; // @synthesize eplmnLists=_eplmnLists;
@property(retain, nonatomic) NSData *imsi; // @synthesize imsi=_imsi;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000dafc
- (unsigned long long)hash;	// IMP=0x000000010000d9e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000d7fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000d2c0
- (void)copyTo:(id)arg1;	// IMP=0x000000010000cf3c
- (void)writeTo:(id)arg1;	// IMP=0x000000010000cb04
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000cafc
- (id)dictionaryRepresentation;	// IMP=0x000000010000bd30
- (id)description;	// IMP=0x000000010000bc7c
@property(nonatomic) _Bool hasSubsId;
- (id)regProvFtaiListAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000bbf8
- (unsigned long long)regProvFtaiListsCount;	// IMP=0x000000010000bbe0
- (void)addRegProvFtaiList:(id)arg1;	// IMP=0x000000010000bb6c
- (void)clearRegProvFtaiLists;	// IMP=0x000000010000bb54
- (id)roamingFtaiListAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000bb30
- (unsigned long long)roamingFtaiListsCount;	// IMP=0x000000010000bb18
- (void)addRoamingFtaiList:(id)arg1;	// IMP=0x000000010000baa4
- (void)clearRoamingFtaiLists;	// IMP=0x000000010000ba8c
- (id)regProvFlaiListAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000ba68
- (unsigned long long)regProvFlaiListsCount;	// IMP=0x000000010000ba50
- (void)addRegProvFlaiList:(id)arg1;	// IMP=0x000000010000b9dc
- (void)clearRegProvFlaiLists;	// IMP=0x000000010000b9c4
- (id)roamingFlaiListAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000b9a0
- (unsigned long long)roamingFlaiListsCount;	// IMP=0x000000010000b988
- (void)addRoamingFlaiList:(id)arg1;	// IMP=0x000000010000b914
- (void)clearRoamingFlaiLists;	// IMP=0x000000010000b8fc
- (id)eplmnListAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000b8d8
- (unsigned long long)eplmnListsCount;	// IMP=0x000000010000b8c0
- (void)addEplmnList:(id)arg1;	// IMP=0x000000010000b84c
- (void)clearEplmnLists;	// IMP=0x000000010000b834
@property(readonly, nonatomic) _Bool hasImsi;
@property(nonatomic) _Bool hasTimestamp;

@end

