/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate, NSTimeZone, NSString, NSURL;

@interface CUIKUserActivityNewEvent : CUIKUserActivity {

	BOOL _allDay;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	NSString* _title;
	NSURL* _url;
	NSString* _notes;
	NSString* _location;

}

@property (retain) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
@property (assign) BOOL allDay;                        //@synthesize allDay=_allDay - In the implementation block
@property (retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (retain) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (retain) NSString * notes;                   //@synthesize notes=_notes - In the implementation block
@property (retain) NSString * location;                //@synthesize location=_location - In the implementation block
-(NSString *)location;
-(NSString *)title;
-(void)setLocation:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setNotes:(NSString *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDate *)startDate;
-(void)setUrl:(NSURL *)arg1 ;
-(id)eventWithEventStore:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(BOOL)allDay;
-(void)setTitle:(NSString *)arg1 ;
-(id)dictionary;
-(NSString *)notes;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
@end

