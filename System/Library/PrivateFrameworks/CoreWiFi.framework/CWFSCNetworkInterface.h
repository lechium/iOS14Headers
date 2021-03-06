/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject, NSString;

@interface CWFSCNetworkInterface : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	SCDynamicStoreRef _storeRef;
	BOOL _isMonitoringEvents;
	NSString* _interfaceName;
	NSString* _hardwareAddress;
	/*^block*/id _eventHandler;

}

@property (nonatomic,copy,readonly) NSString * interfaceName;                //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * hardwareAddress;              //@synthesize hardwareAddress=_hardwareAddress - In the implementation block
@property (copy) id eventHandler;                                            //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)eventHandler;
-(id)IPv4Addresses;
-(void)stopEventMonitoring;
-(id)IPv4BroadcastAddresses;
-(id)IPv6Flags;
-(void)setEventHandler:(id)arg1 ;
-(void)dealloc;
-(BOOL)isMonitoringEvents;
-(id)__networkStackHardwareAddress;
-(id)airPortStateConfiguration;
-(id)IPv6PrefixLengths;
-(id)__linkStateConfig;
-(id)__networkInterfaceHardwareAddress;
-(id)__hardwareAddress;
-(id)init;
-(BOOL)isLinkActive;
-(id)__IPv4StateConfig;
-(NSString *)hardwareAddress;
-(void)__startEventMonitoring;
-(id)initWithInterfaceName:(id)arg1 ;
-(id)IPv4SubnetMasks;
-(void)startEventMonitoring;
-(NSString *)interfaceName;
-(id)IPv6Addresses;
-(id)airPortSetupConfiguration;
-(id)__IPv6StateConfig;
@end

