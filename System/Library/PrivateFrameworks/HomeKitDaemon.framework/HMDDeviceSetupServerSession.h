/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDDeviceSetupSessionInternal.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDDeviceSetupServerSession : HMDDeviceSetupSessionInternal <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)isSupported;
+(long long)role;
+(id)allowedClasses;
-(BOOL)processSessionData:(id)arg1 error:(id*)arg2 ;
@end

