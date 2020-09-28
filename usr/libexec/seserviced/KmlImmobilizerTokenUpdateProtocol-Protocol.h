//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol KmlImmobilizerTokenUpdateProtocol <NSObject>
- (oneway void)setImmobilizerTokens:(NSData *)arg1 publicKey:(NSData *)arg2 forKeyWithIdentifier:(NSString *)arg3 callback:(void (^)(NSError *))arg4;
- (oneway void)requestImmobilizerTokenRefillForKeyWithIdentifier:(NSString *)arg1 callback:(void (^)(DAKeyEncryptedRequest *, NSError *))arg2;
@end
