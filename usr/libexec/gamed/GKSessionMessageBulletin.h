//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKSessionBulletin.h"

@class NSString;

@interface GKSessionMessageBulletin : GKSessionBulletin
{
    NSString *_sessionIdentifier;	// 104 = 0x68
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d87fc
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000d87f4
- (void).cxx_destruct;	// IMP=0x00000001000da2c8
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (id)assembledMessage;	// IMP=0x00000001000da0a8
- (void)distributeData;	// IMP=0x00000001000d9bc0
- (id)aggregateDictionaryKey;	// IMP=0x00000001000d9bb0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000d99e8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000d980c
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00000001000d963c
- (void)loadSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d9274

@end
