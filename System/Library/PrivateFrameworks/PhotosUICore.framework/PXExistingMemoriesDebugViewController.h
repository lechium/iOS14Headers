/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSDictionary, NSString;

@interface PXExistingMemoriesDebugViewController : UITableViewController {

	NSArray* _sectionNames;
	NSDictionary* _itemsBySectionName;
	NSString* _name;
	NSDictionary* _options;

}
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)initWithName:(id)arg1 options:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_photosDetailsContextForMemory:(id)arg1 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)_fetchExistingMemories;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg1 withItem:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
