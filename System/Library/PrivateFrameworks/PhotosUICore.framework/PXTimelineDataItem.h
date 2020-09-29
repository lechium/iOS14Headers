/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PXTimelineCrop, PHAssetCollection;

@interface PXTimelineDataItem : NSObject {

	PXTimelineCrop* _suggestedCrop;
	PHAssetCollection* _assetCollection;

}

@property (nonatomic,retain) PXTimelineCrop * suggestedCrop;                   //@synthesize suggestedCrop=_suggestedCrop - In the implementation block
@property (nonatomic,retain) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
-(PHAssetCollection *)assetCollection;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(PXTimelineCrop *)suggestedCrop;
-(id)initWithAssetCollection:(id)arg1 suggestedCrop:(id)arg2 ;
-(void)setSuggestedCrop:(PXTimelineCrop *)arg1 ;
@end
