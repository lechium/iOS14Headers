/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/PVEffectTimedPropertiesDelegate.h>

@protocol OS_dispatch_queue, JFXPlayableElement;
@class JFXARMetadataMediaReader, NSObject, JFXSharedMediaDataReaderManager, JFXFaceTrackingPlaybackProperties, NSString;

@interface JFXFaceTrackingPlaybackDelegate : NSObject <PVEffectTimedPropertiesDelegate> {

	BOOL _isScrubbing;
	JFXARMetadataMediaReader* _arMetadataReader;
	NSObject*<OS_dispatch_queue> _mediaDataReaderUpdateQueue;
	JFXSharedMediaDataReaderManager* _sharedMediaDataReaderManager;
	id<JFXPlayableElement> _playableElement;
	NSObject*<OS_dispatch_queue> _cachedFaceTrackingPropertiesQueue;
	JFXFaceTrackingPlaybackProperties* _cachedFaceTrackingProperties;
	CGSize _outputSize;
	SCD_Struct_JF3 _playbackElementPlaybackPresentationOffset;
	SCD_Struct_JF4 _playbackElementPlaybackMediaRange;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> mediaDataReaderUpdateQueue;                     //@synthesize mediaDataReaderUpdateQueue=_mediaDataReaderUpdateQueue - In the implementation block
@property (nonatomic,retain) JFXARMetadataMediaReader * arMetadataReader;                                   //@synthesize arMetadataReader=_arMetadataReader - In the implementation block
@property (nonatomic,readonly) JFXSharedMediaDataReaderManager * sharedMediaDataReaderManager;              //@synthesize sharedMediaDataReaderManager=_sharedMediaDataReaderManager - In the implementation block
@property (nonatomic,readonly) id<JFXPlayableElement> playableElement;                                      //@synthesize playableElement=_playableElement - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                                                           //@synthesize outputSize=_outputSize - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cachedFaceTrackingPropertiesQueue;              //@synthesize cachedFaceTrackingPropertiesQueue=_cachedFaceTrackingPropertiesQueue - In the implementation block
@property (nonatomic,retain) JFXFaceTrackingPlaybackProperties * cachedFaceTrackingProperties;              //@synthesize cachedFaceTrackingProperties=_cachedFaceTrackingProperties - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF3 playbackElementPlaybackPresentationOffset;                    //@synthesize playbackElementPlaybackPresentationOffset=_playbackElementPlaybackPresentationOffset - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF4 playbackElementPlaybackMediaRange;                            //@synthesize playbackElementPlaybackMediaRange=_playbackElementPlaybackMediaRange - In the implementation block
@property (assign,nonatomic) BOOL isScrubbing;                                                              //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isScrubbing;
-(CGSize)outputSize;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(void)JFX_initMetadataReadingProperties;
-(void)JFX_initFaceTrackingCachingProperties;
-(NSObject*<OS_dispatch_queue>)cachedFaceTrackingPropertiesQueue;
-(JFXFaceTrackingPlaybackProperties *)cachedFaceTrackingProperties;
-(void)setCachedFaceTrackingProperties:(JFXFaceTrackingPlaybackProperties *)arg1 ;
-(id<JFXPlayableElement>)playableElement;
-(NSObject*<OS_dispatch_queue>)mediaDataReaderUpdateQueue;
-(JFXARMetadataMediaReader *)arMetadataReader;
-(JFXSharedMediaDataReaderManager *)sharedMediaDataReaderManager;
-(SCD_Struct_JF4)playbackElementPlaybackMediaRange;
-(void)setArMetadataReader:(JFXARMetadataMediaReader *)arg1 ;
-(SCD_Struct_JF3)playbackElementPlaybackPresentationOffset;
-(void)JFX_loadMediaDataReaders;
-(void)JFX_unloadMediaDataReaders;
-(id)faceTrackingTransformAtTime:(SCD_Struct_JF3)arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2 ;
-(void)JFX_setMediaDataReaderScrubbingMode:(BOOL)arg1 ;
-(id)JFX_faceTrackingPlaybackPropertiesAtTime:(SCD_Struct_JF3)arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2 ;
-(SCD_Struct_JF3)jfx_mediaTimeFromPlaybackTime:(SCD_Struct_JF3)arg1 ;
-(id)JFX_cachedFaceTrackingPropertiesForMediaTime:(SCD_Struct_JF3)arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2 ;
-(id)JFX_arMetadataForMediaTime:(SCD_Struct_JF3)arg1 foundTimeRange:(SCD_Struct_JF4*)arg2 ;
-(void)JFX_cacheFaceTrackingProperties:(id)arg1 ;
-(id)supportedTimedPropertyGroupsForEffect:(id)arg1 ;
-(id)effect:(id)arg1 timedPropertiesForGroup:(id)arg2 time:(SCD_Struct_JF3)arg3 userContext:(id)arg4 ;
-(void)effect:(id)arg1 willStartRequestingTimedProperties:(id)arg2 ;
-(void)effect:(id)arg1 didStopRequestingTimedProperties:(id)arg2 ;
-(id)initWithPlayableElement:(id)arg1 sharedMediaDataReaderManager:(id)arg2 outputSize:(CGSize)arg3 ;
-(id)arDataAtTime:(SCD_Struct_JF3)arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2 ;
@end

