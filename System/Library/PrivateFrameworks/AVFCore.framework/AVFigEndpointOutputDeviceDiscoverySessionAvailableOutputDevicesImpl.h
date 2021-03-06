/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>

@class NSArray, NSString;

@interface AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> {

	NSArray* _figEndpoints;

}

@property (nonatomic,readonly) NSArray * allDevices; 
@property (nonatomic,readonly) NSArray * availableOutputDeviceGroups; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)allDevices;
-(void)dealloc;
-(id)init;
-(id)initWithAvailableFigEndpoints:(id)arg1 ;
-(NSArray *)availableOutputDeviceGroups;
@end

