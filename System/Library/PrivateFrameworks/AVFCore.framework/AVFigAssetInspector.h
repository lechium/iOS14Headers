/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspector.h>

@class AVDispatchOnce, AVDisplayCriteria, NSURL, NSArray;

@interface AVFigAssetInspector : AVAssetInspector {

	OpaqueFigAssetRef _figAsset;
	OpaqueFigFormatReaderRef _formatReader;
	AVDispatchOnce* _formatReaderOnce;
	AVDispatchOnce* _checkIsStreamingOnce;
	AVDispatchOnce* _makeDisplayCriteriaOnce;
	AVDisplayCriteria* _displayCriteria;
	BOOL _isStreaming;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;

}

@property (getter=_figAsset,nonatomic,readonly) OpaqueFigAssetRef figAsset; 
@property (getter=_formatReader,nonatomic,readonly) OpaqueFigFormatReaderRef formatReader; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSArray * figChapterGroupInfo; 
@property (nonatomic,readonly) NSArray * figChapters; 
@property (nonatomic,readonly) NSURL * resolvedURL; 
@property (nonatomic,readonly) NSURL * originalNetworkContentURL; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (getter=_isStreaming,nonatomic,readonly) BOOL streaming; 
@property (nonatomic,readonly) unsigned long long downloadToken; 
-(float)preferredVolume;
-(id)lyrics;
-(CGSize)naturalSize;
-(BOOL)isPlayable;
-(SCD_Struct_AV6)overallDurationHint;
-(id)availableVideoDynamicRanges;
-(long long)firstFragmentSequenceNumber;
-(long long)trackCount;
-(id)preferredDisplayCriteria;
-(id)propertyListForProxy;
-(id)alternateTrackGroups;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(CGAffineTransform)preferredTransform;
-(NSURL *)resolvedURL;
-(id)_mediaSelectionGroupDictionaries;
-(SCD_Struct_AV6)duration;
-(id)_nameForProxy;
-(id)trackReferences;
-(void)dealloc;
-(NSURL *)URL;
-(unsigned long long)downloadToken;
-(BOOL)canContainFragments;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)_hasQTSaveRestriction;
-(SCD_Struct_AV6)minimumTimeOffsetFromLive;
-(OpaqueFigAssetRef)_figAsset;
-(id)_assetAnalysisMessages;
-(id)SHA1Digest;
-(float)preferredSoundCheckVolumeNormalization;
-(NSArray *)figChapterGroupInfo;
-(id)_instanceIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)commonMetadata;
-(BOOL)supportsAnalysisReporting;
-(int)naturalTimeScale;
-(BOOL)containsFragments;
-(long long)fragmentCount;
-(BOOL)providesPreciseDurationAndTiming;
-(id)creationDate;
-(id)identifyingTagClass;
-(BOOL)isExportable;
-(float)preferredRate;
-(unsigned long long)hash;
-(OpaqueFigFormatReaderRef)_formatReader;
-(BOOL)isReadable;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(BOOL)_isStreaming;
-(CGSize)maximumVideoResolution;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(NSURL *)originalNetworkContentURL;
-(id)availableMetadataFormats;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1 ;
-(BOOL)hasProtectedContent;
-(id)metadataForFormat:(id)arg1 ;
-(NSArray *)figChapters;
-(id)identifyingTag;
@end
