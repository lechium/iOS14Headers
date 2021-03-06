/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAsset.h>

@class PHAsset, NSArray, NSDictionary, NSMutableDictionary;

@interface VCPPhotosAsset : VCPAsset {

	PHAsset* _asset;
	NSArray* _cachedResources;
	BOOL _onceExif;
	NSDictionary* _cachedExif;
	BOOL _onceScenes;
	NSMutableDictionary* _cachedScenes;

}

@property (nonatomic,readonly) NSArray * resources; 
+(id)assetWithPHAsset:(id)arg1 ;
-(id)scenes;
-(id)modificationDate;
-(id)localIdentifier;
-(long long)mediaType;
-(id)exif;
-(id)movie;
-(id)fingerprint;
-(unsigned long long)pixelWidth;
-(double)duration;
-(id)initWithPHAsset:(id)arg1 ;
-(NSArray *)resources;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(float)photoOffsetSeconds;
-(float)originalPhotoOffsetSeconds;
-(float)slowmoRate;
-(id)streamedMovie;
-(id)originalMovie;
-(CGSize)originalMovieSize;
-(unsigned long long)mediaSubtypes;
-(id)mainFileURL;
-(unsigned long long)pixelHeight;
@end

