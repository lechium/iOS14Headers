/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSBatteryChargingView.h>

@class UIView, _UIBackdropView, CSBatteryFillView, SBUILegibilityLabel, UIImageView;

@interface _CSDoubleBatteryChargingView : CSBatteryChargingView {

	UIView* _batteryContainerView;
	UIView* _internalBatteryContainerView;
	UIView* _externalBatteryContainerView;
	_UIBackdropView* _internalBatteryBlurView;
	_UIBackdropView* _externalBatteryBlurView;
	CSBatteryFillView* _internalBatteryFillView;
	CSBatteryFillView* _externalBatteryFillView;
	SBUILegibilityLabel* _internalChargePercentLabel;
	SBUILegibilityLabel* _externalChargePercentLabel;
	SBUILegibilityLabel* _internalChargingNameLabel;
	SBUILegibilityLabel* _externalChargingNameLabel;
	UIImageView* _internalChargingIndicator;
	UIImageView* _externalChargingIndicator;

}
-(void)setLegibilitySettings:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)batteryVisible;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(double)desiredVisibilityDuration;
-(void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(id)_chargePercentFont;
-(long long)batteryCount;
-(void)performAnimation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)_spaceBetweenBatteryImages;
-(double)_batteryTopPadding;
-(double)_chargingBoltTopOffset;
-(double)_deviceNameBaselineOffset;
-(double)_deviceChargeBaselineOffset;
@end

