/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class RTAccount;

@interface RTAccountManagerNotificationAccountChanged : RTNotification {

	RTAccount* _latestAccount;
	RTAccount* _oldAccount;

}

@property (nonatomic,readonly) RTAccount * latestAccount;              //@synthesize latestAccount=_latestAccount - In the implementation block
@property (nonatomic,readonly) RTAccount * oldAccount;                 //@synthesize oldAccount=_oldAccount - In the implementation block
-(id)init;
-(RTAccount *)oldAccount;
-(RTAccount *)latestAccount;
-(id)initWithLatestAccount:(id)arg1 oldAccount:(id)arg2 ;
@end

