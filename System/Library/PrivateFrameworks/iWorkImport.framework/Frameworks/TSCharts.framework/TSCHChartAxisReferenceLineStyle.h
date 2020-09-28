/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCHChartAxisID, NSArray;

@interface TSCHChartAxisReferenceLineStyle : NSObject {

	TSCHChartAxisID* mAxisIdentifier;
	NSArray* mReferenceLineStyles;

}

@property (nonatomic,copy) TSCHChartAxisID * axisIdentifier; 
@property (nonatomic,copy) NSArray * referenceLineStyles; 
-(void)didInitFromSOS;
-(TSCHChartAxisID *)axisIdentifier;
-(void)setAxisIdentifier:(TSCHChartAxisID *)arg1 ;
-(NSArray *)referenceLineStyles;
-(void)setReferenceLineStyles:(NSArray *)arg1 ;
@end
