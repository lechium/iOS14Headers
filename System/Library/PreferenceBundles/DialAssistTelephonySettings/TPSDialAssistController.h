//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, TPSCarrierBundleController;

@interface TPSDialAssistController : NSObject
{
    NSOrderedSet *_subscriptions;	// 8 = 0x8
    TPSCarrierBundleController *_carrierBundleController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002d24
@property(readonly, nonatomic) TPSCarrierBundleController *carrierBundleController; // @synthesize carrierBundleController=_carrierBundleController;
@property(readonly, nonatomic) NSOrderedSet *subscriptions; // @synthesize subscriptions=_subscriptions;
- (_Bool)supportsDialAssistForSubscriptionContext:(id)arg1;	// IMP=0x0000000000002bd0
- (id)init;	// IMP=0x0000000000002b6c

@end
