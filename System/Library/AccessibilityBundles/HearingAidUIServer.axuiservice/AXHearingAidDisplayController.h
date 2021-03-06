/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AXHAShortcutUpdateProtocol.h>

@class HearingAidUIServer, HACCShortcutViewController, NSString;

@interface AXHearingAidDisplayController : UIViewController <AXHAShortcutUpdateProtocol> {

	HearingAidUIServer* _parentController;
	HACCShortcutViewController* _moduleUIController;

}

@property (nonatomic,retain) HACCShortcutViewController * moduleUIController;              //@synthesize moduleUIController=_moduleUIController - In the implementation block
@property (assign,nonatomic) HearingAidUIServer * parentController;                        //@synthesize parentController=_parentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)setParentController:(HearingAidUIServer *)arg1 ;
-(HearingAidUIServer *)parentController;
-(void)dealloc;
-(void)loadView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)shortcutDidChangeSize:(id)arg1 ;
-(void)setModuleUIController:(HACCShortcutViewController *)arg1 ;
-(HACCShortcutViewController *)moduleUIController;
@end

