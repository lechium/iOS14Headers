/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACUISettingsPluginParentProtocol;
@class PSViewController, NSMutableDictionary;

@interface ACUISettingsPluginManager : NSObject {

	PSViewController*<ACUISettingsPluginParentProtocol> _parentViewController;
	NSMutableDictionary* _pluginCache;

}
-(id)initWithParentViewController:(id)arg1 ;
-(id)_settingsPluginFromBundleWithName:(id)arg1 ;
-(id)_loadSettingsPluginFromBundleWithName:(id)arg1 ;
-(void)parentViewControllerWillDisappear;
-(id)mailSettingsPlugin;
-(id)calendarSettingsPlugin;
-(id)contactsSettingsPlugin;
@end

