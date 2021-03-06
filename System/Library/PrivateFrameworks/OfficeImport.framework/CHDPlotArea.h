/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHDChartTypesCollection, CHDAxesCollection, OADGraphicProperties;

@interface CHDPlotArea : NSObject {

	CHDChartTypesCollection* mChartTypes;
	CHDAxesCollection* mAxes;
	OADGraphicProperties* mGraphicProperties;
	BOOL mCategoryAxesReversed;
	BOOL mCategoryAxesReversedOverridden;
	BOOL mContainsVolumeStockType;

}
-(id)axes;
-(id)description;
-(id)graphicProperties;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setContainsVolumeStockType:(BOOL)arg1 ;
-(id)chartTypes;
-(BOOL)hasSecondaryAxis;
-(BOOL)hasSecondaryYAxisDeleted;
-(void)markSecondaryAxes;
-(BOOL)containsVolumeStockType;
-(BOOL)isCategoryAxesReversed:(BOOL)arg1 ;
@end

