/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObjectChange.h>

@interface EKExceptionDateChange : EKObjectChange
+(int)entityType;
+(void)fetchExceptionDateChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchExceptionDateChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchExceptionDateChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)initWithChangeProperties:(id)arg1 ;
@end

