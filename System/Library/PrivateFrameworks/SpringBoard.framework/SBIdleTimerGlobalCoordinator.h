/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBIdleTimerObserving.h>
#import <libobjc.A.dylib/SBIdleTimerGlobalStateMonitorObserving.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>

@protocol BSInvalidatable, SBIdleTimerResetSource, SBIdleTimerGlobalCoordinatorDelegate, SBIdleTimerProviding;
@class SBIdleTimerDescriptorFactory, SBIdleTimerGlobalStateMonitor, SBIdleTimerProxy, SBIdleTimerDescriptor, SBIdleTimerCoordinatorHelper, FBSDisplayLayoutMonitor, PTTestRecipe, NSMutableDictionary, NSString;

@interface SBIdleTimerGlobalCoordinator : NSObject <SBIdleTimerObserving, SBIdleTimerGlobalStateMonitorObserving, SBIdleTimerCoordinating> {

	SBIdleTimerDescriptorFactory* _idleTimerDescriptorFactory;
	SBIdleTimerGlobalStateMonitor* _globalStateMonitor;
	SBIdleTimerProxy* _idleTimerProxy;
	SBIdleTimerDescriptor* _disabledIdleTimerDescriptor;
	SBIdleTimerProxy* _enabledIdleTimerProxy;
	SBIdleTimerDescriptor* _enabledIdleTimerDescriptor;
	BOOL _idleTimerSourceEnabled;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	id<BSInvalidatable> _disableAutoDimAssertion;
	FBSDisplayLayoutMonitor* _layoutMonitor;
	BOOL _started;
	id<SBIdleTimerResetSource> _lastResetSource;
	id<BSInvalidatable> _stateCaptureAssertion;
	PTTestRecipe* _clientDisableAssertionsTestRecipe;
	PTTestRecipe* _internalDisableAssertionsTestRecipe;
	id<SBIdleTimerGlobalCoordinatorDelegate> _delegate;
	id<SBIdleTimerProviding> _idleTimerProvider;
	NSMutableDictionary* _idleTimerDisableAssertions;

}

@property (nonatomic,readonly) id<SBIdleTimer> idleTimer; 
@property (assign,setter=_setIdleTimerProvider:,getter=_idleTimerProvider,nonatomic,__weak) id<SBIdleTimerProviding> idleTimerProvider;                               //@synthesize idleTimerProvider=_idleTimerProvider - In the implementation block
@property (setter=_setIdleTimerDisableAssertions:,getter=_idleTimerDisableAssertions,nonatomic,retain) NSMutableDictionary * idleTimerDisableAssertions;              //@synthesize idleTimerDisableAssertions=_idleTimerDisableAssertions - In the implementation block
@property (assign,nonatomic,__weak) id<SBIdleTimerGlobalCoordinatorDelegate> delegate;                                                                                //@synthesize delegate=_delegate - In the implementation block
@property (getter=isIdleTimerDisabled,nonatomic,readonly) BOOL idleTimerDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg1 ;
-(void)_addStateCaptureHandlers;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(BOOL)_areIdleTimerDisableAssertionsPrevented;
-(void)idleTimerDidResetForUserAttention:(id)arg1 ;
-(BOOL)isIdleTimerDisabled;
-(void)resetIdleTimerIfNonConsecutiveSource:(id)arg1 forReason:(id)arg2 ;
-(BOOL)_hasIdleTimerDisableAssertions;
-(void)dealloc;
-(void)_applyActiveIdleTimerDescriptorForReason:(id)arg1 ;
-(BOOL)_updateIdleTimerForReason:(id)arg1 ;
-(void)resetIdleTimer;
-(id)acquireIdleTimerDisableAssertionForReason:(id)arg1 ;
-(void)_setIdleTimerDisableAssertions:(id)arg1 ;
-(id<SBIdleTimer>)idleTimer;
-(void)start;
-(id)_idleTimerDisableAssertions;
-(void)resetIdleTimerForReason:(id)arg1 ;
-(id)init;
-(void)_setIdleTimerWithDescriptor:(id)arg1 forReason:(id)arg2 ;
-(void)_idleTimerPrefsChanged;
-(void)setDelegate:(id<SBIdleTimerGlobalCoordinatorDelegate>)arg1 ;
-(id)_updateIdleTimerForProvider:(id)arg1 behavior:(id)arg2 forReason:(id)arg3 ;
-(void)_registerInternalDisableAssertionsTestRecipe;
-(id)_activeIdleTimerProvider;
-(id<SBIdleTimerGlobalCoordinatorDelegate>)delegate;
-(void)_unregisterTestRecipes;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(id)_idleTimerProvider;
-(void)_registerTestRecipes;
-(void)_setIdleTimerProvider:(id)arg1 ;
-(void)idleTimerGlobalStateMonitor:(id)arg1 changedForReason:(id)arg2 ;
-(void)_registerClientDisableAssertionsTestRecipe;
-(id)_stateCaptureDescription;
-(void)_setIdleTimerSourceEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_updateGlobalStateDisableAssertions;
-(id)_updateIdleTimerForProvider:(id)arg1 behavior:(id)arg2 descriptor:(id)arg3 forReason:(id)arg4 ;
-(void)_logEffectiveLockTimeout;
@end

