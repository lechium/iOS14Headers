/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKOverlayContext.h>

@protocol _HKContextChangeDelegate;
@class HKInteractiveChartOverlayViewController, HKDisplayType, HKDisplayTypeContextItem, NSString;

@interface _HKSleepDurationAmountContext : NSObject <HKOverlayContext> {

	HKInteractiveChartOverlayViewController* _overlayChartController;
	HKDisplayType* _baseDisplayType;
	HKDisplayTypeContextItem* _lastUpdatedItem;
	id<_HKContextChangeDelegate> _contextChangeDelegate;

}

@property (nonatomic,retain) HKDisplayTypeContextItem * lastUpdatedItem;                                      //@synthesize lastUpdatedItem=_lastUpdatedItem - In the implementation block
@property (nonatomic,__weak,readonly) id<_HKContextChangeDelegate> contextChangeDelegate;                     //@synthesize contextChangeDelegate=_contextChangeDelegate - In the implementation block
@property (nonatomic,readonly) HKInteractiveChartOverlayViewController * overlayChartController;              //@synthesize overlayChartController=_overlayChartController - In the implementation block
@property (nonatomic,readonly) HKDisplayType * baseDisplayType;                                               //@synthesize baseDisplayType=_baseDisplayType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextItemForLastUpdate;
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)sampleTypeForDateRangeUpdates;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1 ;
-(id)baseDisplayTypeForOverlay:(long long)arg1 ;
-(BOOL)unselectedContextShouldUseContextBaseType;
-(HKInteractiveChartOverlayViewController *)overlayChartController;
-(id)initWithBaseDisplayType:(id)arg1 overlayChartController:(id)arg2 contextChangeDelegate:(id)arg3 ;
-(HKDisplayTypeContextItem *)lastUpdatedItem;
-(HKDisplayType *)baseDisplayType;
-(void)setLastUpdatedItem:(HKDisplayTypeContextItem *)arg1 ;
-(id<_HKContextChangeDelegate>)contextChangeDelegate;
-(id)_contextItemWithAmountString:(id)arg1 ;
-(id)_daysWithSleepDataFromChartPoints:(id)arg1 ;
-(id)_amountStringFromCounts:(id)arg1 ;
@end

