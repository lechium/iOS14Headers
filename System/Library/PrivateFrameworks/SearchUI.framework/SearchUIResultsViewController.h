/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SearchUI/SearchUIKeyboardableTableViewDelegate.h>
#import <SearchUI/SearchUISizingDelegate.h>
#import <SearchUI/SearchUITableViewTesting.h>

@protocol SearchUIResultsViewDelegate;
@class NSArray, SearchUIResultsTableViewController, NSString, SearchUIBackgroundView, UIResponder, UIView, UISearchTextField;

@interface SearchUIResultsViewController : UIViewController <UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewDelegate, SearchUISizingDelegate, SearchUITableViewTesting> {

	BOOL _immediatelyShowCardForSingleResult;
	BOOL _shouldMonitorScrollingPastBottomOfContent;
	/*^block*/id tableViewWillUpdateHandler;
	/*^block*/id tableViewDidUpdateHandler;
	/*^block*/id cellWillDisplayHandler;
	NSArray* _sections;
	unsigned long long _style;
	SearchUIResultsTableViewController* _resultsTableViewController;
	NSString* _previousSearchString;
	id<SearchUIResultsViewDelegate> _delegate;

}

@property (nonatomic,retain) SearchUIBackgroundView * view; 
@property (nonatomic,retain) SearchUIResultsTableViewController * resultsTableViewController;              //@synthesize resultsTableViewController=_resultsTableViewController - In the implementation block
@property (nonatomic,retain) NSString * previousSearchString;                                              //@synthesize previousSearchString=_previousSearchString - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIResultsViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideResultsUnderKeyboard; 
@property (assign,nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent;                               //@synthesize shouldMonitorScrollingPastBottomOfContent=_shouldMonitorScrollingPastBottomOfContent - In the implementation block
@property (nonatomic,readonly) double distanceToTopOfAppIcons; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) UIResponder * responderForKeyboardInput; 
@property (assign,nonatomic) BOOL shortenTopFloatingHeader; 
@property (nonatomic,retain) UIView * footerView; 
@property (assign,nonatomic) BOOL showsVerticalScrollIndicator; 
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections; 
@property (assign,nonatomic) BOOL shouldUseStandardSectionInsets; 
@property (assign,nonatomic) BOOL immediatelyShowCardForSingleResult;                                      //@synthesize immediatelyShowCardForSingleResult=_immediatelyShowCardForSingleResult - In the implementation block
@property (nonatomic,retain) UISearchTextField * searchField; 
@property (nonatomic,retain) NSString * queryString; 
@property (nonatomic,retain) NSArray * sections;                                                           //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackListener; 
@property (assign,nonatomic) unsigned long long style;                                                     //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id cellWillDisplayHandler; 
@property (nonatomic,copy) id tableViewWillUpdateHandler; 
@property (nonatomic,copy) id tableViewDidUpdateHandler; 
-(void)purgeMemory;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setQueryString:(NSString *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)shortenTopFloatingHeader;
-(void)didTap;
-(double)distanceToTopOfAppIcons;
-(NSString *)previousSearchString;
-(void)setPreviousSearchString:(NSString *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<SFFeedbackListener>)feedbackListener;
-(CGSize)contentSize;
-(void)setSections:(NSArray *)arg1 ;
-(void)replaceResult:(id)arg1 withResult:(id)arg2 ;
-(void)highlightResult:(id)arg1 ;
-(unsigned long long)style;
-(id)contentScrollView;
-(UIView *)footerView;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)setResultsTableViewController:(SearchUIResultsTableViewController *)arg1 ;
-(SearchUIResultsTableViewController *)resultsTableViewController;
-(void)updateWithResultSections:(id)arg1 resetScrollPoint:(BOOL)arg2 ;
-(void)updateWithResultSections:(id)arg1 ;
-(BOOL)immediatelyShowCardForSingleResult;
-(BOOL)shouldMonitorScrollingPastBottomOfContent;
-(void)didBeginScrolling;
-(void)didFocusOnCell:(id)arg1 ;
-(void)setShouldMonitorScrollingPastBottomOfContent:(BOOL)arg1 ;
-(void)setShouldHideResultsUnderKeyboard:(BOOL)arg1 ;
-(BOOL)shouldHideResultsUnderKeyboard;
-(double)contentHeightForWidth:(double)arg1 maxHeight:(double)arg2 ;
-(void)performReturnKeyPressAction;
-(void)setImmediatelyShowCardForSingleResult:(BOOL)arg1 ;
-(void)didScrollPastBottomOfContent;
-(void)setDelegate:(id<SearchUIResultsViewDelegate>)arg1 ;
-(void)setShouldUseStandardSectionInsets:(BOOL)arg1 ;
-(UIResponder *)responderForKeyboardInput;
-(BOOL)shouldUseStandardSectionInsets;
-(void)setSearchField:(UISearchTextField *)arg1 ;
-(NSArray *)sections;
-(id<SearchUIResultsViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UISearchTextField *)searchField;
-(BOOL)showsVerticalScrollIndicator;
-(NSString *)queryString;
-(void)toggleShowMoreForSection:(unsigned long long)arg1 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(void)setShortenTopFloatingHeader:(BOOL)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)contentSizeDidChange:(CGSize)arg1 animated:(BOOL)arg2 ;
-(id)tableViewWillUpdateHandler;
-(id)tableViewDidUpdateHandler;
-(id)cellWillDisplayHandler;
-(void)performScrollTestWithHandlerForFirstScrollCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)performScrollTestWithCompletion:(/*^block*/id)arg1 ;
-(id)currentTableModel;
-(CGRect)scrollToIndexPath:(id)arg1 ;
-(void)tapAtIndexPath:(id)arg1 ;
-(void)setCellWillDisplayHandler:(id)arg1 ;
-(void)setTableViewWillUpdateHandler:(id)arg1 ;
-(void)setTableViewDidUpdateHandler:(id)arg1 ;
-(void)restoreResultsIfNeeded;
@end
