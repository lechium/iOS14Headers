//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC6FindMy27FMBaseContentViewController.h"

@class MISSING_TYPE;

@interface _TtC6FindMy35FMDeviceDetailContentViewController : _TtC6FindMy27FMBaseContentViewController
{
    MISSING_TYPE *dataSource;	// 280 = 0x118
    MISSING_TYPE *delegate;	// 288 = 0x120
    MISSING_TYPE *playSoundButton;	// 304 = 0x130
    MISSING_TYPE *muteLeftButton;	// 312 = 0x138
    MISSING_TYPE *muteRightButton;	// 320 = 0x140
    MISSING_TYPE *stopSoundButton;	// 328 = 0x148
    MISSING_TYPE *directionsButton;	// 336 = 0x150
    MISSING_TYPE *notificationsView;	// 344 = 0x158
    MISSING_TYPE *markAsLostView;	// 352 = 0x160
    MISSING_TYPE *cancelEraseDeviceButton;	// 360 = 0x168
    MISSING_TYPE *eraseDeviceButton;	// 368 = 0x170
    MISSING_TYPE *removeDeviceButton;	// 376 = 0x178
    MISSING_TYPE *soundPendingAttention;	// 384 = 0x180
    MISSING_TYPE *firstButtonsStackView;	// 392 = 0x188
    MISSING_TYPE *actionButtonsStackView;	// 400 = 0x190
    MISSING_TYPE *verticalStackView;	// 408 = 0x198
    MISSING_TYPE *verticalStackBottomConstraint;	// 416 = 0x1a0
    MISSING_TYPE *isPlaySoundInFlight;	// 424 = 0x1a8
    MISSING_TYPE *isNotifyWhenFoundOnOverride;	// 425 = 0x1a9
    MISSING_TYPE *soundPendingTimer;	// 432 = 0x1b0
    MISSING_TYPE *shouldShowSoundPending;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x00000001000b78e8
- (void)removeDevice;	// IMP=0x00000001000b7644
- (void)handleCancelErase;	// IMP=0x00000001000b6ae4
- (void)handleErase;	// IMP=0x00000001000b6540
- (void)handleLock;	// IMP=0x00000001000b6140
- (void)handleLostMode;	// IMP=0x00000001000b5c54
- (void)handleDirections;	// IMP=0x00000001000b5c00
- (void)soundPendingFired;	// IMP=0x00000001000b5818
- (void)handleMuteRight;	// IMP=0x00000001000b43c0
- (void)handleMuteLeft;	// IMP=0x00000001000b3e5c
- (void)handleStopSound;	// IMP=0x00000001000b3814
- (void)handlePlaySound;	// IMP=0x00000001000b3270
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001000b2b14
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000b0dc0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000b0b84
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000b0b68
- (void)viewDidLoad;	// IMP=0x00000001000b0b3c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000b0a30

@end

