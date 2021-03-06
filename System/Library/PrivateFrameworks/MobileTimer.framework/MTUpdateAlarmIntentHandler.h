/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTAlarmIntentHandler.h>
#import <libobjc.A.dylib/MTUpdateAlarmIntentHandling.h>

@class NSString;

@interface MTUpdateAlarmIntentHandler : MTAlarmIntentHandler <MTUpdateAlarmIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_alarmUserActivityWithIntent:(id)arg1 ;
-(void)confirmMTUpdateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleMTUpdateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleUpdateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmUpdateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

