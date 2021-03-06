/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMReminder, NSArray;

@interface REMReminderAttachmentContext : NSObject {

	REMReminder* _reminder;

}

@property (nonatomic,retain) REMReminder * reminder;                    //@synthesize reminder=_reminder - In the implementation block
@property (nonatomic,readonly) NSArray * attachments; 
@property (nonatomic,readonly) NSArray * fileAttachments; 
@property (nonatomic,readonly) NSArray * imageAttachments; 
@property (nonatomic,readonly) NSArray * urlAttachments; 
-(void)setReminder:(REMReminder *)arg1 ;
-(id)initWithReminder:(id)arg1 ;
-(NSArray *)urlAttachments;
-(id)attachmentsOfClass:(Class)arg1 ;
-(NSArray *)fileAttachments;
-(NSArray *)imageAttachments;
-(NSArray *)attachments;
-(REMReminder *)reminder;
@end

