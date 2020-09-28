/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaItem.h>

@class MPMediaItem;

@interface OKMPMediaItem : OKMediaItem {

	MPMediaItem* _mediaItem;

}

@property (retain) MPMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
+(id)scheme;
+(BOOL)isRemote;
+(id)urlForMediaObject:(id)arg1 ;
+(id)urlForMPAsset:(id)arg1 ;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(void)dealloc;
-(id)mediaObject;
-(id)init;
-(MPMediaItem *)mediaItem;
-(void)setMediaObject:(id)arg1 ;
-(id)initWithMPMediaItem:(id)arg1 ;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)avAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)wantsDiskCachedMetadata;
-(void)_resolveAssetIfNeeded;
@end
