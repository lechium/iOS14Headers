/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GCPhysicalDeviceManager <_GCDeviceManager>
@property (__weak) id<GCPhysicalDeviceRegistry> deviceRegistry; 
@optional
-(BOOL)acceptDriverConnection:(id)arg1 forHIDDevice:(id)arg2;
-(id)driverConnectionForHIDDevice:(id)arg1;

@required
-(void)setDeviceRegistry:(id)arg1;
-(id)matchHIDDevice:(id)arg1;
-(void)claimHIDDevice:(id)arg1;
-(id<GCPhysicalDeviceRegistry>)deviceRegistry;
-(void)relinquishHIDDevice:(id)arg1;

@end
