//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCLSedentaryAlarmData : PBCodable <NSCopying>
{
    double _firedTime;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    int _type;	// 24 = 0x18
    _Bool _didWake;	// 28 = 0x1c
    _Bool _regularEntry;	// 29 = 0x1d
    CDStruct_b5306035 _has;	// 32 = 0x20
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool didWake; // @synthesize didWake=_didWake;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double firedTime; // @synthesize firedTime=_firedTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100103728
- (unsigned long long)hash;	// IMP=0x0000000100103608
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010010351c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100103470
- (void)copyTo:(id)arg1;	// IMP=0x0000000100103400
- (void)writeTo:(id)arg1;	// IMP=0x000000010010335c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100103354
- (id)dictionaryRepresentation;	// IMP=0x0000000100102d2c
- (id)description;	// IMP=0x0000000100102cac
@property(nonatomic) _Bool hasTimestamp;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000100102b34
- (id)typeAsString:(int)arg1;	// IMP=0x0000000100102a7c

@end
