/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKFetchRequestToken.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKReminderStore;

@interface EKReminderFetchRequestToken : NSObject <EKFetchRequestToken, NSCopying> {

	EKReminderStore* _reminderStore;

}

@property (nonatomic,__weak,readonly) EKReminderStore * reminderStore;              //@synthesize reminderStore=_reminderStore - In the implementation block
-(void)cancel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithReminderStore:(id)arg1 ;
-(EKReminderStore *)reminderStore;
@end

