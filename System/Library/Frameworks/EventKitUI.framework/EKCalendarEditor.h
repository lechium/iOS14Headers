/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKCalendarEditItemDelegate.h>
#import <libobjc.A.dylib/EKUIManagedViewController.h>

@protocol EKCalendarEditorDelegate, EKStyleProvider;
@class UITableView, NSArray, EKCalendarShareesEditItem, EKCalendarColorEditItem, EKSource, EKEventStore, EKCalendar, NSString;

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate, EKUIManagedViewController> {

	UITableView* _tableView;
	NSArray* _editItems;
	EKCalendarShareesEditItem* _shareesEditItem;
	EKCalendarColorEditItem* _colorEditItem;
	unsigned long long _entityType;
	EKSource* _limitedToSource;
	CGSize _preferredContentSize;
	BOOL _isNewCalendar;
	EKEventStore* _eventStore;
	EKCalendar* _calendar;
	id<EKCalendarEditorDelegate> _delegate;
	id<EKStyleProvider> _styleProvider;

}

@property (nonatomic,retain) EKEventStore * eventStore;                                 //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                     //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic,__weak) id<EKCalendarEditorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isNewCalendar;                                        //@synthesize isNewCalendar=_isNewCalendar - In the implementation block
@property (assign,nonatomic,__weak) id<EKStyleProvider> styleProvider;                  //@synthesize styleProvider=_styleProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_presentValidationAlert:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)canManagePresentationStyle;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(EKEventStore *)eventStore;
-(void)_deleteClicked:(id)arg1 ;
-(BOOL)wantsManagement;
-(void)_localeChanged;
-(void)done:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView;
-(EKCalendar *)calendar;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)isNewCalendar;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)calendarItemStartedEditing:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3 limitedToSource:(id)arg4 ;
-(CGSize)preferredContentSize;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_eventStoreChanged:(id)arg1 ;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)_editItems;
-(void)setupForCalendar;
-(BOOL)_shouldShowDeleteButton;
-(void)_deleteCalendar;
-(void)setDelegate:(id<EKCalendarEditorDelegate>)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(int)sectionForCalendarEditItem:(id)arg1 ;
-(void)setIsNewCalendar:(BOOL)arg1 ;
-(id)owningNavigationController;
-(id<EKCalendarEditorDelegate>)delegate;
-(id<EKStyleProvider>)styleProvider;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)cancel:(id)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
-(BOOL)isModalInPresentation;
-(void)saveChanges;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
