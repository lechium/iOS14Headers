//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDXPCDaemonProtocol-Protocol.h"

@class NSData, NSString;

@protocol SFContinuityScannerProtocol <SDXPCDaemonProtocol>
- (void)activityPayloadFromDeviceUniqueID:(NSString *)arg1 forAdvertisementPayload:(NSData *)arg2 command:(NSString *)arg3 timeout:(long long)arg4 withCompletionHandler:(void (^)(NSData *, NSError *))arg5;
- (void)scanForTypes:(unsigned long long)arg1;
@end

