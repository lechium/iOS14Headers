/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class UIViewController, PUActivitySharingController;

@interface PUPhotoKitShareActionPerformer : PUPhotoKitActionPerformer {

	UIViewController* _preheatedSharingViewController;
	PUActivitySharingController* _activitySharingController;

}

@property (nonatomic,retain) UIViewController * preheatedSharingViewController;                    //@synthesize preheatedSharingViewController=_preheatedSharingViewController - In the implementation block
@property (nonatomic,retain) PUActivitySharingController * activitySharingController;              //@synthesize activitySharingController=_activitySharingController - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
+(BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)setActivitySharingController:(PUActivitySharingController *)arg1 ;
-(id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2 ;
-(PUActivitySharingController *)activitySharingController;
-(void)performUserInteractionTask;
-(id)_createSharingViewControllerFromCurrentSelection;
-(UIViewController *)preheatedSharingViewController;
-(void)setPreheatedSharingViewController:(UIViewController *)arg1 ;
-(void)preheatUserInteractionTask;
@end

