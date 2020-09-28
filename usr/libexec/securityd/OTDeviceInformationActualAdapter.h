//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OTDeviceInformationAdapter-Protocol.h"

@class CKKSListenerCollection;

__attribute__((visibility("hidden")))
@interface OTDeviceInformationActualAdapter : NSObject <OTDeviceInformationAdapter>
{
    CKKSListenerCollection *_deviceNameUpdateListeners;	// 8 = 0x8
    struct __SCDynamicStore *_store;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100036f0c
@property struct __SCDynamicStore *store; // @synthesize store=_store;
@property(retain) CKKSListenerCollection *deviceNameUpdateListeners; // @synthesize deviceNameUpdateListeners=_deviceNameUpdateListeners;
- (void)setupDeviceNameListener;	// IMP=0x0000000100036d38
- (id)serialNumber;	// IMP=0x0000000100036c44
- (id)osVersion;	// IMP=0x0000000100036c40
- (void)registerForDeviceNameUpdates:(id)arg1;	// IMP=0x0000000100036b88
- (id)deviceName;	// IMP=0x0000000100036b5c
- (id)modelID;	// IMP=0x0000000100036b1c
- (void)dealloc;	// IMP=0x0000000100036aa4

@end
