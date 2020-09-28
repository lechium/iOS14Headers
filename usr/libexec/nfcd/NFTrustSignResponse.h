//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NFTrustObject.h"

@class NFTrustKey, NSData, NSNumber, NSString;

@interface NFTrustSignResponse : NFTrustObject
{
    NSNumber *_counterValue;	// 8 = 0x8
    NFTrustKey *_key;	// 16 = 0x10
    NSData *_trustObjectInternalRawNSData;	// 24 = 0x18
}

+ (id)signResponseWithRawData:(id)arg1 counterValueData:(id)arg2;	// IMP=0x00000001000ab858
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000ab594
- (void).cxx_destruct;	// IMP=0x00000001000aba94
@property(retain, nonatomic) NSData *trustObjectInternalRawNSData; // @synthesize trustObjectInternalRawNSData=_trustObjectInternalRawNSData;
@property(retain, nonatomic) NFTrustKey *key; // @synthesize key=_key;
@property(retain, nonatomic) NSNumber *counterValue; // @synthesize counterValue=_counterValue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000ab764
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000ab5f0
@property(readonly, nonatomic) NSString *rawData;

@end
