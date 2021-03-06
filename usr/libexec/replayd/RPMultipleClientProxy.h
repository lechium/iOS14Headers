//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPClientProtocol-Protocol.h"

@class NSMutableSet, NSString;

@interface RPMultipleClientProxy : NSObject <RPClientProtocol>
{
    int _currentConnectionProcessIdentifier;	// 8 = 0x8
    NSMutableSet *_connectionSet;	// 16 = 0x10
}

+ (id)clientProxy;	// IMP=0x00000001000204fc
- (void).cxx_destruct;	// IMP=0x000000010002153c
@property(retain, nonatomic) NSMutableSet *connectionSet; // @synthesize connectionSet=_connectionSet;
@property(nonatomic) int currentConnectionProcessIdentifier; // @synthesize currentConnectionProcessIdentifier=_currentConnectionProcessIdentifier;
- (oneway void)shouldResumeSessionType:(id)arg1;	// IMP=0x00000001000214ec
- (oneway void)recordingDidPause;	// IMP=0x00000001000214c0
- (oneway void)recordingTimerDidUpdate:(id)arg1;	// IMP=0x0000000100021274
- (oneway void)recordingLockInterrupted:(id)arg1;	// IMP=0x0000000100021028
- (oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;	// IMP=0x0000000100021024
- (oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;	// IMP=0x0000000100021020
- (oneway void)updateBroadcastURL:(id)arg1;	// IMP=0x0000000100020dd4
- (oneway void)updateBroadcastServiceInfo:(id)arg1;	// IMP=0x0000000100020dd0
- (oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;	// IMP=0x0000000100020b68
- (void)updateScreenRecordingStateWithCurrentState:(id)arg1;	// IMP=0x000000010002091c
- (void)handleNewConnection:(id)arg1 currentState:(id)arg2;	// IMP=0x000000010002080c
- (void)resetConnectionWithProcessIdentifier:(int)arg1;	// IMP=0x00000001000205dc
- (id)init;	// IMP=0x0000000100020568

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

