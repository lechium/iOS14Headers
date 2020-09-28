/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>

@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {

	AVAssetProxyInternal* _assetProxy;

}
+(id)assetProxyWithPropertyList:(id)arg1 ;
+(id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2 ;
-(Class)_classForTrackInspectors;
-(id)tracks;
-(void)dealloc;
-(OpaqueFigAssetRef)_figAsset;
-(id)_assetInspector;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)_assetInspectorLoader;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)initWithPropertyList:(id)arg1 ;
-(BOOL)isProxy;
@end
