/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSXPCInterface;


@protocol FMNSXPCConnectionConfigurable <NSObject>
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) NSXPCInterface * remoteInterface; 
@property (nonatomic,readonly) NSXPCInterface * exportedInterface; 
@property (nonatomic,readonly) BOOL machService; 
@required
-(unsigned long long)options;
-(NSXPCInterface *)exportedInterface;
-(BOOL)machService;
-(NSXPCInterface *)remoteInterface;
-(NSString *)serviceName;

@end
