/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HUQuickControlViewController, NSSet;

@interface HUQuickControlViewControllerGroup : NSObject {

	HUQuickControlViewController* _primaryViewController;
	NSSet* _alternateViewControllers;

}

@property (nonatomic,readonly) HUQuickControlViewController * primaryViewController;              //@synthesize primaryViewController=_primaryViewController - In the implementation block
@property (nonatomic,readonly) NSSet * alternateViewControllers;                                  //@synthesize alternateViewControllers=_alternateViewControllers - In the implementation block
-(HUQuickControlViewController *)primaryViewController;
-(NSSet *)alternateViewControllers;
-(id)initWithPrimaryViewController:(id)arg1 alternateViewControllers:(id)arg2 ;
@end
