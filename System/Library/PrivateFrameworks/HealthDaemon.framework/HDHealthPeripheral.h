/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@protocol OS_dispatch_queue;
@class CBPeripheral, NSString, HKDevice, NSMutableDictionary, HDHealthServiceManager, HDProfile, NSObject, NSUUID;

@interface HDHealthPeripheral : NSObject <CBPeripheralDelegate> {

	BOOL _privateMode;
	BOOL _discoveredServices;
	CBPeripheral* _cbPeripheral;
	NSString* _name;
	HKDevice* _deviceInformation;
	NSMutableDictionary* _healthServices;
	HDHealthServiceManager* _serviceManager;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _servicesQueue;
	NSMutableDictionary* _serviceForProperty;
	NSMutableDictionary* _propertiesAwaiting;

}

@property (nonatomic,retain) NSMutableDictionary * healthServices;                        //@synthesize healthServices=_healthServices - In the implementation block
@property (assign,nonatomic,__weak) HDHealthServiceManager * serviceManager;              //@synthesize serviceManager=_serviceManager - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                                  //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> servicesQueue;                  //@synthesize servicesQueue=_servicesQueue - In the implementation block
@property (assign,nonatomic) BOOL discoveredServices;                                     //@synthesize discoveredServices=_discoveredServices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * serviceForProperty;                    //@synthesize serviceForProperty=_serviceForProperty - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * propertiesAwaiting;                    //@synthesize propertiesAwaiting=_propertiesAwaiting - In the implementation block
@property (nonatomic,readonly) CBPeripheral * cbPeripheral;                               //@synthesize cbPeripheral=_cbPeripheral - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier; 
@property (readonly) long long state; 
@property (readonly) NSString * stateDescription; 
@property (readonly) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) HKDevice * deviceInformation;                              //@synthesize deviceInformation=_deviceInformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)implementedProperties;
-(void)setProfile:(HDProfile *)arg1 ;
-(NSUUID *)identifier;
-(NSString *)stateDescription;
-(HDProfile *)profile;
-(void)_queue_setDeviceInformation:(id)arg1 ;
-(HDHealthServiceManager *)serviceManager;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3 ;
-(long long)state;
-(NSString *)name;
-(void)setServiceManager:(HDHealthServiceManager *)arg1 ;
-(void)service:(id)arg1 didReadProperty:(id)arg2 value:(id)arg3 error:(id)arg4 ;
-(CBPeripheral *)cbPeripheral;
-(void)_queue_respond:(id)arg1 forProperty:(id)arg2 withError:(id)arg3 ;
-(void)writeCharacteristic:(id)arg1 expectResponse:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_queue_addPropertyHandler:(/*^block*/id)arg1 forProperty:(id)arg2 ;
-(void)_queue_startReadProperty:(id)arg1 ;
-(id)initWithCBPeripheral:(id)arg1 name:(id)arg2 serviceManager:(id)arg3 profile:(id)arg4 ;
-(BOOL)updateCBPeripheral:(id)arg1 ;
-(void)discoverServices;
-(void)addHealthService:(id)arg1 ;
-(BOOL)hasServiceWithUUID:(id)arg1 ;
-(id)healthServiceForType:(long long)arg1 ;
-(void)disconnectServices;
-(void)performOperation:(id)arg1 withParameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getProperty:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(HKDevice *)deviceInformation;
-(NSMutableDictionary *)healthServices;
-(void)setHealthServices:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)servicesQueue;
-(void)setServicesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)discoveredServices;
-(void)setDiscoveredServices:(BOOL)arg1 ;
-(NSMutableDictionary *)serviceForProperty;
-(void)setServiceForProperty:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)propertiesAwaiting;
-(void)setPropertiesAwaiting:(NSMutableDictionary *)arg1 ;
@end

