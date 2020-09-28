/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADAggregationParameters, ADJasperPointCloudFilterParamaters, ADCameraCalibration;

@interface ADPointCloudAggregator : NSObject {

	SCD_Struct_AD19* _history;
	unsigned long long _historyIndex;
	ADAggregationParameters* _aggregationParameters;
	ADJasperPointCloudFilterParamaters* _pointCloudFilterParameters;
	ADCameraCalibration* _colorCameraCalibration;
	SCD_Struct_AD1 _jasperToCameraTransform;

}

@property (nonatomic,retain,readonly) ADAggregationParameters * aggregationParameters;                     //@synthesize aggregationParameters=_aggregationParameters - In the implementation block
@property (nonatomic,retain) ADJasperPointCloudFilterParamaters * pointCloudFilterParameters;              //@synthesize pointCloudFilterParameters=_pointCloudFilterParameters - In the implementation block
@property (assign) SCD_Struct_AD1 jasperToCameraTransform;                                                 //@synthesize jasperToCameraTransform=_jasperToCameraTransform - In the implementation block
@property (retain) ADCameraCalibration * colorCameraCalibration;                                           //@synthesize colorCameraCalibration=_colorCameraCalibration - In the implementation block
+(SCD_Struct_AD1)transformMetersToMillimiters:(SCD_Struct_AD1)arg1 ;
-(long long)clear;
-(void)dealloc;
-(id)initWithAggregationParameters:(id)arg1 jasperToColorTransform:(SCD_Struct_AD1)arg2 colorCamera:(id)arg3 ;
-(long long)pushPointCloud:(id)arg1 timestamp:(double)arg2 worldToCameraTransform:(SCD_Struct_AD1)arg3 ;
-(ADAggregationParameters *)aggregationParameters;
-(ADCameraCalibration *)colorCameraCalibration;
-(void)setColorCameraCalibration:(ADCameraCalibration *)arg1 ;
-(void)setJasperToCameraTransform:(SCD_Struct_AD1)arg1 ;
-(id)aggregateForTime:(double)arg1 worldToCameraTransform:(SCD_Struct_AD1)arg2 ;
-(SCD_Struct_AD1)jasperToCameraTransform;
-(long long)aggregateAndProjectForTime:(double)arg1 worldToCameraTransform:(SCD_Struct_AD1)arg2 cropTo:(CGRect)arg3 rotateBy:(long long)arg4 projectedPointsBuffer:(CVBufferRef)arg5 ;
-(long long)aggregateAndProjectForTime:(double)arg1 worldToCameraTransform:(SCD_Struct_AD1)arg2 filterParams:(id)arg3 cropTo:(CGRect)arg4 rotateBy:(long long)arg5 projectedPointsBuffer:(CVBufferRef)arg6 ;
-(ADJasperPointCloudFilterParamaters *)pointCloudFilterParameters;
-(void)setPointCloudFilterParameters:(ADJasperPointCloudFilterParamaters *)arg1 ;
@end
