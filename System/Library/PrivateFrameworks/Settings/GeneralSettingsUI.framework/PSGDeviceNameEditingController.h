/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface PSGDeviceNameEditingController : PSListController {

	id _effectiveSettingsChangedNotificationObserver;
	NSString* _originalDeviceName;

}

@property (nonatomic,retain) id effectiveSettingsChangedNotificationObserver;              //@synthesize effectiveSettingsChangedNotificationObserver=_effectiveSettingsChangedNotificationObserver - In the implementation block
@property (nonatomic,retain) NSString * originalDeviceName;                                //@synthesize originalDeviceName=_originalDeviceName - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)deviceName:(id)arg1 ;
-(void)setEffectiveSettingsChangedNotificationObserver:(id)arg1 ;
-(id)effectiveSettingsChangedNotificationObserver;
-(id)_editedDeviceName;
-(NSString *)originalDeviceName;
-(void)setOriginalDeviceName:(NSString *)arg1 ;
@end
