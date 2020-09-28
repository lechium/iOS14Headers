/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@interface SBUIRemoteAlertButtonAction : BSAction

@property (nonatomic,readonly) unsigned long long events; 
-(unsigned long long)events;
-(id)initWithEvents:(unsigned long long)arg1 ;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(id)initWithEvents:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)sendResponseWithUnHandledEvents:(unsigned long long)arg1 ;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end
