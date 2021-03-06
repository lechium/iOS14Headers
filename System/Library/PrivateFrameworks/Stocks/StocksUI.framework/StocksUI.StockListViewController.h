/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TUViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>

@class NSArray;

@interface StocksUI.StockListViewController : TUViewController <UITableViewDelegate, UISearchControllerDelegate> {

	 lazySearchController;
	 renderer;
	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 scrollTracker;
	 mastheadViewProvider;
	 bootstrapper;
	 backgroundView;
	 $__lazy_storage_$_exchangeStatusToolbarItem;
	 commands;
	 toolbarState;
	 keyboardInputMoinitor;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
@property (readonly,nonatomic) NSArray * keyCommands; 
-(long long)preferredStatusBarStyle;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)didPresentSearchController:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSArray *)keyCommands;
-(void)viewWillLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)deleteItem;
-(void)didTapYahooLogo;
-(void)didTapPlusButton;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)contentScrollView;
-(id)initWithCoder:(id)arg1 ;
@end

