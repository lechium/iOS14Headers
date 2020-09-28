/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSAudioRouteChangeMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSAudioRouteChangeMonitorImpl : CSAudioRouteChangeMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isHearstConnected;
	BOOL _isJarvisConnected;

}
-(BOOL)hearstConnected;
-(void)getJarvisConnected:(/*^block*/id)arg1 ;
-(void)carPlayAudioRouteDidChange:(id)arg1 ;
-(void)_stopMonitoring;
-(void)preferredExternalRouteDidChange:(id)arg1 ;
-(id)init;
-(void)getHearstConnected:(/*^block*/id)arg1 ;
-(void)_notifyHearstConnectionState:(BOOL)arg1 ;
-(BOOL)_fetchHearstConnectionState;
-(BOOL)_fetchJarvisConnectionState;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)jarvisConnected;
-(void)_notifyJarvisConnectionState:(BOOL)arg1 ;
@end
