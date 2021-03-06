/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class PSSpecifier, ACAccountStore, NSString;

@interface PUIPrivacyController : PSListController <PSListControllerTestableSpecifiers> {

	PSSpecifier* _locationSpecifier;
	ACAccountStore* _accountStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)booleanCapabilitiesToTest;
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2 ;
-(id)_accountStore;
-(id)locationServicesEnabled:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)specifiers;
-(void)updateLocationServicesVisibility;
-(void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)capabilityEnabled:(id)arg1 ;
@end

