/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, _WKUserInitiatedAction, NSTimer;

@interface WBSURLSpoofingMitigator : NSObject {

	NSDate* _dateOfLastSuspiciousProvisionalNavigationInterruption;
	unsigned long long _recentlyInterruptedNavigationCount;
	_WKUserInitiatedAction* _userInitiatedAction;
	NSTimer* _timerForRevertingToCommittedURL;
	BOOL _hasCommittedChromeInitiatedLoad;
	BOOL _UIShouldReflectCommittedURLInsteadOfCurrentURL;
	long long _navigationSource;

}

@property (nonatomic,readonly) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL;              //@synthesize UIShouldReflectCommittedURLInsteadOfCurrentURL=_UIShouldReflectCommittedURLInsteadOfCurrentURL - In the implementation block
@property (assign,nonatomic) long long navigationSource;                                         //@synthesize navigationSource=_navigationSource - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
-(BOOL)UIShouldReflectCommittedURLInsteadOfCurrentURL;
-(void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
-(void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)arg1 ;
-(long long)navigationSource;
-(void)_stopTrackingInterruptedProvisionalNavigations;
-(void)willStartNewBrowserChromeInitiatedNavigation;
-(void)didFailProvisionalNavigationWithError:(id)arg1 ;
-(void)didStartProvisionalNavigationWithUserInitiatedAction:(id)arg1 ;
-(void)didCommitNavigation;
-(void)setNavigationSource:(long long)arg1 ;
@end

