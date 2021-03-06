/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXObservable.h>

@protocol PXDisplayAsset;
@class PHFetchResult, PXPhotosDataSource, NSString, PUPhotoSelectionManager;

@interface PUActivitySharingViewModel : PXObservable {

	BOOL _actionSheet;
	PHFetchResult* _collectionListFetchResult;
	PXPhotosDataSource* _photosDataSource;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	id<PXDisplayAsset> _keyAsset;
	long long _sourceOrigin;
	PUPhotoSelectionManager* _selectionManager;

}

@property (nonatomic,retain) PUPhotoSelectionManager * selectionManager;               //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) PHFetchResult * collectionListFetchResult;              //@synthesize collectionListFetchResult=_collectionListFetchResult - In the implementation block
@property (nonatomic,readonly) PXPhotosDataSource * photosDataSource;                  //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (getter=isActionSheet,nonatomic,readonly) BOOL actionSheet;                  //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                         //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedSubtitle;                      //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> keyAsset;                            //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) long long sourceOrigin;                                 //@synthesize sourceOrigin=_sourceOrigin - In the implementation block
-(PHFetchResult *)collectionListFetchResult;
-(PUPhotoSelectionManager *)selectionManager;
-(long long)sourceOrigin;
-(void)setActionSheet:(BOOL)arg1 ;
-(NSString *)localizedSubtitle;
-(NSString *)localizedTitle;
-(void)setSelectionManager:(PUPhotoSelectionManager *)arg1 ;
-(id)mutableChangeObject;
-(PXPhotosDataSource *)photosDataSource;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)init;
-(id<PXDisplayAsset>)keyAsset;
-(id)initWithActivitySharingConfiguration:(id)arg1 ;
-(BOOL)isActionSheet;
@end

