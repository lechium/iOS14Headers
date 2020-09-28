//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;
@protocol NSSecureCoding;

@protocol APSettingsStorableProtocol
- (void)synchronize;
- (void)setValue:(id <NSSecureCoding>)arg1 forKey:(NSString *)arg2;
- (id <NSSecureCoding>)valueForKey:(NSString *)arg1;
- (id)initWithDefaultValues:(NSDictionary *)arg1;
@end
