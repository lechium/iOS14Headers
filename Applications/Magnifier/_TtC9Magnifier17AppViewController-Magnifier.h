//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC9Magnifier17AppViewController.h"

#import "AVCapturePhotoCaptureDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@interface _TtC9Magnifier17AppViewController (Magnifier) <AVCapturePhotoCaptureDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;	// IMP=0x0000000100057fe0
- (void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2;	// IMP=0x0000000100057f70
- (void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;	// IMP=0x0000000100057f00
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100058498
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100058344
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;	// IMP=0x00000001000587b0
- (void)volumeDownButtonPressed:(id)arg1;	// IMP=0x00000001000589f0
- (void)volumeUpButtonPressed:(id)arg1;	// IMP=0x000000010005883c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010005ad50
- (void)sessionInterruptionEndedWithNotification:(id)arg1;	// IMP=0x000000010005a61c
- (void)sessionWasInterruptedWithNotification:(id)arg1;	// IMP=0x000000010005a5d0
- (void)sessionRuntimeErrorWithNotification:(id)arg1;	// IMP=0x0000000100059b84
- (void)applicationDidRemoveDeactivationReasonWithNotification:(id)arg1;	// IMP=0x000000010005bc24
- (void)applicationWillAddDeactivationReasonWithNotification:(id)arg1;	// IMP=0x000000010005b3c8
@end

