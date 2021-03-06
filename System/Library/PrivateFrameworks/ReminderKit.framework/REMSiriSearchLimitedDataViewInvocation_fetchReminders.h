/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber;

@interface REMSiriSearchLimitedDataViewInvocation_fetchReminders : REMStoreInvocation <NSSecureCoding> {

	NSString* _title;
	NSDate* _dueAfter;
	NSDate* _dueBefore;
	NSNumber* _completed;
	NSNumber* _hasLocation;
	NSString* _location;

}

@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSDate * dueAfter;                   //@synthesize dueAfter=_dueAfter - In the implementation block
@property (nonatomic,readonly) NSDate * dueBefore;                  //@synthesize dueBefore=_dueBefore - In the implementation block
@property (nonatomic,readonly) NSNumber * completed;                //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) NSNumber * hasLocation;              //@synthesize hasLocation=_hasLocation - In the implementation block
@property (nonatomic,readonly) NSString * location;                 //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)completed;
-(NSString *)location;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)dueAfter;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)dueBefore;
-(unsigned long long)hash;
-(NSNumber *)hasLocation;
-(id)initWithTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 ;
@end

