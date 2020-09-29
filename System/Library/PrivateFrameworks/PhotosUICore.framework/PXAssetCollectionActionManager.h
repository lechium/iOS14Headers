/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXActionManager.h>

@protocol UIDragSession, UIDropSession;
@class PXAssetCollectionReference, PXDisplayTitleInfo, PHFetchResult, PXAssetReference, PXAssetsDataSourceManager;

@interface PXAssetCollectionActionManager : PXActionManager {

	PXAssetCollectionReference* _initialAssetCollectionReference;
	PXDisplayTitleInfo* _displayTitleInfo;
	PHFetchResult* _people;
	PXAssetReference* _dropTargetAssetReference;
	id<UIDragSession> _dragSession;
	id<UIDropSession> _dropSession;
	PXAssetsDataSourceManager* _assetsDataSourceManager;
	PHFetchResult* _assetsFetchResult;

}

@property (nonatomic,retain) PHFetchResult * people;                                               //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference;                          //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,retain) id<UIDragSession> dragSession;                                        //@synthesize dragSession=_dragSession - In the implementation block
@property (nonatomic,retain) id<UIDropSession> dropSession;                                        //@synthesize dropSession=_dropSession - In the implementation block
@property (nonatomic,retain) PXAssetsDataSourceManager * assetsDataSourceManager;                  //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,retain) PHFetchResult * assetsFetchResult;                                    //@synthesize assetsFetchResult=_assetsFetchResult - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference; 
@property (nonatomic,readonly) PXDisplayTitleInfo * displayTitleInfo;                              //@synthesize displayTitleInfo=_displayTitleInfo - In the implementation block
-(PHFetchResult *)people;
-(void)setDropTargetAssetReference:(PXAssetReference *)arg1 ;
-(PXAssetReference *)dropTargetAssetReference;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 assetCollectionReference:(id)arg3 ;
-(id<UIDropSession>)dropSession;
-(void)setDragSession:(id<UIDragSession>)arg1 ;
-(id)systemImageNameForActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
-(PXAssetsDataSourceManager *)assetsDataSourceManager;
-(id)systemImageNameForActionType:(id)arg1 ;
-(void)setDropSession:(id<UIDropSession>)arg1 ;
-(id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2 ;
-(PXDisplayTitleInfo *)displayTitleInfo;
-(id)initWithAssetCollectionReference:(id)arg1 displayTitleInfo:(id)arg2 ;
-(id)displayTitleInfoForAssetCollection:(id)arg1 ;
-(void)setAssetsDataSourceManager:(PXAssetsDataSourceManager *)arg1 ;
-(void)setAssetsFetchResult:(PHFetchResult *)arg1 ;
-(id)init;
-(PHFetchResult *)assetsFetchResult;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(BOOL)canPerformActionType:(id)arg1 ;
-(BOOL)canPerformActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
-(void)setPeople:(PHFetchResult *)arg1 ;
-(id)actionPerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
-(PXAssetCollectionReference *)assetCollectionReference;
-(id)actionPerformerForActionType:(id)arg1 ;
-(id<UIDragSession>)dragSession;
@end
