/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class UIViewController, PSSpecifier, NSString;

@interface STSetUpForFamilyGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {

	UIViewController* _presenter;
	PSSpecifier* _setupFamilySpecifier;

}

@property (assign,nonatomic,__weak) UIViewController * presenter;               //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) PSSpecifier * setupFamilySpecifier;              //@synthesize setupFamilySpecifier=_setupFamilySpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithCoordinator:(id)arg1 presenter:(id)arg2 ;
-(UIViewController *)presenter;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)setPresenter:(UIViewController *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_updateEnabledValue;
-(void)presentAppleAccountSetupFamilyController:(id)arg1 ;
-(PSSpecifier *)setupFamilySpecifier;
@end

