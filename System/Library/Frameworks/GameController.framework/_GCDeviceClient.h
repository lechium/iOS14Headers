/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _GCDeviceClient
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (readonly) id<_GCIPCObjectRegistry> IPCObjectRegistry; 
@property (readonly) id<_GCIPCServiceRegistry> IPCServiceRegistry; 
@required
-(NSString *)bundleIdentifier;
-(id)addInvalidationHandler:(/*^block*/id)arg1;
-(BOOL)isInvalid;
-(id<_GCIPCServiceRegistry>)IPCServiceRegistry;
-(id<_GCIPCObjectRegistry>)IPCObjectRegistry;

@end
