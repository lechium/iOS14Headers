/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTMotionActivityManagerNotificationMotionSettledStateChange : RTNotification {

	unsigned long long _settledState;

}

@property (nonatomic,readonly) unsigned long long settledState;              //@synthesize settledState=_settledState - In the implementation block
-(unsigned long long)settledState;
-(id)init;
-(id)description;
-(id)initWithSettledState:(unsigned long long)arg1 ;
@end

