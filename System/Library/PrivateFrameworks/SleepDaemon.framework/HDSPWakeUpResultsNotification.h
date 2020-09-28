/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface HDSPWakeUpResultsNotification : NSObject {

	NSDictionary* _userInfo;
	long long _endMorningIndex;
	NSString* _category;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * category;                  //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) long long endMorningIndex;                 //@synthesize endMorningIndex=_endMorningIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(NSString *)identifier;
-(NSString *)category;
-(NSDictionary *)userInfo;
-(id)initWithCategory:(id)arg1 endMorningIndex:(long long)arg2 userInfo:(id)arg3 ;
-(long long)endMorningIndex;
@end
