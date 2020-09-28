//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SRStarkItemController-Protocol.h"

@class NSString, SRStarkUnavailableSnippetView;
@protocol SRStarkItemControllerDelegate;

@interface SRStarkUnavailableViewController : UIViewController <SRStarkItemController>
{
    SRStarkUnavailableSnippetView *_snippetView;	// 8 = 0x8
    NSString *_titleString;	// 16 = 0x10
    NSString *_subtitleString;	// 24 = 0x18
    _Bool _shouldSynthesizeTitles;	// 32 = 0x20
    _Bool _hasFinishedSynthesizingTitles;	// 33 = 0x21
    id <SRStarkItemControllerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000476e0
@property(nonatomic) __weak id <SRStarkItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)autoDismissalReason;	// IMP=0x0000000100047690
- (long long)autoDismissalStrategy;	// IMP=0x0000000100047660
- (long long)preferredUserInterfaceStyle;	// IMP=0x000000010004765c
- (void)viewDidLoad;	// IMP=0x00000001000474bc
- (void)loadView;	// IMP=0x0000000100047448
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 shouldSynthesizeTitles:(_Bool)arg3;	// IMP=0x000000010004734c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd;
@property(readonly) Class superclass;

@end
