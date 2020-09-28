//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BRKIDSServiceCompanionContextManagerDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"

@class BRKIDSService, CLLocationManager, NSString;
@protocol OS_dispatch_queue;

@interface BRKCompanionContextManager : NSObject <CLLocationManagerDelegate, BRKIDSServiceCompanionContextManagerDelegate>
{
    BRKIDSService *_idsService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_idsQueue;	// 16 = 0x10
    CLLocationManager *_locationManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100002628
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x0000000100002434
- (void)locationManager:(id)arg1 didEnter:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100002110
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0000000100002040
- (void)stopMonitoring:(id)arg1 forRegion:(id)arg2;	// IMP=0x0000000100001f50
- (void)startMonitoring:(id)arg1 forRegion:(id)arg2;	// IMP=0x0000000100001e60
- (id)initWithBRKIDSService:(id)arg1;	// IMP=0x0000000100001ccc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
