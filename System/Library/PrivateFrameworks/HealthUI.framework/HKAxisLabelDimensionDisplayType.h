/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKAxisLabelDimensionScalar.h>

@class HKDisplayTypeValueFormatter, HKDisplayType, HKUnitPreferenceController;

@interface HKAxisLabelDimensionDisplayType : HKAxisLabelDimensionScalar {

	HKDisplayTypeValueFormatter* _valueFormatter;
	HKDisplayType* _displayType;
	HKUnitPreferenceController* _unitController;

}

@property (nonatomic,retain) HKDisplayTypeValueFormatter * valueFormatter;              //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                               //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;               //@synthesize unitController=_unitController - In the implementation block
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(HKUnitPreferenceController *)unitController;
-(HKDisplayType *)displayType;
-(HKDisplayTypeValueFormatter *)valueFormatter;
-(void)setValueFormatter:(HKDisplayTypeValueFormatter *)arg1 ;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(id)stringForLocation:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 unitPreferencesController:(id)arg2 ;
@end

