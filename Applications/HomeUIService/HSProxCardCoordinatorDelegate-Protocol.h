//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HFSetupPairingObserver-Protocol.h"
#import "HMSetupRemoteService-Protocol.h"

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, UIViewController;

@protocol HSProxCardCoordinatorDelegate <HFSetupPairingObserver, HMSetupRemoteService>
- (unsigned long long)coordinatorGetNumberOfProxCards:(HSProxCardCoordinator *)arg1;
- (UIViewController *)viewControllerForCoordinator:(HSProxCardCoordinator *)arg1 step:(unsigned long long)arg2;
- (void)coordinatorRequestedDismissal:(HSProxCardCoordinator *)arg1;
- (void)coordinator:(HSProxCardCoordinator *)arg1 updatedConfiguration:(HSSetupStateMachineConfiguration *)arg2;
@end
