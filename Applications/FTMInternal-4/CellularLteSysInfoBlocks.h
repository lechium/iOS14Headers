//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class Mib, NSMutableArray;

@interface CellularLteSysInfoBlocks : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _cellId;	// 16 = 0x10
    unsigned int _freq;	// 20 = 0x14
    unsigned int _freqBandInd;	// 24 = 0x18
    Mib *_mib;	// 32 = 0x20
    unsigned int _numMncDigits;	// 40 = 0x28
    unsigned int _phyCellId;	// 44 = 0x2c
    unsigned int _selPlmnMcc;	// 48 = 0x30
    unsigned int _selPlmnMnc;	// 52 = 0x34
    NSMutableArray *_sibs;	// 56 = 0x38
    unsigned int _subsId;	// 64 = 0x40
    unsigned int _trackingAreaCode;	// 68 = 0x44
    unsigned int _valueTag;	// 72 = 0x48
    struct {
        unsigned int timestamp:1;
        unsigned int cellId:1;
        unsigned int freq:1;
        unsigned int freqBandInd:1;
        unsigned int numMncDigits:1;
        unsigned int phyCellId:1;
        unsigned int selPlmnMcc:1;
        unsigned int selPlmnMnc:1;
        unsigned int subsId:1;
        unsigned int trackingAreaCode:1;
        unsigned int valueTag:1;
    } _has;	// 76 = 0x4c
}

+ (Class)sibType;	// IMP=0x00000001000cd630
- (void).cxx_destruct;	// IMP=0x00000001000cfbcc
@property(nonatomic) unsigned int subsId; // @synthesize subsId=_subsId;
@property(nonatomic) unsigned int numMncDigits; // @synthesize numMncDigits=_numMncDigits;
@property(nonatomic) unsigned int selPlmnMnc; // @synthesize selPlmnMnc=_selPlmnMnc;
@property(nonatomic) unsigned int selPlmnMcc; // @synthesize selPlmnMcc=_selPlmnMcc;
@property(nonatomic) unsigned int trackingAreaCode; // @synthesize trackingAreaCode=_trackingAreaCode;
@property(nonatomic) unsigned int freqBandInd; // @synthesize freqBandInd=_freqBandInd;
@property(retain, nonatomic) NSMutableArray *sibs; // @synthesize sibs=_sibs;
@property(retain, nonatomic) Mib *mib; // @synthesize mib=_mib;
@property(nonatomic) unsigned int valueTag; // @synthesize valueTag=_valueTag;
@property(nonatomic) unsigned int phyCellId; // @synthesize phyCellId=_phyCellId;
@property(nonatomic) unsigned int freq; // @synthesize freq=_freq;
@property(nonatomic) unsigned int cellId; // @synthesize cellId=_cellId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000cf7a0
- (unsigned long long)hash;	// IMP=0x00000001000cf5c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000cf320
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000cefb4
- (void)copyTo:(id)arg1;	// IMP=0x00000001000ced00
- (void)writeTo:(id)arg1;	// IMP=0x00000001000cea1c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000cea14
- (id)dictionaryRepresentation;	// IMP=0x00000001000cd938
- (id)description;	// IMP=0x00000001000cd884
@property(nonatomic) _Bool hasSubsId;
@property(nonatomic) _Bool hasNumMncDigits;
@property(nonatomic) _Bool hasSelPlmnMnc;
@property(nonatomic) _Bool hasSelPlmnMcc;
@property(nonatomic) _Bool hasTrackingAreaCode;
@property(nonatomic) _Bool hasFreqBandInd;
- (id)sibAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000cd618
- (unsigned long long)sibsCount;	// IMP=0x00000001000cd600
- (void)addSib:(id)arg1;	// IMP=0x00000001000cd58c
- (void)clearSibs;	// IMP=0x00000001000cd574
@property(readonly, nonatomic) _Bool hasMib;
@property(nonatomic) _Bool hasValueTag;
@property(nonatomic) _Bool hasPhyCellId;
@property(nonatomic) _Bool hasFreq;
@property(nonatomic) _Bool hasCellId;
@property(nonatomic) _Bool hasTimestamp;

@end
