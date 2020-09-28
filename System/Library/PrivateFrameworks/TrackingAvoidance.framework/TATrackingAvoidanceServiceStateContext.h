/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TATrackingAvoidanceServiceStateContext : NSObject {

	BOOL _serviceEnabled;
	BOOL _highThermalState;
	BOOL _airplaneMode;
	BOOL _batterySaverMode;
	BOOL _locationServicesEnabled;
	BOOL _restartRequired;
	BOOL _locationSimulationInProgress;
	BOOL _allowSimulatedEvents;
	BOOL _deviceUnlockedSinceBoot;

}

@property (assign) BOOL serviceEnabled;                            //@synthesize serviceEnabled=_serviceEnabled - In the implementation block
@property (assign) BOOL highThermalState;                          //@synthesize highThermalState=_highThermalState - In the implementation block
@property (assign) BOOL airplaneMode;                              //@synthesize airplaneMode=_airplaneMode - In the implementation block
@property (assign) BOOL batterySaverMode;                          //@synthesize batterySaverMode=_batterySaverMode - In the implementation block
@property (assign) BOOL locationServicesEnabled;                   //@synthesize locationServicesEnabled=_locationServicesEnabled - In the implementation block
@property (assign) BOOL restartRequired;                           //@synthesize restartRequired=_restartRequired - In the implementation block
@property (assign) BOOL locationSimulationInProgress;              //@synthesize locationSimulationInProgress=_locationSimulationInProgress - In the implementation block
@property (assign) BOOL allowSimulatedEvents;                      //@synthesize allowSimulatedEvents=_allowSimulatedEvents - In the implementation block
@property (assign) BOOL deviceUnlockedSinceBoot;                   //@synthesize deviceUnlockedSinceBoot=_deviceUnlockedSinceBoot - In the implementation block
-(void)setLocationServicesEnabled:(BOOL)arg1 ;
-(BOOL)locationServicesEnabled;
-(id)init;
-(BOOL)deviceUnlockedSinceBoot;
-(void)setAirplaneMode:(BOOL)arg1 ;
-(BOOL)restartRequired;
-(BOOL)airplaneMode;
-(void)setServiceEnabled:(BOOL)arg1 ;
-(BOOL)serviceEnabled;
-(BOOL)highThermalState;
-(void)setHighThermalState:(BOOL)arg1 ;
-(BOOL)batterySaverMode;
-(void)setBatterySaverMode:(BOOL)arg1 ;
-(void)setRestartRequired:(BOOL)arg1 ;
-(BOOL)locationSimulationInProgress;
-(void)setLocationSimulationInProgress:(BOOL)arg1 ;
-(BOOL)allowSimulatedEvents;
-(void)setAllowSimulatedEvents:(BOOL)arg1 ;
-(void)setDeviceUnlockedSinceBoot:(BOOL)arg1 ;
@end
