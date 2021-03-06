/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXRootLibraryNavigationController <NSObject,PLCloudFeedNavigating>
@required
-(void)navigateToRevealAlbum:(id)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
-(BOOL)assetIsAvailableForNavigationInMoments:(id)arg1 refetchSectionsIfNeeded:(BOOL)arg2;
-(void)navigateToCloudFeedComment:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToMomentShareWithURL:(id)arg1 animated:(BOOL)arg2;
-(void)navigateToInvitationCMMWithIdentifier:(id)arg1 animated:(BOOL)arg2;
-(BOOL)commentIsAvailableForNavigation:(id)arg1 inAsset:(id)arg2;
-(void)navigateToOneYearAgoSearch;
-(void)navigateToCloudFeedWithCompletion:(/*^block*/id)arg1;
-(void)navigateToMemoryWithLocalIdentifier:(id)arg1 animated:(BOOL)arg2;
-(void)navigateToComment:(id)arg1 forAsset:(id)arg2 animated:(BOOL)arg3;
-(void)navigateToAlbum:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)navigateToFeaturedPhotoWithSuggestionIdentifier:(id)arg1 animated:(BOOL)arg2;
-(void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)cloudFeedIsAvailableForNavigation;
-(void)navigateToPeopleAlbumAnimated:(BOOL)arg1 revealPersonWithLocalIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToSearchWithHashtag:(id)arg1;
-(void)navigateToContentMode:(int)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)navigateToPhotosContentBottomAnimated:(BOOL)arg1;
-(BOOL)assetIsAvailableForNavigation:(id)arg1 inAlbum:(id)arg2;
-(void)navigateToRevealCloudFeedComment:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)albumIsAvailableForNavigation:(id)arg1;
-(void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)arg1;
-(BOOL)contentModeIsAvailableForNavigation:(int)arg1;
-(void)navigateToCloudFeedAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(void)navigateToSuggestedCMMWithIdentifier:(id)arg1 animated:(BOOL)arg2;
-(void)navigateToAsset:(id)arg1 openOneUp:(BOOL)arg2 animated:(BOOL)arg3;
-(BOOL)assetIsAvailableForNavigationInMoments:(id)arg1;
-(void)navigateToRevealAsset:(id)arg1 inAlbum:(id)arg2 animated:(BOOL)arg3;
-(void)navigateToAsset:(id)arg1 inAlbum:(id)arg2 animated:(BOOL)arg3;

@end

