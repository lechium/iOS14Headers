//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AAUISpecifierProviderDelegate-Protocol.h"

@class NSString, NSURLRequest, PSSpecifier;
@protocol AAUISpecifierProvider;

@protocol AAUIDeviceSpecifierProviderDelegate <AAUISpecifierProviderDelegate>
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 loadRequest:(NSURLRequest *)arg2 withIdentifier:(NSString *)arg3 specifier:(PSSpecifier *)arg4;
@end
