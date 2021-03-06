//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface APPBOptOutRequest : PBRequest <NSCopying>
{
    double _statusChangeTimestamp;	// 8 = 0x8
    double _transmitTimestamp;	// 16 = 0x10
    NSData *_dPID;	// 24 = 0x18
    NSData *_iAdID;	// 32 = 0x20
    float _timezone;	// 40 = 0x28
    _Bool _optedOutStatus;	// 44 = 0x2c
    struct {
        unsigned int statusChangeTimestamp:1;
        unsigned int transmitTimestamp:1;
        unsigned int timezone:1;
        unsigned int optedOutStatus:1;
    } _has;	// 48 = 0x30
}

+ (id)options;	// IMP=0x0000000100083c48
- (void).cxx_destruct;	// IMP=0x0000000100084ce4
@property(retain, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
@property(nonatomic) float timezone; // @synthesize timezone=_timezone;
@property(nonatomic) double statusChangeTimestamp; // @synthesize statusChangeTimestamp=_statusChangeTimestamp;
@property(nonatomic) double transmitTimestamp; // @synthesize transmitTimestamp=_transmitTimestamp;
@property(nonatomic) _Bool optedOutStatus; // @synthesize optedOutStatus=_optedOutStatus;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100084b48
- (unsigned long long)hash;	// IMP=0x00000001000849ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100084824
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000846cc
- (void)copyTo:(id)arg1;	// IMP=0x00000001000845b8
- (void)writeTo:(id)arg1;	// IMP=0x00000001000844b4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000844ac
- (id)dictionaryRepresentation;	// IMP=0x0000000100083ef8
- (id)description;	// IMP=0x0000000100083e44
@property(readonly, nonatomic) _Bool hasDPID;
@property(nonatomic) _Bool hasTimezone;
@property(nonatomic) _Bool hasStatusChangeTimestamp;
@property(nonatomic) _Bool hasTransmitTimestamp;
@property(nonatomic) _Bool hasOptedOutStatus;
@property(readonly, nonatomic) _Bool hasIAdID;

@end

