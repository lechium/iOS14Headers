/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PubSub/PSSubscription.h>

@class NSUUID;

@interface PSRemoteSubscription : PSSubscription {

	NSUUID* _remoteDeviceIdentifier;

}

@property (copy,readonly) NSUUID * remoteDeviceIdentifier;              //@synthesize remoteDeviceIdentifier=_remoteDeviceIdentifier - In the implementation block
-(id)attributeDescriptions;
-(NSUUID *)remoteDeviceIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithTopic:(id)arg1 filters:(id)arg2 conditionals:(id)arg3 remoteDeviceIdentifier:(id)arg4 ;
@end

