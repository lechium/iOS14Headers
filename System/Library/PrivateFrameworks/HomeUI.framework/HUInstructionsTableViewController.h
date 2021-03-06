/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>

@class HUInstructionsItem, UIViewController;

@interface HUInstructionsTableViewController : HUItemTableViewController {

	HUInstructionsItem* _instructionsItem;
	UIViewController* _contentViewController;

}

@property (nonatomic,readonly) HUInstructionsItem * instructionsItem;               //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(void)setContentViewController:(UIViewController *)arg1 ;
-(id)initWithItemManager:(id)arg1 ;
-(UIViewController *)contentViewController;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(HUInstructionsItem *)instructionsItem;
-(void)viewDidLoad;
-(id)initWithItemManager:(id)arg1 instructionsItem:(id)arg2 contentViewController:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)childViewControllersToPreload;
@end

