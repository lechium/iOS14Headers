/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMDeviceOrientationManager : NSObject {

	id _internal;

}
+(BOOL)isAvailable;
+(void)initialize;
+(BOOL)isAlwaysOn;
+(void)dummySelector:(id)arg1 ;
-(id)initPrivate;
-(void)onNotification:(id)arg1 ;
-(void)signalAndReleaseSemaphoreIfNecessaryPrivate;
-(void)updateAggregateDictionaryPrivate;
-(void)dealloc;
-(BOOL)orientationNotificationsDisabled;
-(void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setDeviceOrientationCallbackModePrivate:(int)arg1 ;
-(void)stopDeviceOrientationUpdatesPrivate;
-(void)start;
-(id)init;
-(id)stringForOrientation:(int)arg1 ;
-(void)onDeviceOrientation:(const Sample*)arg1 ;
-(void)deallocPrivate;
-(void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)deviceOrientationBlocking;
-(void)onMotionPreferencesUpdated;
-(void)stopDeviceOrientationUpdates;
-(void)stop;
-(BOOL)isDeviceOrientationAvailable;
-(BOOL)isDeviceOrientationActive;
@end

