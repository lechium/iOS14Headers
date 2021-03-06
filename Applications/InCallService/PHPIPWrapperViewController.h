//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PGPictureInPictureViewController-Protocol.h"

@class NSString;
@protocol PHPIPWrapperViewControllerDelegateProtocol;

@interface PHPIPWrapperViewController : UIViewController <PGPictureInPictureViewController>
{
    _Bool _pipIsBeingResized;	// 8 = 0x8
    UIViewController *_wrappedViewController;	// 16 = 0x10
    id <PHPIPWrapperViewControllerDelegateProtocol> _delegate;	// 24 = 0x18
    CDUnknownBlockType _didAnimatePictureInPictureStopCompletionBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100032bb4
@property _Bool pipIsBeingResized; // @synthesize pipIsBeingResized=_pipIsBeingResized;
@property(copy, nonatomic) CDUnknownBlockType didAnimatePictureInPictureStopCompletionBlock; // @synthesize didAnimatePictureInPictureStopCompletionBlock=_didAnimatePictureInPictureStopCompletionBlock;
@property __weak id <PHPIPWrapperViewControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain) UIViewController *wrappedViewController; // @synthesize wrappedViewController=_wrappedViewController;
- (void)viewDidResize;	// IMP=0x0000000100032a88
- (void)viewWillResize;	// IMP=0x0000000100032a24
- (void)dealloc;	// IMP=0x00000001000329d0
- (void)actionButtonTapped;	// IMP=0x00000001000328dc
- (struct CGSize)preferredContentSize;	// IMP=0x000000010003268c
- (void)didAnimatePictureInPictureStop;	// IMP=0x000000010003254c
- (void)willAnimatePictureInPictureStop;	// IMP=0x0000000100032548
- (void)didAnimatePictureInPictureStart;	// IMP=0x0000000100032544
- (void)willAnimatePictureInPictureStart;	// IMP=0x00000001000322c0
- (void)viewDidLoad;	// IMP=0x00000001000321e8
- (id)init;	// IMP=0x00000001000073b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldShowAlternateActionButtonImage;
@property(readonly, nonatomic) _Bool shouldShowLoadingIndicator;
@property(readonly) Class superclass;

@end

