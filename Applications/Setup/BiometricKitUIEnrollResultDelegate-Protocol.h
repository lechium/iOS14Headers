//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BKIdentity, BiometricKitIdentity;

@protocol BiometricKitUIEnrollResultDelegate <NSObject>
- (void)enrollResult:(int)arg1 bkIdentity:(BKIdentity *)arg2;

@optional
- (void)generateAuthToken;
- (void)enrollResult:(int)arg1 identity:(BiometricKitIdentity *)arg2;
@end

