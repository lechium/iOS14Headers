/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSArray, NSString;

@interface VNDetectRectanglesRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign,nonatomic) unsigned long long requiredVersion; 
@property (assign,nonatomic) float minimumAspectRatio; 
@property (assign,nonatomic) float maximumAspectRatio; 
@property (assign,nonatomic) float quadratureTolerance; 
@property (assign,nonatomic) float minimumSize; 
@property (assign,nonatomic) float minimumConfidence; 
@property (assign,nonatomic) unsigned long long maximumObservations; 
@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
-(float)minimumSize;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)setRequiredVersion:(unsigned long long)arg1 ;
-(void)setSortedResults:(id)arg1 ;
-(long long)dependencyProcessingOrdinality;
-(void)setMinimumAspectRatio:(float)arg1 ;
-(void)setMaximumAspectRatio:(float)arg1 ;
-(void)setQuadratureTolerance:(float)arg1 ;
-(float)minimumAspectRatio;
-(float)maximumAspectRatio;
-(float)quadratureTolerance;
-(void)setMaximumObservations:(unsigned long long)arg1 ;
-(void)setMinimumSize:(float)arg1 ;
-(float)minimumConfidence;
-(unsigned long long)maximumObservations;
-(unsigned long long)requiredVersion;
-(void)setMinimumConfidence:(float)arg1 ;
-(NSArray *)supportedImageSizeSet;
-(/*^block*/id)resultsSortingComparator;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
@end

