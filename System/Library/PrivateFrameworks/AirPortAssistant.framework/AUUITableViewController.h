/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>

@class TableViewManager, UITableView;

@interface AUUITableViewController : UITableViewController <TableViewManagerDelegate> {

	TableViewManager* _tableManager;

}

@property (nonatomic,retain) UITableView * tableView; 
@property (nonatomic,readonly) TableViewManager * tableManager;                  //@synthesize tableManager=_tableManager - In the implementation block
@property (assign,nonatomic) id<TableViewManagerDelegate> delegate; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)setDelegate:(id<TableViewManagerDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<TableViewManagerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(TableViewManager *)tableManager;
-(void)initAUUITableViewControllerCommon;
@end
