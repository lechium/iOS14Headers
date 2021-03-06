/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CALNMailAccounts;
@interface CALNTriggeredEventNotificationMailtoURLProvider : NSObject {

	id<CALNMailAccounts> _mailAccounts;

}

@property (nonatomic,readonly) id<CALNMailAccounts> mailAccounts;              //@synthesize mailAccounts=_mailAccounts - In the implementation block
-(id)mailtoURLForEvent:(id)arg1 ;
-(id<CALNMailAccounts>)mailAccounts;
-(id)initWithMailAccounts:(id)arg1 ;
@end

