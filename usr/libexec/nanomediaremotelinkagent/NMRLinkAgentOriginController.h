//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NMRPlaybackQueueDelegate-Protocol.h"

@class NMRMediaRemoteUpdater, NMROrigin, NMRPlaybackQueue, NSArray, NSCountedSet, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;
@protocol NMRLinkAgentOriginControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NMRLinkAgentOriginController : NSObject <NMRPlaybackQueueDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_refreshingQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_eagerUpdateTimer;	// 24 = 0x18
    unsigned int _eagerUpdateFlags;	// 32 = 0x20
    void *_nowPlayingContentItemRef;	// 40 = 0x28
    NSDictionary *_currentNowPlayingInfo;	// 48 = 0x30
    NSDictionary *_previousIgnoredNowPlayingInfo;	// 56 = 0x38
    NSArray *_currentSupportedCommands;	// 64 = 0x40
    NSString *_currentApplicationLocalizedDisplayName;	// 72 = 0x48
    NSString *_currentApplicationBundleIdentifier;	// 80 = 0x50
    unsigned int _currentApplicationPlaybackState;	// 88 = 0x58
    int _currentApplicationProcessID;	// 92 = 0x5c
    NMRMediaRemoteUpdater *_nowPlayingInfoUpdater;	// 96 = 0x60
    NMRMediaRemoteUpdater *_applicationInfoUpdater;	// 104 = 0x68
    NMRMediaRemoteUpdater *_artworkUpdater;	// 112 = 0x70
    NMRPlaybackQueue *_playbackQueue;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_playbackQueueMessageQueue;	// 128 = 0x80
    NSMutableDictionary *_playbackQueuePendingSendRecords;	// 136 = 0x88
    NSCountedSet *_playbackQueueInvalidatedMetadataIdentifiers;	// 144 = 0x90
    NSData *_playbackQueueSentData;	// 152 = 0x98
    NMROrigin *_origin;	// 160 = 0xa0
    NSNumber *_externalOriginIdentifier;	// 168 = 0xa8
    id <NMRLinkAgentOriginControllerDelegate> _delegate;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000100007348
@property(nonatomic) __weak id <NMRLinkAgentOriginControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSNumber *externalOriginIdentifier; // @synthesize externalOriginIdentifier=_externalOriginIdentifier;
@property(readonly, nonatomic) NMROrigin *origin; // @synthesize origin=_origin;
- (void)_performUpdateBlock:(CDUnknownBlockType)arg1 forCFNotificationWithName:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100006fd4
- (void)_handleMRNotification:(id)arg1;	// IMP=0x0000000100006d08
- (void)_registerForMediaRemoteNotifications;	// IMP=0x0000000100006b60
- (id)_currentFullPlaybackQueueIgnoringDigestMatches:(_Bool)arg1 digest:(id)arg2 digestMatched:(_Bool *)arg3;	// IMP=0x0000000100006ab4
- (id)_currentSupportedCommandsIgnoringDigestMatches:(_Bool)arg1 digest:(id)arg2 digestMatches:(_Bool *)arg3;	// IMP=0x0000000100006a14
- (id)_currentNowPlayingApplicationInfoIgnoringDigestMatches:(_Bool)arg1 digest:(id)arg2 digestMatched:(_Bool *)arg3;	// IMP=0x00000001000068fc
- (id)_currentNowPlayingIgnoringDigestMatches:(_Bool)arg1 digest:(id)arg2 digestMatched:(_Bool *)arg3;	// IMP=0x000000010000685c
- (void)_refreshCurrentNowPlayingApplicationInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006254
- (void)_refreshCurrentSupportedCommands;	// IMP=0x000000010000619c
- (void)_refreshArtworkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005ac4
- (void)_refreshCurrentNowPlayingInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000054b4
- (void)_updateNowPlayingInfoWithContentItem:(void *)arg1;	// IMP=0x0000000100004c6c
- (void)playbackQueue:(id)arg1 contentItemsDidChange:(id)arg2;	// IMP=0x0000000100004890
- (void)playbackQueueDidChange:(id)arg1;	// IMP=0x0000000100004880
- (void)updatePlaybackQueuePendingRecordsWithIdentifier:(id)arg1 success:(_Bool)arg2;	// IMP=0x0000000100004588
- (void)handleMediaRemoteSendCommandRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000401c
- (void)handlePlaybackQueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003f3c
- (void)handleMediaRemoteGetArtworkRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003b7c
- (void)handleMediaRemoteGetStateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003834
- (void)eagerUpdateTimerFired;	// IMP=0x00000001000032d4
- (void)_scheduleEagerUpdate:(unsigned int)arg1;	// IMP=0x0000000100003100
- (void)dealloc;	// IMP=0x0000000100002fd0
- (id)initWithOrigin:(id)arg1 externalOriginIdentifier:(id)arg2;	// IMP=0x00000001000020fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

