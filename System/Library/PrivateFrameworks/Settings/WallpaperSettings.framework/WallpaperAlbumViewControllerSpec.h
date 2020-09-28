/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WallpaperSettings/WallpaperSettings-Structs.h>
@class PUPhotosGridViewControllerSpec;

@interface WallpaperAlbumViewControllerSpec : NSObject {

	PUPhotosGridViewControllerSpec* _gridSpec;

}

@property (nonatomic,readonly) PUPhotosGridViewControllerSpec * gridSpec;              //@synthesize gridSpec=_gridSpec - In the implementation block
+(Class)gridSpecClass;
-(PUPhotosGridViewControllerSpec *)gridSpec;
-(id)init;
-(void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
-(void)configureFactoryGridLayout:(id)arg1 forWidth:(double)arg2 andThumbnailSize:(CGSize)arg3 ;
@end
