/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXGridPresentation.h>

@class PUSessionInfo, NSString;

@interface PUPXGridPresentation : NSObject <PXGridPresentation> {

	PUSessionInfo* _sessionInfo;
	long long _userInterfaceIdiom;

}

@property (assign) long long userInterfaceIdiom;                                                         //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (getter=_isRunningInPhotoPicker,nonatomic,readonly) BOOL _isRunningInPhotoPicker; 
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)userInterfaceIdiom;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(id)initWithUserInterfaceIdiom:(long long)arg1 ;
-(id)createImportHistoryGridViewControllerWithCollection:(id)arg1 ;
-(id)createPlacesViewControllerForAssetCollection:(id)arg1 ;
-(id)createAssetPickerPhotosAlbumViewControllerForAlbum:(id)arg1 ;
-(id)createAlbumListViewControllerWithCollectionList:(id)arg1 ;
-(BOOL)_isRunningInPhotoPicker;
-(id)createPhotosAlbumViewControllerForAlbum:(id)arg1 withFetchResult:(id)arg2 ;
-(id)createSharedAlbumListViewControllerWithConfiguration:(id)arg1 ;
-(id)createPhotosPickerViewControllerWithSelectedAssets:(id)arg1 anchorAtAsset:(id)arg2 inAssetCollection:(id)arg3 options:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_isEmpty:(id)arg1 ;
-(id)createViewControllerForAssetCollection:(id)arg1 existingAssetsFetchResult:(id)arg2 ;
-(id)_assetCollectionToAssetsMapForAssets:(id)arg1 ;
-(id)init;
-(id)createPanoramaViewController;
-(void)_customizePhotosViewConfiguationForAssetPicker:(id)arg1 assetCollection:(id)arg2 ;
-(id)createViewControllerForAssetCollection:(id)arg1 ;
-(id)createAlbumListViewControllerWithConfiguration:(id)arg1 ;
-(PUSessionInfo *)sessionInfo;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(void)createGridViewControllerWithAssets:(id)arg1 withTitle:(id)arg2 hideTabBar:(BOOL)arg3 gridPresentationContext:(long long)arg4 containerViewController:(id)arg5 barsUpdateDelegate:(id)arg6 andCompletion:(/*^block*/id)arg7 ;
@end

