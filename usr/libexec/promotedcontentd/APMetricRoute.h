//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMetricRoutable-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface APMetricRoute : NSObject <APMetricRoutable>
{
    NSString *_name;	// 8 = 0x8
    long long _route;	// 16 = 0x10
    NSURL *_destination;	// 24 = 0x18
    NSDictionary *_metrics;	// 32 = 0x20
    NSString *_deviceIdentifier;	// 40 = 0x28
    NSString *_userIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100051f54
@property(readonly, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSURL *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) long long route; // @synthesize route=_route;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)stringForMetric:(long long)arg1;	// IMP=0x0000000100051e8c
- (_Bool)metricIsDisabled:(long long)arg1;	// IMP=0x0000000100051ddc
- (_Bool)metricIsDiagnosticsAndUsage:(long long)arg1;	// IMP=0x0000000100051d2c
- (_Bool)metricIsDefined:(long long)arg1;	// IMP=0x0000000100051cbc
- (id)initWithRouteDefinition:(id)arg1;	// IMP=0x0000000100051710
- (id)initWithRouteJSON:(id)arg1;	// IMP=0x00000001000514ec
- (id)_metricsByNumber:(id)arg1;	// IMP=0x0000000100051268
- (_Bool)_validateRouteDefinition:(id)arg1;	// IMP=0x0000000100050ccc
- (_Bool)_validateMetric:(id)arg1 withMetrics:(id)arg2;	// IMP=0x00000001000509f4
- (_Bool)_validateMetric:(id)arg1 forKey:(id)arg2 fromDictionary:(id)arg3;	// IMP=0x0000000100050644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

