/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HDSPSleepEventProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
@property (assign,nonatomic,__weak) id<HDSPSleepEventDelegate> sleepEventDelegate; 
@required
-(void)setSleepEventDelegate:(id)arg1;
-(NSString *)providerIdentifier;
-(id)upcomingEventsDueAfterDate:(id)arg1;
-(id<HDSPSleepEventDelegate>)sleepEventDelegate;

@end

