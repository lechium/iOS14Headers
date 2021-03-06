//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface CellularLteCellMetric : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _durationSeconds;	// 16 = 0x10
    NSMutableArray *_lteMetrics;	// 24 = 0x18
    unsigned int _mcc;	// 32 = 0x20
    unsigned int _mnc;	// 36 = 0x24
    unsigned int _version;	// 40 = 0x28
    struct {
        unsigned int timestamp:1;
        unsigned int durationSeconds:1;
        unsigned int mcc:1;
        unsigned int mnc:1;
        unsigned int version:1;
    } _has;	// 44 = 0x2c
}

+ (Class)lteMetricsType;	// IMP=0x0000000100060b00
- (void).cxx_destruct;	// IMP=0x00000001000620a8
@property(retain, nonatomic) NSMutableArray *lteMetrics; // @synthesize lteMetrics=_lteMetrics;
@property(nonatomic) unsigned int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) unsigned int mcc; // @synthesize mcc=_mcc;
@property(nonatomic) unsigned int durationSeconds; // @synthesize durationSeconds=_durationSeconds;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100061e28
- (unsigned long long)hash;	// IMP=0x0000000100061d44
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100061bcc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100061984
- (void)copyTo:(id)arg1;	// IMP=0x00000001000617e0
- (void)writeTo:(id)arg1;	// IMP=0x00000001000615f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000615f0
- (id)dictionaryRepresentation;	// IMP=0x0000000100060bc0
- (id)description;	// IMP=0x0000000100060b0c
- (id)lteMetricsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100060ae8
- (unsigned long long)lteMetricsCount;	// IMP=0x0000000100060ad0
- (void)addLteMetrics:(id)arg1;	// IMP=0x0000000100060a5c
- (void)clearLteMetrics;	// IMP=0x0000000100060a44
@property(nonatomic) _Bool hasMnc;
@property(nonatomic) _Bool hasMcc;
@property(nonatomic) _Bool hasDurationSeconds;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasTimestamp;

@end

