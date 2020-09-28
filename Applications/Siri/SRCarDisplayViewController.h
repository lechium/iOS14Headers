//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SRStarkConfirmationSnippetControllerDelegate-Protocol.h"
#import "SRStarkDisambiguationSnippetControllerDelegate-Protocol.h"
#import "SRStarkGatekeeperHeaderViewDelegate-Protocol.h"
#import "SRStarkItemControllerDelegate-Protocol.h"
#import "SRStarkViewDelegate-Protocol.h"
#import "SiriUIPresentation-Protocol.h"

@class AFAnalyticsTurnBasedInstrumentationContext, AceObject, NSString, NSTimer, SASRequestOptions, SRStarkView;
@protocol SRStarkItemController, SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SRCarDisplayViewController : UIViewController <SRStarkConfirmationSnippetControllerDelegate, SRStarkDisambiguationSnippetControllerDelegate, SRStarkItemControllerDelegate, SRStarkViewDelegate, SRStarkGatekeeperHeaderViewDelegate, SiriUIPresentation>
{
    AceObject *_gatekeeperHeaderDataSource;	// 8 = 0x8
    _Bool _siriIsIdleAndQuiet;	// 16 = 0x10
    _Bool _autoDismissScheduled;	// 17 = 0x11
    _Bool _screenSupportsTouchInteraction;	// 18 = 0x12
    id <SiriUIPresentationDataSource> _dataSource;	// 24 = 0x18
    id <SiriUIPresentationDelegate> _delegate;	// 32 = 0x20
    UIViewController<SRStarkItemController> *_currentSnippetController;	// 40 = 0x28
    SASRequestOptions *_requestOptions;	// 48 = 0x30
    double _selectButtonTimeInterval;	// 56 = 0x38
    NSTimer *_selectButtonHoldToTalkTimer;	// 64 = 0x40
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010009d350
@property(retain, nonatomic, getter=_currentTurnContext, setter=_setCurrentTurnContext:) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
@property(retain, nonatomic, getter=_selectButtonHoldToTalkTimer, setter=_setSelectButtonHoldToTalkTimer:) NSTimer *selectButtonHoldToTalkTimer; // @synthesize selectButtonHoldToTalkTimer=_selectButtonHoldToTalkTimer;
@property(nonatomic, getter=_selectButtonTimeInterval, setter=_setSelectButtonTimeInterval:) double selectButtonTimeInterval; // @synthesize selectButtonTimeInterval=_selectButtonTimeInterval;
@property(nonatomic, getter=_screenSupportsTouchInteraction) _Bool screenSupportsTouchInteraction; // @synthesize screenSupportsTouchInteraction=_screenSupportsTouchInteraction;
@property(retain, nonatomic, getter=_requestOptions, setter=_setRequestOptions:) SASRequestOptions *requestOptions; // @synthesize requestOptions=_requestOptions;
@property(retain, nonatomic, getter=_currentSnippetController, setter=_setCurrentSnippetController:) UIViewController<SRStarkItemController> *currentSnippetController; // @synthesize currentSnippetController=_currentSnippetController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010009d24c
- (void)gatekeeperHeaderDismissalButtonPressed:(id)arg1;	// IMP=0x000000010009d23c
- (void)confirmationSnippetControllerRequestsRestartSpeechSynthesis:(id)arg1;	// IMP=0x000000010009d1f4
- (void)confirmationSnippetControllerRequestsStopSpeechSynthesis:(id)arg1;	// IMP=0x000000010009d150
- (void)disambiguationSnippetController:(id)arg1 performAceCommands:(id)arg2;	// IMP=0x000000010009cfc4
- (_Bool)isShowingGatekeeperHeader;	// IMP=0x000000010009cf68
- (void)confirmationSnippetControllerRequestsDismissal:(id)arg1;	// IMP=0x000000010009ce9c
- (void)confirmationSnippetController:(id)arg1 performAceCommands:(id)arg2;	// IMP=0x000000010009cd20
- (void)_sendWillSendStartRequestIfNecessary:(id)arg1;	// IMP=0x000000010009cbb0
- (_Bool)_containStartRequest:(id)arg1;	// IMP=0x000000010009ca18
- (void)starkView:(id)arg1 requestsDismissalWithDismissalReason:(unsigned long long)arg2;	// IMP=0x000000010009ca08
- (void)starkView:(id)arg1 didRemoveSnippetView:(id)arg2;	// IMP=0x000000010009c858
- (void)starkView:(id)arg1 didReceiveBackButtonTapGestureRecognizer:(id)arg2;	// IMP=0x000000010009c600
- (void)starkViewDidReceiveSelectSiriEvent:(id)arg1;	// IMP=0x000000010009c2e0
- (void)_selectButtonHoldToTalkIntervalFired:(id)arg1;	// IMP=0x000000010009c1ac
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010009bfd8
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010009bdd0
- (_Bool)_buttons:(id)arg1 hasType:(long long)arg2;	// IMP=0x000000010009bc90
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010009bb84
- (void)_dismissForIdle;	// IMP=0x000000010009ba44
- (void)_cancelAutoDismiss;	// IMP=0x000000010009b95c
- (void)_scheduleAutoDismiss;	// IMP=0x000000010009b850
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1;	// IMP=0x000000010009b630
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x000000010009b628
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x000000010009b554
- (_Bool)shouldProceedToNextCommandAtSpeechSynthesisEnd;	// IMP=0x000000010009b4f4
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x000000010009b4dc
- (void)displayUtteranceWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000010009b410
- (void)startNewConversation;	// IMP=0x000000010009b404
- (_Bool)shouldBlockURLOpenOnTTS:(id)arg1;	// IMP=0x000000010009b3e0
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x000000010009b28c
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x000000010009b228
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010009b1a4
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010009b120
- (_Bool)_isStarkSupportedSnippetClass:(id)arg1;	// IMP=0x000000010009b094
- (void)_updateItemsAtIndexPath:(id)arg1;	// IMP=0x0000000100099ee8
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x0000000100099ccc
- (id)preferredFocusEnvironments;	// IMP=0x0000000100099c30
- (id)viewController;	// IMP=0x0000000100099c2c
- (long long)options;	// IMP=0x0000000100099c24
- (void)userWantsStarkItemControllerFullScreen:(id)arg1;	// IMP=0x0000000100099bac
- (void)starkItemControllerRequestsDismissal:(id)arg1 withDismissalReason:(unsigned long long)arg2;	// IMP=0x0000000100099a80
- (void)starkItemController:(id)arg1 synthesizeSpeechWithText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000999f4
- (void)_setGatekeeperHeaderForAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0000000100099544
- (void)_setGatekeeperHeaderForRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x000000010009925c
- (_Bool)_isSnippetControllerUsingSystemStyle:(id)arg1;	// IMP=0x0000000100099180
- (_Bool)_shouldAnimateSnippetViewTransitionFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000100098e80
- (void)_clearSnippetDisplay;	// IMP=0x0000000100098e70
- (void)_dismissWithReason:(unsigned long long)arg1;	// IMP=0x0000000100098d44
- (long long)preferredUserInterfaceStyle;	// IMP=0x0000000100098cb8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100098b84
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100098ae0
- (void)loadView;	// IMP=0x0000000100098a8c
- (void)siriRequestWillStartWithRequestOptions:(id)arg1;	// IMP=0x00000001000989e8
- (void)_configureForRequestOptions:(id)arg1;	// IMP=0x00000001000987c4
- (void)configureForRequestOptions:(id)arg1;	// IMP=0x00000001000987b8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x00000001000986c0
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000010009865c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000985f8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000985dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRStarkView *view; // @dynamic view;

@end
