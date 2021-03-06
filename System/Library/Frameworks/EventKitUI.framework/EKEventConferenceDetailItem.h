/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, NSString;

@interface EKEventConferenceDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	NSString* _appName;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)_tap;
-(void)reset;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
@end

