/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/ControlCenter/Bundles/AirPlayMirroringModule.bundle/AirPlayMirroringModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, NSArray;

@interface MPAVOutputDeviceDiscoverySessionController : NSObject {

	AVOutputDeviceDiscoverySession* _outputDeviceDiscoverySession;
	AVOutputDeviceDiscoverySessionAvailableOutputDevices* _cachedAvailableOutputDevices;
	BOOL _cachedExternalOutputDeviceAvailable;
	long long _startDetailedDiscoveryCount;
	BOOL _needsUpdate;
	NSArray* _filteredDevices;

}

@property (retain) NSArray * filteredDevices;                                                                //@synthesize filteredDevices=_filteredDevices - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                                               //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (getter=isExternalOutputDeviceAvailable,readonly) BOOL externalOutputDeviceAvailable; 
-(void)_updateOutputDevicesImmediately;
-(NSArray *)filteredDevices;
-(BOOL)isExternalOutputDeviceAvailable;
-(void)setFilteredDevices:(NSArray *)arg1 ;
-(void)dealloc;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)_updateOutputDevicesForAvailableOutputDevices:(id)arg1 ;
-(id)init;
-(void)startDetailedDiscovery;
-(void)stopDetailedDiscovery;
-(id)initWithDeviceFeatures:(unsigned long long)arg1 ;
-(void)_updateOutputDevicesIfNeeded;
-(id)availableOutputDevices;
-(void)_availableOutputDevicesChangedNotification:(id)arg1 ;
-(id)_filterAndSortOutputDevices:(id)arg1 ;
@end
