/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

@class NSArray;

@interface AXUISettingsTouchAccommodationsAllowSwipeGesturesController : AXUISettingsBaseListController {

	BOOL _touchAccommodationsAllowsSwipeGesturesToBypass;
	double _touchAccommodationsSwipeGestureMinimumDistance;
	NSArray* _minimumDistanceSpecifiers;

}

@property (nonatomic,retain) NSArray * minimumDistanceSpecifiers;                                //@synthesize minimumDistanceSpecifiers=_minimumDistanceSpecifiers - In the implementation block
@property (assign,nonatomic) BOOL touchAccommodationsAllowsSwipeGesturesToBypass;                //@synthesize touchAccommodationsAllowsSwipeGesturesToBypass=_touchAccommodationsAllowsSwipeGesturesToBypass - In the implementation block
@property (assign,nonatomic) double touchAccommodationsSwipeGestureMinimumDistance;              //@synthesize touchAccommodationsSwipeGestureMinimumDistance=_touchAccommodationsSwipeGestureMinimumDistance - In the implementation block
-(double)touchAccommodationsSwipeGestureMinimumDistance;
-(void)setTouchAccommodationsSwipeGestureMinimumDistance:(double)arg1 ;
-(BOOL)touchAccommodationsAllowsSwipeGesturesToBypass;
-(void)setTouchAccommodationsAllowsSwipeGesturesToBypass:(BOOL)arg1 ;
-(id)_minimumDistanceSpecifiers;
-(void)_setAllowsSwipesToBypass:(id)arg1 specifier:(id)arg2 ;
-(id)_specifierWithName:(id)arg1 minimumDistance:(double)arg2 ;
-(void)setMinimumDistanceSpecifiers:(NSArray *)arg1 ;
-(BOOL)_shouldShowSwipeMinimumDistanceSpecifier;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)_allowsSwipesToBypass:(id)arg1 ;
-(NSArray *)minimumDistanceSpecifiers;
-(id)specifiers;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
