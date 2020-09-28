//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface APPBAdRequester : PBCodable <NSCopying>
{
    NSString *_contextJSON;	// 8 = 0x8
    int _height;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    int _width;	// 32 = 0x20
    struct {
        unsigned int height:1;
        unsigned int width:1;
    } _has;	// 36 = 0x24
}

+ (id)options;	// IMP=0x00000001000b6700
- (void).cxx_destruct;	// IMP=0x00000001000b72e8
@property(retain, nonatomic) NSString *contextJSON; // @synthesize contextJSON=_contextJSON;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b71c4
- (unsigned long long)hash;	// IMP=0x00000001000b7118
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b6fe8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b6ee8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b6e2c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b6d78
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b6d70
- (id)dictionaryRepresentation;	// IMP=0x00000001000b68f0
- (id)description;	// IMP=0x00000001000b683c
@property(readonly, nonatomic) _Bool hasContextJSON;
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) _Bool hasWidth;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
