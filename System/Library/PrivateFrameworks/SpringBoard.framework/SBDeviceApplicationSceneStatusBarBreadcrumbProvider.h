/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>

@class SiriBreadcrumbSource, SBBreadcrumbActionContext, SBDeviceApplicationSceneHandle, NSHashTable, NSString;

@interface SBDeviceApplicationSceneStatusBarBreadcrumbProvider : NSObject <SBDeviceApplicationSceneHandleObserver> {

	SiriBreadcrumbSource* _siriSource;
	SBBreadcrumbActionContext* _currentBreadcrumbActionContext;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) BOOL hasBreadcrumb; 
@property (nonatomic,copy,readonly) NSString * breadcrumbTitle; 
@property (nonatomic,copy,readonly) NSString * breadcrumbSecondaryTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_breadcrumbBundleIdForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
+(BOOL)_shouldAddBreadcrumbToActivatingSceneEntity:(id)arg1 sceneHandle:(id)arg2 withTransitionContext:(id)arg3 ;
+(id)_breadcrumbPrimaryTitleForAppWithBundleID:(id)arg1 sceneHandle:(id)arg2 activatingSceneEntity:(id)arg3 ;
+(id)_destinationContextsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
+(id)_breadcrumbSceneIdForForAppWithBundleID:(id)arg1 activatingSceneEntity:(id)arg2 withTransitionContext:(id)arg3 ;
-(long long)_openStrategyForAppLinkState:(id)arg1 ;
-(void)_installedApplicationsDidChange:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)_hasSecondaryBreadcrumb;
-(void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(BOOL)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)prepareForReuse;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_setCurrentBreadcrumbActionContext:(id)arg1 ;
-(id)breadcrumbActionsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
-(NSString *)breadcrumbTitle;
-(id)initWithSceneHandle:(id)arg1 ;
-(BOOL)_hasPrimaryBreadcrumb;
-(BOOL)activateSecondaryBreadcrumbIfPossible;
-(NSString *)breadcrumbSecondaryTitle;
-(void)_presentSpotlightFromBreadcrumb;
-(void)_activateBreadcrumbApplication:(id)arg1 withSceneIdentifier:(id)arg2 ;
-(BOOL)activateBreadcrumbIfPossible;
-(void)captureContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)_handleBreadcrumbAction:(unsigned long long)arg1 analyticsSide:(unsigned long long)arg2 ;
-(BOOL)hasBreadcrumb;
-(BOOL)_showTransientOvelayInPlace;
-(void)_presentAssistantFromBreadcrumb;
-(id)succinctDescriptionBuilder;
-(id)_breadcrumbNavigationActionContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_activateAppLink:(id)arg1 withAppLinkState:(id)arg2 wasFromSpotlight:(BOOL)arg3 previousSideBundleID:(id)arg4 previousBreadcrumb:(id)arg5 ;
-(void)noteDidUpdateDisplayProperties;
@end

