/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXGadgetUIViewController.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXNavigableForYouViewController.h>
#import <libobjc.A.dylib/PXNavigableSharedAlbumActivityFeedHostViewController.h>

@class PXForYouBadgeManager, PXForYouGadgetPriorityManager, NSString;

@interface PXForYouGadgetViewController : PXGadgetUIViewController <PXSettingsKeyObserver, PXNavigableForYouViewController, PXNavigableSharedAlbumActivityFeedHostViewController> {

	BOOL _needsRefresh;
	PXForYouBadgeManager* _badgeManager;
	PXForYouGadgetPriorityManager* _priorityManager;

}

@property (nonatomic,retain) PXForYouBadgeManager * badgeManager;                          //@synthesize badgeManager=_badgeManager - In the implementation block
@property (nonatomic,retain) PXForYouGadgetPriorityManager * priorityManager;              //@synthesize priorityManager=_priorityManager - In the implementation block
@property (assign,nonatomic) BOOL needsRefresh;                                            //@synthesize needsRefresh=_needsRefresh - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lastExitedForYouDate;
+(void)setLastExitedForYouDate:(id)arg1 ;
-(id)px_sharedAlbumFeedViewControllerWithTraitCollection:(id)arg1 ;
-(BOOL)needsRefresh;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(PXForYouBadgeManager *)badgeManager;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setBadgeManager:(PXForYouBadgeManager *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(void)viewDidLoad;
-(void)_lastSeenBadgeDateChanged;
-(void)rootGadgetControllerWillAppear;
-(void)rootGadgetControllerDidDisappear;
-(void)_handleTapToRadar;
-(id)_suggestionDumpURL;
-(void)_userDidViewCloudFeedContent;
-(void)setPriorityManager:(PXForYouGadgetPriorityManager *)arg1 ;
-(void)setNeedsRefresh:(BOOL)arg1 ;
-(void)ppt_navigateToFirstSuggestedCMMAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)ppt_navigateToFirstSuggestedCMMComposeRecipientViewAfterOneSecondWithCompleteHandler:(/*^block*/id)arg1 ;
-(void)ppt_navigateToFirstInvitationCMM:(BOOL)arg1 withCompleteHandler:(/*^block*/id)arg2 ;
-(void)configureSectionHeader:(id)arg1 ;
-(id)px_navigationDestination;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)navigateToSharedAlbumActivityFeedAnimated:(BOOL)arg1 configuration:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadContent;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)routingOptionsForDestination:(id)arg1 ;
-(PXForYouGadgetPriorityManager *)priorityManager;
-(id)initWithBadgeManager:(id)arg1 ;
-(void)navigateToDetailsForMemoryWithLocalIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(id)navigateToShowAllMemoriesFeedAnimated:(BOOL)arg1 ;
-(long long)scrollAnimationIdentifier;
@end
