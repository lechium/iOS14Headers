/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SACalendar : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendar;
+(id)calendarWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)timeZoneId;
-(id)encodedClassName;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(id)groupIdentifier;
-(void)setTimeZoneId:(NSString *)arg1 ;
@end
