//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "CACCustomCommandEditorViewControllerDelegate-Protocol.h"
#import "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class CACCustomCommandEditorViewController, NSString, UINavigationController;

@interface AXCACCustomCommandEditorServiceViewController : SBUIRemoteAlertServiceViewController <CACCustomCommandEditorViewControllerDelegate, UIAdaptivePresentationControllerDelegate>
{
    UINavigationController *_editorNavigationController;	// 8 = 0x8
    CACCustomCommandEditorViewController *_editor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100004d64
@property(readonly, nonatomic) CACCustomCommandEditorViewController *editor; // @synthesize editor=_editor;
@property(readonly, nonatomic) UINavigationController *editorNavigationController; // @synthesize editorNavigationController=_editorNavigationController;
- (void)didUpdateSpokenStringForEditor:(id)arg1;	// IMP=0x0000000100004d40
- (void)didUpdatePropertiesForEditor:(id)arg1;	// IMP=0x0000000100004d3c
- (void)didFinalizeSpokenStringForEditor:(id)arg1;	// IMP=0x0000000100004d38
- (void)didCancelEditingCustomCommandForEditor:(id)arg1;	// IMP=0x0000000100004d2c
- (void)didFinishEditingCustomCommandForEditor:(id)arg1;	// IMP=0x0000000100004d20
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000100004d14
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004618
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004604
- (void)_dismiss;	// IMP=0x0000000100004554
- (void)_cancelButtonTapped;	// IMP=0x0000000100004548
- (void)_saveCommandItem;	// IMP=0x0000000100004320
- (long long)preferredStatusBarStyle;	// IMP=0x0000000100004318
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000041c8
- (id)init;	// IMP=0x0000000100003e6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
