/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXCompositionItem.h>

@class AVAsset;

@interface JFXMovieCompositionItem : JFXCompositionItem {

	int _audioAssetOverwriteStartOffset;
	AVAsset* _asset;
	AVAsset* _audioAssetOverwrite;

}

@property (nonatomic,retain) AVAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAsset * audioAssetOverwrite;                   //@synthesize audioAssetOverwrite=_audioAssetOverwrite - In the implementation block
@property (assign,nonatomic) int audioAssetOverwriteStartOffset;              //@synthesize audioAssetOverwriteStartOffset=_audioAssetOverwriteStartOffset - In the implementation block
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(id)initWithClip:(id)arg1 timeScale:(int)arg2 ;
-(id)segmentWithCharacteristic:(id)arg1 sourceRange:(SCD_Struct_JF4)arg2 destinationRange:(SCD_Struct_JF4)arg3 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JF3)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_JF4)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JF3)arg1 paddedFromTime:(SCD_Struct_JF3)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_JF4)arg1 ;
-(AVAsset *)audioAssetOverwrite;
-(BOOL)needAudioLoop;
-(id)audioTrackSegmentsLoopedWithDestinationTime:(SCD_Struct_JF3)arg1 ;
-(id)speedRangesForSourceRange:(SCD_Struct_JF4)arg1 destinationRange:(SCD_Struct_JF4)arg2 ;
-(int)audioAssetOverwriteStartOffset;
-(SCD_Struct_JF4)applySpeed:(SCD_Struct_JF4)arg1 ;
-(void)setAudioAssetOverwrite:(AVAsset *)arg1 ;
-(void)setAudioAssetOverwriteStartOffset:(int)arg1 ;
@end
