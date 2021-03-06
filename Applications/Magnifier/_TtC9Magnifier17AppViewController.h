//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC9Magnifier27LensFilteringViewController.h"

#import "CAAnimationDelegate-Protocol.h"

@class AVCaptureDeviceInput, MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9Magnifier17AppViewController : _TtC9Magnifier27LensFilteringViewController <CAAnimationDelegate>
{
    MISSING_TYPE *_stillImageStore;	// 32 = 0x20
    MISSING_TYPE *freezeFrameViewController;	// 48 = 0x30
    MISSING_TYPE *didSetupCardUI;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_controlContainer;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_mainCardViewController;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_cameraTrayViewController;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_backCameraVideoPreviewView;	// 88 = 0x58
    MISSING_TYPE *backCameraVideoPreviewLayer;	// 96 = 0x60
    MISSING_TYPE *lastVideoOrientation;	// 104 = 0x68
    MISSING_TYPE *liveLensInterruptionBlurView;	// 120 = 0x78
    MISSING_TYPE *session;	// 128 = 0x80
    MISSING_TYPE *captureDevice;	// 136 = 0x88
    MISSING_TYPE *controlRestorationSubscriptions;	// 144 = 0x90
    MISSING_TYPE *controlSubscriptions;	// 152 = 0x98
    MISSING_TYPE *freezeFrameModeDescriptionPublisher;	// 160 = 0xa0
    MISSING_TYPE *activeControlDescriptionPublishers;	// 168 = 0xa8
    MISSING_TYPE *sessionQueue;	// 176 = 0xb0
    MISSING_TYPE *controlsQueue;	// 184 = 0xb8
    MISSING_TYPE *dataOutputQueue;	// 192 = 0xc0
    MISSING_TYPE *backCameraDeviceInput;	// 200 = 0xc8
    MISSING_TYPE *backCameraPhotoOutput;	// 208 = 0xd0
    MISSING_TYPE *backCameraVideoDataOutput;	// 216 = 0xd8
    MISSING_TYPE *setupResult;	// 224 = 0xe0
    MISSING_TYPE *_capturedPhoto;	// 0 = 0x0
    MISSING_TYPE *_capturedImage;	// 0 = 0x0
    MISSING_TYPE *captureAttemptDidSucceed;	// 0 = 0x0
    MISSING_TYPE *zoomPanGesture;	// 0 = 0x0
    MISSING_TYPE *zoomPinchGesture;	// 0 = 0x0
    MISSING_TYPE *previousGestureZoomFactor;	// 0 = 0x0
    MISSING_TYPE *didRestartZoomGestureAfterLastHaptic;	// 0 = 0x0
    MISSING_TYPE *zoomGestureFeedbackGenerator;	// 0 = 0x0
    MISSING_TYPE *panStartZoomFactor;	// 0 = 0x0
    MISSING_TYPE *pinchStartZoomFactor;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_focusIndicator;	// 0 = 0x0
    MISSING_TYPE *focusIndicatorFadeTime;	// 0 = 0x0
    MISSING_TYPE *informationSubscription;	// 0 = 0x0
    MISSING_TYPE *coachingSubscription;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_coachingLabel;	// 0 = 0x0
    MISSING_TYPE *coachingHideAnimator;	// 0 = 0x0
    MISSING_TYPE *sceneEventAnimator;	// 917504 = 0xe0000
    MISSING_TYPE *controlSubscriptionProvider;	// 0 = 0x0
    MISSING_TYPE *cancellables;	// 0 = 0x0
    MISSING_TYPE *liveLensDisplayAppearanceSubscription;	// 0 = 0x0
    MISSING_TYPE *focusLockSubscriptions;	// 0 = 0x0
    MISSING_TYPE *capturedPhotoSubscription;	// 0 = 0x0
    MISSING_TYPE *sessionSubscriptions;	// 0 = 0x0
    MISSING_TYPE *contentSizeCategorySubscription;	// 0 = 0x0
    MISSING_TYPE *passthroughView;	// 0 = 0x0
    MISSING_TYPE *freezeFrameScrubberTray;	// 917504 = 0xe0000
}

- (void).cxx_destruct;	// IMP=0x00000001000576e4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100057a98
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100057a14
- (_Bool)_canShowWhileLocked;	// IMP=0x00000001000573bc
- (void)didPinchToZoom:(id)arg1;	// IMP=0x0000000100057008
- (void)didActivateCardHidingGesture:(id)arg1;	// IMP=0x0000000100056e08
- (void)didActivateCardVisibilityGesture:(id)arg1;	// IMP=0x0000000100056b0c
- (void)didTapToFocus:(id)arg1;	// IMP=0x00000001000566a0
- (void)didPanPreviewView:(id)arg1;	// IMP=0x0000000100055ed8
- (void)deviceOrientationDidChange:(id)arg1;	// IMP=0x0000000100050424
- (void)userDidEndMutliShotMode:(id)arg1;	// IMP=0x000000010004c634
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010004b7b4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004adcc
- (void)viewWillLayoutSubviews;	// IMP=0x000000010004a340
- (void)viewDidLoad;	// IMP=0x000000010004a314
- (void)loadView;	// IMP=0x0000000100049a18
@property(nonatomic, retain) AVCaptureDeviceInput *backCameraDeviceInput; // @synthesize backCameraDeviceInput;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;

@end

