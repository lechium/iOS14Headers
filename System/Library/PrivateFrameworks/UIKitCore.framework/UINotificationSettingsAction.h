/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UINotificationSettingsAction : BSAction {

	UNNotification* _notification;

}

@property (nonatomic,copy,readonly) UNNotification * notification;              //@synthesize notification=_notification - In the implementation block
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(UNNotification *)notification;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)initWithNotification:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)UIActionType;
@end

