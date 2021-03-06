/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>

@class EKCalendar, EKCalendarEditor;

@interface EKSubscribedCalendarEditItemViewController : EKEditItemViewController {

	EKCalendar* _calendar;
	EKCalendarEditor* _calendarEditor;

}
-(void)save;
-(CGSize)preferredContentSize;
-(id)initWithFrame:(CGRect)arg1 calendar:(id)arg2 ;
-(void)loadView;
@end

