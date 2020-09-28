//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface WCM_Server : NSObject
{
    NSObject<OS_xpc_object> *mConnection;	// 8 = 0x8
    NSMutableArray *mClientSessions;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *mQueue;	// 24 = 0x18
    _Bool testMode;	// 32 = 0x20
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006ac30
+ (id)singleton;	// IMP=0x000000010006aba4
- (void)exitTestMode;	// IMP=0x000000010006bbcc
- (void)enterTestMode;	// IMP=0x000000010006ba08
- (void)existingSessions;	// IMP=0x000000010006b80c
- (id)getSessionSync:(int)arg1;	// IMP=0x000000010006b64c
- (id)getSessionFor:(int)arg1;	// IMP=0x000000010006b2c4
- (void)removeSessionFromList:(id)arg1;	// IMP=0x000000010006b270
- (void)addSessionToList:(id)arg1;	// IMP=0x000000010006b21c
- (void)handleConnection:(id)arg1;	// IMP=0x000000010006b1a0
- (void)handleXPCEvent:(id)arg1;	// IMP=0x000000010006aff4
- (void)handleEvent:(id)arg1;	// IMP=0x000000010006af40
- (void)startService;	// IMP=0x000000010006ae10
- (id)getQueue;	// IMP=0x000000010006adf4
- (void)dealloc;	// IMP=0x000000010006ad5c
- (id)init;	// IMP=0x000000010006acb4
- (id)autorelease;	// IMP=0x000000010006ac9c
- (oneway void)release;	// IMP=0x000000010006ac88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006ac6c

@end
