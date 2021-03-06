/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <MediaPlayer/MPModelStoreBrowseRequest.h>

@interface NMSModelEditorialRecommendationsRequest : MPModelStoreBrowseRequest {

	BOOL _nms_useCachedDataOnly;
	id _nms_cachedLoadedOutput;

}

@property (assign,nonatomic) BOOL nms_useCachedDataOnly;              //@synthesize nms_useCachedDataOnly=_nms_useCachedDataOnly - In the implementation block
@property (nonatomic,retain) id nms_cachedLoadedOutput;               //@synthesize nms_cachedLoadedOutput=_nms_cachedLoadedOutput - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNms_useCachedDataOnly:(BOOL)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setNms_cachedLoadedOutput:(id)arg1 ;
-(BOOL)nms_useCachedDataOnly;
-(id)nms_cachedLoadedOutput;
@end

