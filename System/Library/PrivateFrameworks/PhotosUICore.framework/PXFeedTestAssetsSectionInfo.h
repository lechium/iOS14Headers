/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXFeedTestSectionInfo.h>

@class NSArray;

@interface PXFeedTestAssetsSectionInfo : PXFeedTestSectionInfo {

	NSArray* _plAssets;

}

@property (nonatomic,readonly) NSArray * plAssets;              //@synthesize plAssets=_plAssets - In the implementation block
-(id)initWithPhotoLibrary:(id)arg1 ;
-(long long)sectionType;
-(id)assetForItemAtIndex:(long long)arg1 ;
-(NSArray *)plAssets;
-(long long)typeForItemAtIndex:(long long)arg1 ;
-(id)countsByAssetDisplayType;
-(id)_fetchPhotoAssets:(long long)arg1 ;
@end

