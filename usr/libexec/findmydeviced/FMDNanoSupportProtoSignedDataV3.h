//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface FMDNanoSupportProtoSignedDataV3 : PBCodable <NSCopying>
{
    NSData *_finalRequestJsonData;	// 8 = 0x8
    NSString *_signatureError;	// 16 = 0x10
    NSData *_signedData;	// 24 = 0x18
    NSData *_skAuth;	// 32 = 0x20
    _Bool _errorOccurred;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000bd434
@property(retain, nonatomic) NSString *signatureError; // @synthesize signatureError=_signatureError;
@property(retain, nonatomic) NSData *finalRequestJsonData; // @synthesize finalRequestJsonData=_finalRequestJsonData;
@property(retain, nonatomic) NSData *skAuth; // @synthesize skAuth=_skAuth;
@property(retain, nonatomic) NSData *signedData; // @synthesize signedData=_signedData;
@property(nonatomic) _Bool errorOccurred; // @synthesize errorOccurred=_errorOccurred;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000bd2c8
- (unsigned long long)hash;	// IMP=0x00000001000bd224
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000bd0d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000bcfc8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000bcf0c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000bce5c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000bce54
- (id)dictionaryRepresentation;	// IMP=0x00000001000bca6c
- (id)description;	// IMP=0x00000001000bc9b8
@property(readonly, nonatomic) _Bool hasSignatureError;
@property(readonly, nonatomic) _Bool hasFinalRequestJsonData;
@property(readonly, nonatomic) _Bool hasSkAuth;
@property(readonly, nonatomic) _Bool hasSignedData;

@end
