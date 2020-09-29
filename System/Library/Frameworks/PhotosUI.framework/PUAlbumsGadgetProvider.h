/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXCollectionsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUAlbumGadgetDelegate.h>
#import <libobjc.A.dylib/PUHorizontalAlbumListGadgetLayoutDelegate.h>

@class PXPhotoKitCollectionsDataSourceManager, PUAlbumListCellContentViewHelper, PXExtendedTraitCollection, NSString;

@interface PUAlbumsGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXChangeObserver, PUAlbumGadgetDelegate, PUHorizontalAlbumListGadgetLayoutDelegate> {

	BOOL _hasGeneratedGadgets;
	PXPhotoKitCollectionsDataSourceManager* _dataSourceManager;
	PUAlbumListCellContentViewHelper* _contentViewHelper;
	unsigned long long _albumListType;
	PXExtendedTraitCollection* _extendedTraitCollection;
	unsigned long long _currentDataSourceIdentifier;

}

@property (assign,nonatomic) unsigned long long currentDataSourceIdentifier;                            //@synthesize currentDataSourceIdentifier=_currentDataSourceIdentifier - In the implementation block
@property (nonatomic,retain) PUAlbumListCellContentViewHelper * contentViewHelper;                      //@synthesize contentViewHelper=_contentViewHelper - In the implementation block
@property (assign,nonatomic) BOOL hasGeneratedGadgets;                                                  //@synthesize hasGeneratedGadgets=_hasGeneratedGadgets - In the implementation block
@property (nonatomic,readonly) unsigned long long albumListType;                                        //@synthesize albumListType=_albumListType - In the implementation block
@property (nonatomic,readonly) PXPhotoKitCollectionsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * extendedTraitCollection;                     //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSeeAllAccessoryButton; 
@property (nonatomic,readonly) NSString * seeAllAccessoryButtonTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)albumListType;
-(id)initWithIdentifier:(id)arg1 ;
-(PXExtendedTraitCollection *)extendedTraitCollection;
-(PXPhotoKitCollectionsDataSourceManager *)dataSourceManager;
-(PUAlbumListCellContentViewHelper *)contentViewHelper;
-(id)initWithAlbumListType:(unsigned long long)arg1 dataSourceManager:(id)arg2 extendedTraitCollection:(id)arg3 ;
-(void)generateGadgets;
-(id)albumListCellContentViewHelperForAlbum:(id)arg1 ;
-(BOOL)hasGeneratedGadgets;
-(Class)_albumGadgetClassForCollection:(id)arg1 ;
-(id)_newGadgetForCollection:(id)arg1 ;
-(void)_reconfigureGadgets;
-(void)pauseLoadingRemainingData;
-(id)gadgetForIndexPath:(id)arg1 ;
-(id)gadgetForCollection:(id)arg1 ;
-(void)startLoadingRemainingData;
-(void)loadDataForGadgets;
-(id)init;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)setContentViewHelper:(PUAlbumListCellContentViewHelper *)arg1 ;
-(BOOL)shouldShowSeeAllAccessoryButton;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setHasGeneratedGadgets:(BOOL)arg1 ;
-(id)albumListCellContentViewHelperForLayout:(id)arg1 ;
-(void)setCurrentDataSourceIdentifier:(unsigned long long)arg1 ;
-(void)_updateDataSourceWithChangeDetails:(id)arg1 ;
-(NSString *)seeAllAccessoryButtonTitle;
-(unsigned long long)currentDataSourceIdentifier;
@end
