//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HFDiscoveredAccessory, HMSetupAccessoryPayload, NSString;

@protocol HSPCSetupFlowDelegate
- (void)requestDismissal;
- (void)userDidSelectDiscoveredAccessory:(HFDiscoveredAccessory *)arg1;
- (void)didReceiveSetupCode:(NSString *)arg1 source:(long long)arg2;
- (void)handleSetupAccessoryPayload:(HMSetupAccessoryPayload *)arg1;
@end

