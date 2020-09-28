//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENTemporaryExposureKey, NSData;

@interface CTAdvertisement : NSObject
{
    BOOL _rssi;	// 8 = 0x8
    _Bool _saturated;	// 9 = 0x9
    unsigned char _counter;	// 10 = 0xa
    unsigned short _scanInterval;	// 12 = 0xc
    unsigned short _countryCode;	// 14 = 0xe
    NSData *_rpi;	// 16 = 0x10
    NSData *_encryptedAEM;	// 24 = 0x18
    double _timestamp;	// 32 = 0x20
    ENTemporaryExposureKey *_temporaryExposureKey;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100245ff8
@property(retain, nonatomic) ENTemporaryExposureKey *temporaryExposureKey; // @synthesize temporaryExposureKey=_temporaryExposureKey;
@property(nonatomic) unsigned char counter; // @synthesize counter=_counter;
@property(nonatomic) unsigned short countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool saturated; // @synthesize saturated=_saturated;
@property(nonatomic) BOOL rssi; // @synthesize rssi=_rssi;
@property(nonatomic) unsigned short scanInterval; // @synthesize scanInterval=_scanInterval;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSData *encryptedAEM; // @synthesize encryptedAEM=_encryptedAEM;
@property(retain, nonatomic) NSData *rpi; // @synthesize rpi=_rpi;
- (void)combineWithAdvertisement:(id)arg1;	// IMP=0x0000000100245da0
- (CDStruct_3f8e1fcf)structRepresentation;	// IMP=0x0000000100245d14
- (id)initWithRPI:(id)arg1 encryptedAEM:(id)arg2 timestamp:(double)arg3 scanInterval:(unsigned short)arg4 avgRSSI:(BOOL)arg5 saturated:(_Bool)arg6 countryCode:(unsigned short)arg7 counter:(unsigned char)arg8;	// IMP=0x0000000100245c08
- (id)initWithStructRepresentation:(CDStruct_3f8e1fcf)arg1;	// IMP=0x0000000100245b04

@end
