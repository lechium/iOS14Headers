//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface NPTOAsset : PBCodable <NSCopying>
{
    long long _date;	// 8 = 0x8
    NSData *_uuidData;	// 16 = 0x10
    struct {
        unsigned int date:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000e24c
@property(nonatomic) long long date; // @synthesize date=_date;
@property(retain, nonatomic) NSData *uuidData; // @synthesize uuidData=_uuidData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000e1a0
- (unsigned long long)hash;	// IMP=0x000000010000e138
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000e05c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000dfb4
- (void)copyTo:(id)arg1;	// IMP=0x000000010000df3c
- (void)writeTo:(id)arg1;	// IMP=0x000000010000decc
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000dec4
- (id)dictionaryRepresentation;	// IMP=0x000000010000dbec
- (id)description;	// IMP=0x000000010000db38
@property(nonatomic) _Bool hasDate;
@property(readonly, nonatomic) _Bool hasUuidData;
- (id)localIdentifier;	// IMP=0x000000010001c6ec
- (void)setDateAsDate:(id)arg1;	// IMP=0x0000000100025bcc
- (id)dateAsDate;	// IMP=0x0000000100025b5c

@end
