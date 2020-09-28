//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface TxHist : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _numTxLevels;	// 8 = 0x8
    int _chanType;	// 32 = 0x20
    int _minTxLevel;	// 36 = 0x24
    unsigned int _workMode;	// 40 = 0x28
    struct {
        unsigned int chanType:1;
        unsigned int minTxLevel:1;
        unsigned int workMode:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) int minTxLevel; // @synthesize minTxLevel=_minTxLevel;
@property(nonatomic) unsigned int workMode; // @synthesize workMode=_workMode;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000a7b8c
- (unsigned long long)hash;	// IMP=0x00000001000a7af0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000a79e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000a790c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000a77d4
- (void)writeTo:(id)arg1;	// IMP=0x00000001000a76c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000a76b8
- (id)dictionaryRepresentation;	// IMP=0x00000001000a6e74
- (id)description;	// IMP=0x00000001000a6dc0
- (void)setNumTxLevels:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000001000a6da8
- (unsigned int)numTxLevelAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000a6cd0
- (void)addNumTxLevel:(unsigned int)arg1;	// IMP=0x00000001000a6cbc
- (void)clearNumTxLevels;	// IMP=0x00000001000a6cac
@property(readonly, nonatomic) unsigned int *numTxLevels;
@property(readonly, nonatomic) unsigned long long numTxLevelsCount;
@property(nonatomic) _Bool hasMinTxLevel;
@property(nonatomic) _Bool hasWorkMode;
- (int)StringAsChanType:(id)arg1;	// IMP=0x00000001000a6b5c
- (id)chanTypeAsString:(int)arg1;	// IMP=0x00000001000a6af8
@property(nonatomic) _Bool hasChanType;
@property(nonatomic) int chanType; // @synthesize chanType=_chanType;
- (void)dealloc;	// IMP=0x00000001000a6a2c

@end
