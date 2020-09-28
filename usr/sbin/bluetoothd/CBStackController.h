//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CBStackController : NSObject
{
    _Bool _addedController;	// 8 = 0x8
    CDUnknownBlockType _discoverableStateChangedHandler;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    CDUnknownBlockType _inquiryStateChangedHandler;	// 32 = 0x20
    CDUnknownBlockType _invalidationHandler;	// 40 = 0x28
    CDUnknownBlockType _powerChangedHandler;	// 48 = 0x30
}

+ (_Bool)powerOff:(id *)arg1;	// IMP=0x000000010001fe0c
+ (_Bool)powerOn:(id *)arg1;	// IMP=0x000000010001fd70
+ (long long)powerState;	// IMP=0x000000010001fd10
+ (int)inquiryState;	// IMP=0x000000010001fcc0
+ (int)discoverableState;	// IMP=0x000000010001fc5c
- (void).cxx_destruct;	// IMP=0x0000000100020704
@property(copy, nonatomic) CDUnknownBlockType powerChangedHandler; // @synthesize powerChangedHandler=_powerChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType inquiryStateChangedHandler; // @synthesize inquiryStateChangedHandler=_inquiryStateChangedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType discoverableStateChangedHandler; // @synthesize discoverableStateChangedHandler=_discoverableStateChangedHandler;
- (void)localDeviceEvent:(int)arg1;	// IMP=0x000000010002039c
- (void)invalidate;	// IMP=0x0000000100020184
- (void)activate;	// IMP=0x000000010001ff90
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010001feb8
- (id)description;	// IMP=0x000000010001fea8

@end
