//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CTCarrierSpaceCapabilities, CTCarrierSpacePlanGroupOptionInfo, NSDictionary;

@protocol CTCarrierSpaceClientDelegate <NSObject>

@optional
- (void)purchasedPlan:(CTCarrierSpacePlanGroupOptionInfo *)arg1 didChangeStatus:(long long)arg2 context:(NSDictionary *)arg3;
- (void)dataPlanMetricsDidChange;
- (void)appsDidChange;
- (void)plansDidChange;
- (void)usageDidChange;
- (void)userConsentFlowInfoDidChange;
- (void)capabilitiesDidChange:(CTCarrierSpaceCapabilities *)arg1;
@end

