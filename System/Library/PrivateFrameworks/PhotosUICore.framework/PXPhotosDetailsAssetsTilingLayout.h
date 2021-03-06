/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:05 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXEngineDrivenAssetsTilingLayout.h>

@class PXPhotosDetailsAssetsSpec;

@interface PXPhotosDetailsAssetsTilingLayout : PXEngineDrivenAssetsTilingLayout {

	PXPhotosDetailsAssetsSpec* _spec;
	long long _placeholderMode;

}

@property (nonatomic,retain) PXPhotosDetailsAssetsSpec * spec;              //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long placeholderMode;                     //@synthesize placeholderMode=_placeholderMode - In the implementation block
-(UIEdgeInsets)contentInset;
-(void)prepareLayout;
-(PXPhotosDetailsAssetsSpec *)spec;
-(CGRect)contentBounds;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)setPlaceholderMode:(long long)arg1 ;
-(long long)placeholderMode;
-(CGRect)_placeholderFrame;
-(void)setSpec:(PXPhotosDetailsAssetsSpec *)arg1 ;
@end

