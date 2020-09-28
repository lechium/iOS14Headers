/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartBasicElementProperties.h>

@interface TSCH3DChartPieElementProperties : TSCH3DChartBasicElementProperties {

	vector<float, std::__1::allocator<float> >* mPercentOfTotal;
	vector<float, std::__1::allocator<float> >* mRotation;
	vector<float, std::__1::allocator<float> >* mExplode;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateLabels;
-(void)reset;
-(void)updateValues;
-(BOOL)applyElementTransform:(ObjectTransforms*)arg1 series:(id)arg2 index:(tvec2<int>)arg3 propertyAccessor:(id)arg4 ;
-(float)elementTransformDepthFromPropertyAccessor:(id)arg1 ;
-(id)boundsGeometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(long long)flatIndex:(const tvec2<int>*)arg1 ;
-(float)explosionAtElementIndex:(const tvec2<int>*)arg1 ;
-(float)rotationAtElementIndex:(const tvec2<int>*)arg1 ;
-(float)explosionAtElementIndex:(const tvec2<int>*)arg1 propertyAccessor:(id)arg2 ;
-(float)percentOfTotalAtElementIndex:(const tvec2<int>*)arg1 ;
-(void)setPercentOfTotal:(float)arg1 atElementIndex:(const tvec2<int>*)arg2 ;
-(void)setRotation:(float)arg1 atElementIndex:(const tvec2<int>*)arg2 ;
-(void)setExplosion:(float)arg1 atElementIndex:(const tvec2<int>*)arg2 ;
-(BOOL)anyHasExplosion;
@end
