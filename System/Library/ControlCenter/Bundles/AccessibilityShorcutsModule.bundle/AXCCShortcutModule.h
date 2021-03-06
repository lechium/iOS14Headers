/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityShorcutsModule.bundle/AccessibilityShorcutsModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>
#import <libobjc.A.dylib/AXCCShortcutModuleViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@class AXCCShortcutModuleViewController, CCUIContentModuleContext, NSString;

@interface AXCCShortcutModule : CCUIToggleModule <AXCCShortcutModuleViewControllerDelegate, CCUIContentModule> {

	AXCCShortcutModuleViewController* _contentViewController;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) AXCCShortcutModuleViewController * contentViewController;                                             //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentViewController:(AXCCShortcutModuleViewController *)arg1 ;
-(AXCCShortcutModuleViewController *)contentViewController;
-(CCUIContentModuleContext *)contentModuleContext;
-(id)glyphState;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)expandModule;
-(id)init;
-(BOOL)isSelected;
-(void)optionToggled;
-(void)openAccessibilityShortcutSettings;
@end

