//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol _UIActivityRecipientInterface <NSObject>
- (void)requestMailRecipientsForSessionID:(NSString *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)requestMessagesRecipientInfoForSessionID:(NSString *)arg1 completionHandler:(void (^)(NSString *, NSString *, NSArray *))arg2;
@end

