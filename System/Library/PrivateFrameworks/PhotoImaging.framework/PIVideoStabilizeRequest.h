/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@interface PIVideoStabilizeRequest : NURenderRequest {

	double _allowedCropFraction;
	/*^block*/id _progressHandler;
	unsigned long long _allowedAnalysisTypes;

}

@property (assign,nonatomic) double allowedCropFraction;                           //@synthesize allowedCropFraction=_allowedCropFraction - In the implementation block
@property (nonatomic,copy) id progressHandler;                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) unsigned long long allowedAnalysisTypes;              //@synthesize allowedAnalysisTypes=_allowedAnalysisTypes - In the implementation block
+(BOOL)canPerformGyroBasedStabilizationForAsset:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)setAllowedCropFraction:(double)arg1 ;
-(id)progressHandler;
-(void)setAllowedAnalysisTypes:(unsigned long long)arg1 ;
-(unsigned long long)allowedAnalysisTypes;
-(double)allowedCropFraction;
-(id)initWithComposition:(id)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
@end
