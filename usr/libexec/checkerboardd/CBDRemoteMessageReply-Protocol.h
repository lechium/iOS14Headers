//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CBCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSError, NSUUID;
@protocol CBDRemoteMessage;

@protocol CBDRemoteMessageReply <NSObject, CBCoding, NSCopying>
+ (id)replyToRemoteMessage:(id <CBDRemoteMessage>)arg1 success:(_Bool)arg2 error:(NSError *)arg3;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) _Bool success;
@property(readonly, nonatomic) NSUUID *inReplyToUUID;
@property(readonly, nonatomic) NSUUID *uuid;
- (void)triggerWithRemoteMessage:(id <CBDRemoteMessage>)arg1;
@end
