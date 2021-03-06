/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/TSSearchResultsProviderType.h>
#import <libobjc.A.dylib/TSSearchResultsPanable.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@interface NewsUI2.SearchViewController : UIViewController <UISearchBarDelegate, UISearchControllerDelegate, UICollectionViewDelegate, TSSearchResultsProviderType, TSSearchResultsPanable, TSTabBarSplitViewAutoObserver> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 toolbarManager;
	 parsecQueryID;
	 searchBar;
	 searchAction;
	 sharingActivityProviderFactory;

}

@property (readonly,nonatomic) BOOL isSearchResultsPane; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)cancelSearch;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isSearchResultsPane;
-(void)tabBarSplitViewWillObsureView;
-(void)tabBarSplitViewDidUnobsureView;
-(void)performSearchForText:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

