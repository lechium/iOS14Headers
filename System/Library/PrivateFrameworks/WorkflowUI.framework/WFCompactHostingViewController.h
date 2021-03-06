/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFActionUserInterfaceListenerDelegate.h>
#import <libobjc.A.dylib/WFCompactDialogViewControllerDelegate.h>

@class WFActionUserInterfaceListener, WFWorkflowRunningContext, WFDialogAttribution, NSProgress, UIView, MTMaterialView, WFCompactStatusViewController, NSTimer, WFDialogRequest, WFCompactUnlockService, NSString;

@interface WFCompactHostingViewController : UIViewController <WFActionUserInterfaceListenerDelegate, WFCompactDialogViewControllerDelegate> {

	BOOL _screenIsLocked;
	BOOL _hasViewAppeared;
	BOOL _handlingRequest;
	WFActionUserInterfaceListener* _actionInterfaceListener;
	WFWorkflowRunningContext* _runningContext;
	WFDialogAttribution* _runningAttribution;
	NSProgress* _progress;
	id _progressSubscriber;
	UIView* _dimmingView;
	MTMaterialView* _materialView;
	WFCompactStatusViewController* _statusViewController;
	NSTimer* _statusViewTimer;
	WFDialogRequest* _pendingRequest;
	/*^block*/id _requestCompletionHandler;
	WFCompactUnlockService* _unlockService;

}

@property (nonatomic,readonly) BOOL screenIsLocked;                                                //@synthesize screenIsLocked=_screenIsLocked - In the implementation block
@property (nonatomic,retain) WFWorkflowRunningContext * runningContext;                            //@synthesize runningContext=_runningContext - In the implementation block
@property (nonatomic,retain) WFDialogAttribution * runningAttribution;                             //@synthesize runningAttribution=_runningAttribution - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) id progressSubscriber;                                                //@synthesize progressSubscriber=_progressSubscriber - In the implementation block
@property (assign,nonatomic) BOOL hasViewAppeared;                                                 //@synthesize hasViewAppeared=_hasViewAppeared - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                                 //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) MTMaterialView * materialView;                                        //@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) WFCompactStatusViewController * statusViewController;                 //@synthesize statusViewController=_statusViewController - In the implementation block
@property (nonatomic,retain) NSTimer * statusViewTimer;                                            //@synthesize statusViewTimer=_statusViewTimer - In the implementation block
@property (nonatomic,retain) WFDialogRequest * pendingRequest;                                     //@synthesize pendingRequest=_pendingRequest - In the implementation block
@property (assign,nonatomic) BOOL handlingRequest;                                                 //@synthesize handlingRequest=_handlingRequest - In the implementation block
@property (nonatomic,copy) id requestCompletionHandler;                                            //@synthesize requestCompletionHandler=_requestCompletionHandler - In the implementation block
@property (nonatomic,retain) WFActionUserInterfaceListener * actionInterfaceListener;              //@synthesize actionInterfaceListener=_actionInterfaceListener - In the implementation block
@property (nonatomic,readonly) WFCompactUnlockService * unlockService;                             //@synthesize unlockService=_unlockService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)dimmingView;
-(id)requestCompletionHandler;
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMaterialView:(MTMaterialView *)arg1 ;
-(void)setPendingRequest:(WFDialogRequest *)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(id)progressSubscriber;
-(void)handleRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setProgressSubscriber:(id)arg1 ;
-(WFDialogRequest *)pendingRequest;
-(void)loadView;
-(void)setProgress:(NSProgress *)arg1 ;
-(MTMaterialView *)materialView;
-(WFCompactStatusViewController *)statusViewController;
-(void)setStatusViewController:(WFCompactStatusViewController *)arg1 ;
-(BOOL)hasViewAppeared;
-(NSProgress *)progress;
-(void)setHasViewAppeared:(BOOL)arg1 ;
-(void)handleTapGesture:(id)arg1 ;
-(void)setRequestCompletionHandler:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)cancelAndDismiss;
-(void)dismissPersistentChromeWithSuccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)preparePersistentChromeWithContext:(id)arg1 attribution:(id)arg2 ;
-(WFWorkflowRunningContext *)runningContext;
-(void)setRunningContext:(WFWorkflowRunningContext *)arg1 ;
-(WFActionUserInterfaceListener *)actionInterfaceListener;
-(void)setActionInterfaceListener:(WFActionUserInterfaceListener *)arg1 ;
-(void)actionUserInterfaceListener:(id)arg1 showViewInPlatter:(id)arg2 attribution:(id)arg3 ;
-(WFCompactUnlockService *)unlockService;
-(void)keyboardWillChange;
-(void)dialogViewController:(id)arg1 didFinishWithResponse:(id)arg2 waitForFollowUpRequest:(BOOL)arg3 ;
-(id)initWithScreenLocked:(BOOL)arg1 ;
-(void)presentChromeIfPossible;
-(void)updateChromeVisibilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentStatusViewController;
-(void)scheduleStatusViewToAppear;
-(void)clearStatusViewTimer;
-(void)handlePendingRequest;
-(void)dismissPlatterViewControllerIfNecessaryAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissPlatterViewControllerAndUpdateChromeAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)screenIsLocked;
-(WFDialogAttribution *)runningAttribution;
-(void)setRunningAttribution:(WFDialogAttribution *)arg1 ;
-(NSTimer *)statusViewTimer;
-(void)setStatusViewTimer:(NSTimer *)arg1 ;
-(BOOL)handlingRequest;
-(void)setHandlingRequest:(BOOL)arg1 ;
@end

