/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUInstructionsTableViewController.h>
#import <libobjc.A.dylib/WFHomeComposeViewControllerDelegate.h>

@class HUForwardingTriggerActionBuilderDelegate, HUTriggerActionEditorContentViewController, HFTriggerBuilder, NSString;

@interface HUTriggerActionEditorViewController : HUInstructionsTableViewController <WFHomeComposeViewControllerDelegate> {

	HUForwardingTriggerActionBuilderDelegate* _forwardingTriggerActionBuilderDelegate;

}

@property (nonatomic,readonly) HUTriggerActionEditorContentViewController * actionEditorContentViewController; 
@property (nonatomic,retain) HUForwardingTriggerActionBuilderDelegate * forwardingTriggerActionBuilderDelegate;              //@synthesize forwardingTriggerActionBuilderDelegate=_forwardingTriggerActionBuilderDelegate - In the implementation block
@property (nonatomic,readonly) HFTriggerBuilder * triggerBuilder; 
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)adoptsDefaultGridLayoutMargins;
+(id)createTriggerActionEditorViewControllerForHome:(id)arg1 withTriggerActionSetBuilder:(id)arg2 andTriggerActionBuilderEditorDelegate:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)setForwardingTriggerActionBuilderDelegate:(HUForwardingTriggerActionBuilderDelegate *)arg1 ;
-(HUForwardingTriggerActionBuilderDelegate *)forwardingTriggerActionBuilderDelegate;
-(id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2 ;
-(void)setDelegate:(id<HUTriggerEditorDelegate>)arg1 ;
-(void)homeComposeViewController:(id)arg1 didFinishWithHomeWorkflow:(id)arg2 ;
-(id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3 ;
-(id<HUTriggerEditorDelegate>)delegate;
-(HFTriggerBuilder *)triggerBuilder;
-(void)_showShortcutsEditorIfPossible;
-(void)_showShortcutsEditor;
-(void)_informUserShortcutsAreNotSupportedInThisHome;
-(HUTriggerActionEditorContentViewController *)actionEditorContentViewController;
@end
