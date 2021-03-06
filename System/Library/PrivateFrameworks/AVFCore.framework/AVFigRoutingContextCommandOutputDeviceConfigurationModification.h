/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceConfigurationModification.h>

@class NSString;

@interface AVFigRoutingContextCommandOutputDeviceConfigurationModification : NSObject <AVOutputDeviceConfigurationModification> {

	CFDictionaryRef _payload;

}

@property (nonatomic,readonly) CFDictionaryRef routingContextCommandPayload;              //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(CFDictionaryRef)routingContextCommandPayload;
-(void)setDevicePassword:(id)arg1 ;
-(void)addPeerToHomeGroup:(id)arg1 ;
-(void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(BOOL)arg1 ;
-(void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;
-(void)removePeerWithIDFromHomeGroup:(id)arg1 ;
-(void)setDeviceName:(id)arg1 ;
-(id)init;
@end

