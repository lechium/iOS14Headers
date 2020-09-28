//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSMescalBagContract-Protocol.h"
#import "AMSMetricsBagContract-Protocol.h"
#import "AMSURLBagContract-Protocol.h"

@class AMSBag, AMSBagValue, NSString;
@protocol AMSMescalBagContract, AMSMetricsBagContract;

@interface BuddyServiceOffersBag : NSObject <AMSURLBagContract, AMSMescalBagContract, AMSMetricsBagContract>
{
    AMSBag *_underlyingBag;	// 8 = 0x8
}

+ (id)keySet;	// IMP=0x000000010002fffc
- (void).cxx_destruct;	// IMP=0x0000000100030154
@property(readonly, nonatomic) AMSBag *underlyingBag; // @synthesize underlyingBag=_underlyingBag;
@property(readonly, nonatomic) AMSBagValue *metricsDictionary;
@property(readonly, nonatomic) AMSBagValue *metricsURL;
@property(readonly, nonatomic) AMSBagValue *mescalSignSapResponses;
@property(readonly, nonatomic) AMSBagValue *mescalSignSapRequests;
@property(readonly, nonatomic) AMSBagValue *mescalSignedActions;
@property(readonly, nonatomic) AMSBagValue *mescalSetupURL;
@property(readonly, nonatomic) AMSBagValue *mescalCertificateURL;
@property(readonly, nonatomic) id <AMSMetricsBagContract> metricsContract;
@property(readonly, nonatomic) AMSBagValue *trustedDomains;
@property(readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
@property(readonly, nonatomic) AMSBagValue *guidSchemes;
@property(readonly, nonatomic) AMSBagValue *guidRegexes;
- (id)getOffersBuddyML;	// IMP=0x000000010002fba4
- (id)init;	// IMP=0x000000010002fabc

// Remaining properties
@property(readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property(readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property(readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) AMSBagValue *mescalPrimingURL;
@property(readonly, nonatomic) AMSBagValue *metricsUrl;
@property(readonly) Class superclass;

@end
