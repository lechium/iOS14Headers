//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface APPBNativeMediaCreativeMetadata : PBCodable <NSCopying>
{
    NSString *_backgroundImage;	// 8 = 0x8
    NSString *_endCard;	// 16 = 0x10
    int _height;	// 24 = 0x18
    NSString *_videoFileURL;	// 32 = 0x20
    int _width;	// 40 = 0x28
    int _xPosition;	// 44 = 0x2c
    int _yPosition;	// 48 = 0x30
    struct {
        unsigned int height:1;
        unsigned int width:1;
        unsigned int xPosition:1;
        unsigned int yPosition:1;
    } _has;	// 52 = 0x34
}

+ (id)options;	// IMP=0x00000001000a9884
- (void).cxx_destruct;	// IMP=0x00000001000aaa70
@property(retain, nonatomic) NSString *endCard; // @synthesize endCard=_endCard;
@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) int yPosition; // @synthesize yPosition=_yPosition;
@property(nonatomic) int xPosition; // @synthesize xPosition=_xPosition;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *videoFileURL; // @synthesize videoFileURL=_videoFileURL;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000aa890
- (unsigned long long)hash;	// IMP=0x00000001000aa78c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000aa5dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000aa45c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000aa328
- (void)writeTo:(id)arg1;	// IMP=0x00000001000aa208
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000aa200
- (id)dictionaryRepresentation;	// IMP=0x00000001000a9b4c
- (id)description;	// IMP=0x00000001000a9a98
@property(readonly, nonatomic) _Bool hasEndCard;
@property(readonly, nonatomic) _Bool hasBackgroundImage;
@property(nonatomic) _Bool hasYPosition;
@property(nonatomic) _Bool hasXPosition;
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) _Bool hasWidth;
@property(readonly, nonatomic) _Bool hasVideoFileURL;

@end

