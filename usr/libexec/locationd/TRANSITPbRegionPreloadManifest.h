//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface TRANSITPbRegionPreloadManifest : PBCodable <NSCopying>
{
    double _generationTimeSecs;	// 8 = 0x8
    int _expirationAgeSecs;	// 16 = 0x10
    NSMutableArray *_markets;	// 24 = 0x18
    int _version;	// 32 = 0x20
    struct {
        unsigned int generationTimeSecs:1;
        unsigned int expirationAgeSecs:1;
        unsigned int version:1;
    } _has;	// 36 = 0x24
}

@property(retain, nonatomic) NSMutableArray *markets; // @synthesize markets=_markets;
@property(nonatomic) int expirationAgeSecs; // @synthesize expirationAgeSecs=_expirationAgeSecs;
@property(nonatomic) double generationTimeSecs; // @synthesize generationTimeSecs=_generationTimeSecs;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001002e3f60
- (unsigned long long)hash;	// IMP=0x00000001002e3e74
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002e3d70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002e3b84
- (void)copyTo:(id)arg1;	// IMP=0x00000001002e3a58
- (void)writeTo:(id)arg1;	// IMP=0x00000001002e38d4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001002e38cc
- (id)dictionaryRepresentation;	// IMP=0x00000001002e3278
- (id)description;	// IMP=0x00000001002e31f8
- (id)marketsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001002e31e0
- (unsigned long long)marketsCount;	// IMP=0x00000001002e31c8
- (void)addMarkets:(id)arg1;	// IMP=0x00000001002e3174
- (void)clearMarkets;	// IMP=0x00000001002e315c
@property(nonatomic) _Bool hasExpirationAgeSecs;
@property(nonatomic) _Bool hasGenerationTimeSecs;
@property(nonatomic) _Bool hasVersion;
- (void)dealloc;	// IMP=0x00000001002e2ff8

@end

