/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DSceneRenderPipeline.h>
#import <TSCharts/TSCH3DSceneObjectDelegator.h>
#import <TSCharts/TSCHUnretainedParent.h>

@class TSCH3DChartRep, TSCH3DGetSelectionKnobsPositionsPipelineDelegate, NSArray, NSMutableArray;

@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator, TSCHUnretainedParent> {

	TSCH3DChartRep* mRep;
	TSCH3DGetSelectionKnobsPositionsPipelineDelegate* mSceneObjectDelegate;
	NSArray* mSelection;
	NSMutableArray* mProjectedPoints;
	float mNormalizedKnobRadius;

}

@property (nonatomic,readonly) NSArray * projectedPoints; 
+(id)pipelineWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4 ;
-(BOOL)render;
-(void)dealloc;
-(NSArray *)projectedPoints;
-(id)makeDelegateWithScene:(id)arg1 ;
-(id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2 ;
-(void)clearParent;
-(void)getSelectionKnobsPositions:(id)arg1 ;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
-(id)initWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4 ;
@end

