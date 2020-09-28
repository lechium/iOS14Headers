/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol CKConversationListControllerProtocol;
@class UIViewController, UITableViewDiffableDataSource, UITableView, NSMutableArray, UITextView, NSString;

@interface CKInboxViewController : UIViewController <UITextViewDelegate, UITableViewDelegate> {

	BOOL _isVisible;
	UIViewController*<CKConversationListControllerProtocol> _conversationListController;
	UITableViewDiffableDataSource* _tableViewDataSource;
	UITableView* _tableView;
	NSMutableArray* _tableCellDataArray;
	NSMutableArray* _categoriesCellDataArray;
	NSMutableArray* _junkCellDataArray;
	NSMutableArray* _footerCellDataArray;
	UITextView* _stickyFooterTextView;
	long long _categoriesIndexSection;
	long long _junkIndexSection;
	long long _footerIndexSection;

}

@property (nonatomic,retain) UIViewController*<CKConversationListControllerProtocol> conversationListController;              //@synthesize conversationListController=_conversationListController - In the implementation block
@property (nonatomic,retain) UITableViewDiffableDataSource * tableViewDataSource;                                             //@synthesize tableViewDataSource=_tableViewDataSource - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * tableCellDataArray;                                                             //@synthesize tableCellDataArray=_tableCellDataArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * categoriesCellDataArray;                                                        //@synthesize categoriesCellDataArray=_categoriesCellDataArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * junkCellDataArray;                                                              //@synthesize junkCellDataArray=_junkCellDataArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * footerCellDataArray;                                                            //@synthesize footerCellDataArray=_footerCellDataArray - In the implementation block
@property (nonatomic,retain) UITextView * stickyFooterTextView;                                                               //@synthesize stickyFooterTextView=_stickyFooterTextView - In the implementation block
@property (assign,nonatomic) long long categoriesIndexSection;                                                                //@synthesize categoriesIndexSection=_categoriesIndexSection - In the implementation block
@property (assign,nonatomic) long long junkIndexSection;                                                                      //@synthesize junkIndexSection=_junkIndexSection - In the implementation block
@property (assign,nonatomic) long long footerIndexSection;                                                                    //@synthesize footerIndexSection=_footerIndexSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)_getSpamExtensionName;
-(void)setTableViewDataSource:(UITableViewDiffableDataSource *)arg1 ;
-(id)_conversationList;
-(UITableViewDiffableDataSource *)tableViewDataSource;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIViewController*<CKConversationListControllerProtocol>)conversationListController;
-(void)viewDidLoad;
-(void)_contentSizeCategoryChanged;
-(void)_chatUnreadCountDidChange:(id)arg1 ;
-(void)updateBackButton;
-(void)setConversationListController:(UIViewController*<CKConversationListControllerProtocol>)arg1 ;
-(long long)footerIndexSection;
-(id)_unreadCountStringForIndexPath:(id)arg1 ;
-(id)footerTextView;
-(void)_spamFilteringStateChanged;
-(void)reloadTableViewData;
-(BOOL)shouldHideInboxFooterTextView;
-(UITextView *)stickyFooterTextView;
-(void)reloadTableViewDataWithConversationListUpdate:(BOOL)arg1 ;
-(unsigned long long)_filterModeForIndexPath:(id)arg1 ;
-(long long)junkIndexSection;
-(NSMutableArray *)tableCellDataArray;
-(long long)categoriesIndexSection;
-(void)setCategoriesIndexSection:(long long)arg1 ;
-(void)setJunkIndexSection:(long long)arg1 ;
-(BOOL)_spamFilteringEnabled;
-(NSMutableArray *)categoriesCellDataArray;
-(NSMutableArray *)junkCellDataArray;
-(void)setFooterIndexSection:(long long)arg1 ;
-(NSMutableArray *)footerCellDataArray;
-(void)setTableCellDataArray:(NSMutableArray *)arg1 ;
-(id)initWithConversationListController:(id)arg1 ;
-(void)setCategoriesCellDataArray:(NSMutableArray *)arg1 ;
-(void)setJunkCellDataArray:(NSMutableArray *)arg1 ;
-(void)setFooterCellDataArray:(NSMutableArray *)arg1 ;
-(void)setStickyFooterTextView:(UITextView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
@end
