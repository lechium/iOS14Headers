//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMAltimeter, NSOperationQueue;

@interface IOSAltimeter : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
    CMAltimeter *_altimeter;	// 16 = 0x10
    struct optional<AltimeterSensor> _sensor;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x00000001002c33fc
- (void).cxx_destruct;	// IMP=0x00000001002c3358
- (struct Sensor *)getSensor;	// IMP=0x00000001002c3350
- (void)stop;	// IMP=0x00000001002c3340
- (void)start;	// IMP=0x00000001002c3094
- (_Bool)sensorPresent;	// IMP=0x00000001002c3080
- (id)initWithOperationQueue:(id)arg1;	// IMP=0x00000001002c2d84
- (id)init;	// IMP=0x00000001002c2d34

@end
