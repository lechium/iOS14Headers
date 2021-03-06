/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/SystemConfiguration/CaptiveNetworkSupport.bundle/CaptiveNetworkSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CaptiveNetworkSupport/CaptiveNetworkSupport-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSObject, NSString;

@interface CarrierSettingsStatusIndicator : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate> {

	CoreTelephonyClient* _coreTelephonyClient;
	NSObject*<OS_dispatch_queue> _queue;
	/*function pointer*/void* _callback;
	CFRunLoopRef _runloop;
	CFStringRef _runloopMode;

}

@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign) /*function pointer*/void* callback;                               //@synthesize callback=_callback - In the implementation block
@property (assign) CFRunLoopRef runloop;                                             //@synthesize runloop=_runloop - In the implementation block
@property (assign) CFStringRef runloopMode;                                          //@synthesize runloopMode=_runloopMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CFRunLoopRef)runloop;
-(void)carrierBundleChange:(id)arg1 ;
-(void)setRunloop:(CFRunLoopRef)arg1 ;
-(void)preferredDataSimChanged:(id)arg1 ;
-(void)createConnection;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(/*function pointer*/void*)callback;
-(id)init;
-(void)setRunloopMode:(CFStringRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(CFStringRef)runloopMode;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

