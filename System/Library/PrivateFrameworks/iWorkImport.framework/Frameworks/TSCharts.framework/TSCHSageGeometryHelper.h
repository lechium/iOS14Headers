/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCHChartInfo, TSDInfoGeometry;

@interface TSCHSageGeometryHelper : NSObject {

	TSCHChartInfo* mChartInfo;
	TSDInfoGeometry* mImportedInfoGeometry;

}
+(id)helperWithImportedChartInfo:(id)arg1 importedInfoGeometry:(id)arg2 ;
+(CGRect)sageChartAreaBoundsForExportWithChartInfo:(id)arg1 geometryRect:(CGRect)arg2 returningContainingViewportSize:(id*)arg3 ;
-(CGSize)naturalSize;
-(void)dealloc;
-(id)initWithImportedChartInfo:(id)arg1 importedInfoGeometry:(id)arg2 ;
@end

