//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NEKPBDeletionWrapper : PBCodable <NSCopying>
{
    NSString *_calendarIdentifier;	// 8 = 0x8
    NSString *_syncId;	// 16 = 0x10
    unsigned int _type;	// 24 = 0x18
    struct {
        unsigned int type:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000010006f1f0
@property(retain, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *syncId; // @synthesize syncId=_syncId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010006f100
- (unsigned long long)hash;	// IMP=0x000000010006f074
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010006ef68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006ee8c
- (void)copyTo:(id)arg1;	// IMP=0x000000010006edf4
- (void)writeTo:(id)arg1;	// IMP=0x000000010006ed68
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010006ed60
- (id)dictionaryRepresentation;	// IMP=0x000000010006e9f8
- (id)description;	// IMP=0x000000010006e944
@property(readonly, nonatomic) _Bool hasCalendarIdentifier;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasSyncId;

@end

