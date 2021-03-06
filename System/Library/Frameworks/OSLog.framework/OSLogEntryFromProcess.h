/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol OSLogEntryFromProcess
@property (nonatomic,readonly) unsigned long long activityIdentifier; 
@property (nonatomic,readonly) NSString * process; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,readonly) NSString * sender; 
@property (nonatomic,readonly) unsigned long long threadIdentifier; 
@required
-(unsigned long long)threadIdentifier;
-(NSString *)sender;
-(NSString *)process;
-(unsigned long long)activityIdentifier;
-(int)processIdentifier;

@end

