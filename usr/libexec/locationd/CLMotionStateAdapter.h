//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLMotionStateProtocol-Protocol.h"

@class NSString;

@interface CLMotionStateAdapter : CLNotifierServiceAdapter <CLMotionStateProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001001bc980
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bc95c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001001bc8d8
- (void)queryMotionStatesWithStartTime:(double)arg1 endTime:(double)arg2 isFromInternalClient:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00000001001bcc1c
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bcbe0
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bcb9c
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bcb68
- (struct CLMotionState *)adaptee;	// IMP=0x00000001001bcb2c
- (void)endService;	// IMP=0x00000001001bcb08
- (void)beginService;	// IMP=0x00000001001bca3c
- (id)init;	// IMP=0x00000001001bc9f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
