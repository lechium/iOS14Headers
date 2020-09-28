//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SRTCCStore <NSObject>
- (_Bool)setValue:(_Bool)arg1 forService:(NSString *)arg2 bundleId:(NSString *)arg3;
- (_Bool)resetService:(NSString *)arg1 forBundleId:(NSString *)arg2;
- (_Bool)resetService:(NSString *)arg1;
- (_Bool)setOverride:(_Bool)arg1 forService:(NSString *)arg2;
- (NSArray *)informationForBundleId:(NSString *)arg1;
- (_Bool)isOverriddenForService:(NSString *)arg1;
- (NSArray *)bundleIdentifiersDisabledForService:(NSString *)arg1;
- (NSArray *)bundleIdentifiersForService:(NSString *)arg1;
@end
