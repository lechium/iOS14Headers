//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface PerReleaseCause : PBCodable <NSCopying>
{
    int _mrab;	// 8 = 0x8
    unsigned int _numCalls;	// 12 = 0xc
    int _releaseCause;	// 16 = 0x10
    struct {
        unsigned int mrab:1;
        unsigned int numCalls:1;
        unsigned int releaseCause:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned int numCalls; // @synthesize numCalls=_numCalls;
@property(nonatomic) int releaseCause; // @synthesize releaseCause=_releaseCause;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100065a34
- (unsigned long long)hash;	// IMP=0x00000001000659c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000658c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100065804
- (void)copyTo:(id)arg1;	// IMP=0x0000000100065760
- (void)writeTo:(id)arg1;	// IMP=0x00000001000656b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000656b0
- (id)dictionaryRepresentation;	// IMP=0x000000010006504c
- (id)description;	// IMP=0x0000000100064f98
@property(nonatomic) _Bool hasNumCalls;
- (int)StringAsMrab:(id)arg1;	// IMP=0x0000000100064e98
- (id)mrabAsString:(int)arg1;	// IMP=0x0000000100064e20
@property(nonatomic) _Bool hasMrab;
@property(nonatomic) int mrab; // @synthesize mrab=_mrab;
@property(nonatomic) _Bool hasReleaseCause;

@end
