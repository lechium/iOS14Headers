/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>
#import <libobjc.A.dylib/EKEventDetailAttendeeCellDelegate.h>

@class NSMutableDictionary, UITableViewCell, EKEventDetailAttendeesCell, NSArray, NSString;

@interface EKEventAttendeesDetailItem : EKEventDetailItem <EKEventDetailAttendeeCellDelegate> {

	NSMutableDictionary* _attendeesCells;
	UITableViewCell* _titleCell;
	EKEventDetailAttendeesCell* _cell;
	long long _status;
	NSArray* _attendees;

}

@property (assign,nonatomic) long long status;                      //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                   //@synthesize attendees=_attendees - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)eventDetailAttendeeCellWantsRefreshForHeightChange;
-(NSArray *)attendees;
-(void)reset;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(long long)status;
-(unsigned long long)numberOfSubitems;
-(void)setAttendees:(NSArray *)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
@end
