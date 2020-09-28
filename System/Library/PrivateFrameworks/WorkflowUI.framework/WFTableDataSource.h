/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFTreeObserver.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, WFTableDataSourceTreeNode, NSMutableArray, NSArray, NSString;

@interface WFTableDataSource : NSObject <WFTreeObserver, UITableViewDataSource> {

	UITableView* _tableView;
	double _indentationWidth;
	WFTableDataSourceTreeNode* _tree;
	NSMutableArray* _mutableSections;

}

@property (nonatomic,readonly) WFTableDataSourceTreeNode * tree;              //@synthesize tree=_tree - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableSections;              //@synthesize mutableSections=_mutableSections - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * sections; 
@property (assign,nonatomic) double indentationWidth;                         //@synthesize indentationWidth=_indentationWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeSection:(id)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)removeSectionAtIndex:(long long)arg1 ;
-(void)addSection:(id)arg1 ;
-(WFTableDataSourceTreeNode *)tree;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(id)initWithTableView:(id)arg1 ;
-(void)insertSection:(id)arg1 atIndex:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(id)indexPathForItem:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(id)init;
-(void)setIndentationWidth:(double)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(NSArray *)sections;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(double)indentationWidth;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSMutableArray *)mutableSections;
-(void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4 ;
-(id)indexPathFromTableViewIndexPath:(id)arg1 ;
-(id)cellIdentifierForItem:(id)arg1 ;
-(id)treeNodeAtTableViewIndexPath:(id)arg1 ;
-(id)treeNodeAtTreeIndexPath:(id)arg1 ;
@end
