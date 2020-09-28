//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@protocol FMDEventLoggerEvent <NSObject, NSSecureCoding>
@property(retain, nonatomic) NSNumber *precision;
@property(retain, nonatomic) NSString *groupByKey;
@property(readonly, nonatomic) NSString *eventName;
- (NSDictionary *)userInfo;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithEventName:(NSString *)arg1;
@end
