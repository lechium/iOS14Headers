//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface PDURLSessionProxyOpenSocketReply : PBCodable <NSCopying>
{
    int _streamErrorCode;	// 8 = 0x8
    int _streamErrorDomain;	// 12 = 0xc
    struct {
        unsigned int streamErrorCode:1;
        unsigned int streamErrorDomain:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) int streamErrorCode; // @synthesize streamErrorCode=_streamErrorCode;
@property(nonatomic) int streamErrorDomain; // @synthesize streamErrorDomain=_streamErrorDomain;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003b8bc
- (unsigned long long)hash;	// IMP=0x000000010003b868
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003b794
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003b704
- (void)copyTo:(id)arg1;	// IMP=0x000000010003b690
- (void)writeTo:(id)arg1;	// IMP=0x000000010003b614
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003b32c
- (id)dictionaryRepresentation;	// IMP=0x000000010003b228
- (id)description;	// IMP=0x000000010003b174
@property(nonatomic) _Bool hasStreamErrorCode;
@property(nonatomic) _Bool hasStreamErrorDomain;

@end

