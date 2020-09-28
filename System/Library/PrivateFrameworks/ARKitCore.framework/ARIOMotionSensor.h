/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARSensor.h>

@protocol OS_dispatch_queue, ARSensorDelegate;
@class NSObject, ARGyroscopeData, ARAccelerometerData, NSString;

@interface ARIOMotionSensor : NSObject <ARSensor> {

	IOHIDEventSystemClientRef _accelerometerSystemClient;
	IOHIDServiceClientRef _accelerometerService;
	IOHIDEventSystemClientRef _gyroSystemClient;
	IOHIDServiceClientRef _gyroService;
	NSObject*<OS_dispatch_queue> _imuDataQueue;
	ARGyroscopeData* _currentGyroData;
	ARAccelerometerData* _currentAccelerometerData;
	id<ARSensorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long powerUsage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredSampleRate;
-(void)dealloc;
-(void)start;
-(id)init;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(id<ARSensorDelegate>)delegate;
-(void)stop;
-(unsigned long long)providedDataTypes;
-(void)accelerometerDidOutputEvent:(IOHIDEventRef)arg1 timestamp:(double)arg2 ;
-(void)gyroscopeDidOutputEvent:(IOHIDEventRef)arg1 timestamp:(double)arg2 ;
@end
