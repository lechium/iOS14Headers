/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PFVideoAVObjectBuilder, NSDictionary, NSString;


@protocol PUEditableAsset <PUDisplayAsset>
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (getter=isHighFramerateVideo,nonatomic,readonly) BOOL highFramerateVideo; 
@property (getter=isAdjusted,nonatomic,readonly) BOOL adjusted; 
@property (getter=isContentAdjustmentAllowed,nonatomic,readonly) BOOL contentAdjustmentAllowed; 
@property (getter=isLivePhotoVisibilityAdjustmentAllowed,nonatomic,readonly) BOOL livePhotoVisibilityAdjustmentAllowed; 
@property (getter=isInPlaceVideoTrimAllowed,nonatomic,readonly) BOOL inPlaceVideoTrimAllowed; 
@property (nonatomic,readonly) unsigned long long originalResourceChoice; 
@property (getter=isTrimmableType,nonatomic,readonly) BOOL trimmableType; 
@property (nonatomic,readonly) unsigned long long livePhotoVisibilityState; 
@property (nonatomic,readonly) PFVideoAVObjectBuilder * videoObjectBuilder; 
@property (nonatomic,readonly) unsigned long long reframeVariation; 
@property (nonatomic,readonly) NSDictionary * imageProperties; 
@property (nonatomic,readonly) int originalEXIFOrientation; 
@property (getter=isResourceDownloadPossible,nonatomic,readonly) BOOL resourceDownloadPossible; 
@property (getter=isCloudPhotoLibraryEnabled,nonatomic,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (nonatomic,copy,readonly) NSString * pathForOriginalImageFile; 
@property (nonatomic,copy,readonly) NSString * pathForOriginalVideoFile; 
@property (nonatomic,copy,readonly) NSString * pathForTrimmedVideoFile; 
@required
-(BOOL)isAdjusted;
-(NSString *)pathForTrimmedVideoFile;
-(BOOL)isCloudPhotoLibraryEnabled;
-(NSDictionary *)imageProperties;
-(BOOL)isOriginalRaw;
-(void)cancelContentEditingInputRequest:(unsigned long long)arg1;
-(unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)isHighFramerateVideo;
-(BOOL)isContentAdjustmentAllowed;
-(BOOL)isLivePhotoVisibilityAdjustmentAllowed;
-(BOOL)isInPlaceVideoTrimAllowed;
-(BOOL)isTrimmableType;
-(unsigned long long)livePhotoVisibilityState;
-(PFVideoAVObjectBuilder *)videoObjectBuilder;
-(int)originalEXIFOrientation;
-(BOOL)isResourceDownloadPossible;
-(NSString *)pathForOriginalImageFile;
-(NSString *)pathForOriginalVideoFile;
-(unsigned long long)originalResourceChoice;
-(unsigned long long)reframeVariation;
-(unsigned long long)mediaSubtypes;

@end
