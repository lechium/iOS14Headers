/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKOverlayRoomViewController.h>

@class NSNumber;

@interface HKOverlayRoomHeartViewController : HKOverlayRoomViewController {

	NSNumber* _preferredOverlayIndex;
	long long _preferredOverlay;

}

@property (nonatomic,readonly) long long preferredOverlay;              //@synthesize preferredOverlay=_preferredOverlay - In the implementation block
-(id)controllerTitleWithApplicationItems:(id)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)initialSelectedContextForMode:(long long)arg1 ;
-(id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3 ;
-(void)viewDidLoad;
-(id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 preferredOverlay:(long long)arg4 ;
-(long long)preferredOverlay;
-(long long)_initialPillForPreference:(long long)arg1 ;
@end

