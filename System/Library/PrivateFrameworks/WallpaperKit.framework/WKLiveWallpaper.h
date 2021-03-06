/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WallpaperKit/WallpaperKit-Structs.h>
#import <WallpaperKit/WKAbstractWallpaper.h>
#import <libobjc.A.dylib/WKFileBasedWallpaper.h>

@class NSURL, NSString;

@interface WKLiveWallpaper : WKAbstractWallpaper <WKFileBasedWallpaper> {

	NSURL* _fullsizeImageURL;
	NSURL* _thumbnailImageURL;
	NSURL* _videoAssetURL;
	double _stillTimeInVideo;

}

@property (nonatomic,copy) NSURL * thumbnailImageURL;                       //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
@property (nonatomic,copy) NSURL * fullsizeImageURL;                        //@synthesize fullsizeImageURL=_fullsizeImageURL - In the implementation block
@property (nonatomic,copy) NSURL * videoAssetURL;                           //@synthesize videoAssetURL=_videoAssetURL - In the implementation block
@property (assign,nonatomic) double stillTimeInVideo;                       //@synthesize stillTimeInVideo=_stillTimeInVideo - In the implementation block
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long backingType; 
+(id)na_identity;
-(void)setStillTimeInVideo:(double)arg1 ;
-(double)stillTimeInVideo;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailImageURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)videoAssetURL;
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)fullsizeImageURL;
-(unsigned long long)backingType;
-(unsigned long long)hash;
-(id)initWithIdentifier:(long long)arg1 name:(id)arg2 thumbnailImageURL:(id)arg3 fullsizeImageURL:(id)arg4 videoAssetURL:(id)arg5 stillTimeInVideo:(double)arg6 ;
-(void)setFullsizeImageURL:(NSURL *)arg1 ;
-(void)setVideoAssetURL:(NSURL *)arg1 ;
-(/*^block*/id)descriptionBuilderBlock;
@end

