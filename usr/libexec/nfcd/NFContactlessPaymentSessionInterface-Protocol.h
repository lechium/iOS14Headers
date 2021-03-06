//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NFSessionInterface-Protocol.h"

@class NFApplet, NSArray, NSData, NSSet;

@protocol NFContactlessPaymentSessionInterface <NFSessionInterface>
- (oneway void)startExpressMode:(void (^)(NSError *))arg1;
- (oneway void)enablePlasticCardMode:(_Bool)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)getTransitAppletState:(NFApplet *)arg1 callback:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)getFelicaAppletState:(NFApplet *)arg1 callback:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)stopCardEmulation:(void (^)(NSError *))arg1;
- (oneway void)startHostCardEmulation:(void (^)(NSError *))arg1;
- (oneway void)startDeferredCardEmulationWithAuthorization:(NSData *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)startCardEmulationWithAuthorization:(NSData *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)setActivePaymentApplet:(NFApplet *)arg1 keys:(NSSet *)arg2 authorization:(NSData *)arg3 callback:(void (^)(NFApplet *, NSSet *, NSError *))arg4;
- (oneway void)getApplets:(void (^)(NSArray *, NFApplet *, NSError *))arg1;

@optional
- (oneway void)setHostCards:(NSArray *)arg1;
@end

