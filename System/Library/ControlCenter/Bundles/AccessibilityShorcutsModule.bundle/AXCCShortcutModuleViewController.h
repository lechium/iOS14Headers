/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityShorcutsModule.bundle/AccessibilityShorcutsModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityShorcutsModule/AccessibilityShorcutsModule-Structs.h>
#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@protocol AXCCShortcutModuleViewControllerDelegate;
@class CCUIContentModuleContext, CCUIToggleModule;

@interface AXCCShortcutModuleViewController : CCUIMenuModuleViewController {

	BOOL _suppressGuidedAccess;
	BOOL _moduleNeedsLiveUpdates;
	CCUIContentModuleContext* _contentModuleContext;
	CCUIToggleModule* _module;
	id<AXCCShortcutModuleViewControllerDelegate> _shortcutDelegate;

}

@property (assign,nonatomic,__weak) CCUIToggleModule * module;                                                  //@synthesize module=_module - In the implementation block
@property (assign,nonatomic,__weak) id<AXCCShortcutModuleViewControllerDelegate> shortcutDelegate;              //@synthesize shortcutDelegate=_shortcutDelegate - In the implementation block
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<AXCCShortcutModuleViewControllerDelegate>)shortcutDelegate;
-(void)setModule:(CCUIToggleModule *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(id)contentModuleContext;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)setContentModuleContext:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CCUIToggleModule *)module;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)setShortcutDelegate:(id<AXCCShortcutModuleViewControllerDelegate>)arg1 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_hasScreenSwitch;
-(void)_toggleAssistiveTouch;
-(void)_toggleVoiceOver;
-(void)_toggleClassicInvertColors;
-(void)_toggleZoom;
-(void)_toggleFullKeyboardAccess;
-(void)_updateShortcutActions;
-(void)_updateShortcutActionsIfVisible;
-(void)_updateShortcutActions:(BOOL)arg1 ;
-(id)visibleShortcuts;
-(id)_menuItemOpenAccessibilityShortcutSettings;
-(id)_menuItemForOption:(id)arg1 ;
-(void)_toggleOption:(long long)arg1 ;
-(BOOL)_shouldShowOption:(int)arg1 ;
-(void)_toggleWhiteOnBlack;
-(void)_toggleReduceWhitePoint;
-(void)_toggleColorFilter;
-(void)_toggleGrayscale;
-(void)_toggleSwitchOver;
-(void)_toggleTouchAccommodations;
-(void)_toggleGuidedAccess;
-(void)_toggleIncreaseContrast;
-(void)_toggleReduceTransparency;
-(void)_toggleCommandAndControl;
-(void)_toggleWhiteOnBlackOffMainThread;
-(id)_titlesForVisibleShortcuts;
-(void)_toggleDisplayAppearance;
-(BOOL)switchControlRendersDeviceUnusable;
-(void)_promptToDisableBrightnessFilters:(/*^block*/id)arg1 data:(id)arg2 ;
@end
