/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebMediaSessionHelper : NSObject {

	MediaSessionHelperiOS* _callback;
	RetainPtr<AVRouteDetector>* _routeDetector;
	BOOL _monitoringAirPlayRoutes;
	BOOL _startMonitoringAirPlayRoutesPending;

}
-(void)applicationWillResignActive:(id)arg1 ;
-(void)carPlayIsConnectedDidChange:(id)arg1 ;
-(void)activeOutputDeviceDidChange:(id)arg1 ;
-(id)initWithCallback:(MediaSessionHelperiOS*)arg1 ;
-(void)startMonitoringAirPlayRoutes;
-(void)dealloc;
-(void)clearCallback;
-(BOOL)hasWirelessTargetsAvailable;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
-(void)stopMonitoringAirPlayRoutes;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)mediaServerConnectionDied:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
@end

