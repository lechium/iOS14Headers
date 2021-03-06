/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>

@interface NewsFeed.DebugFormatInventoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchResultsUpdating> {

	 packages;
	 sections;
	 tableView;
	 groupViewController;
	 versionLabel;
	 coverViewManager;
	 $__lazy_storage_$_uploadBarButtonItem;
	 $__lazy_storage_$_updatedLabel;
	 styler;
	 editor;

}
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)doCompileUpload;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)doDismiss;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

