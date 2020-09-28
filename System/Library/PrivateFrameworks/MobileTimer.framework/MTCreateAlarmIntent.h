/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>

@class INObject, NSString, NSDateComponents, NSArray;

@interface MTCreateAlarmIntent : INIntent

@property (nonatomic,copy) INObject * time; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSDateComponents * dateComponents; 
@property (assign,nonatomic) long long requiresAppLaunch; 
@property (nonatomic,copy) NSArray * repeatSchedule; 
@end
