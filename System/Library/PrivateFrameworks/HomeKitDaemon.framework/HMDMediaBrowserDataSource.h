/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMediaBrowserDataSource.h>
@class NSString, HMFSystemInfo;


@protocol HMDMediaBrowserDataSource
@property (readonly) NSString * currentAccessoryMediaRouteIdentifier; 
@property (readonly) BOOL isAppleMediaAccessory; 
@property (readonly) HMFSystemInfo * systemInfo; 
@required
-(HMFSystemInfo *)systemInfo;
-(BOOL)isAppleMediaAccessory;
-(id)createUnassociatedAppleMediaAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
-(NSString *)currentAccessoryMediaRouteIdentifier;

@end


@class NSString, HMFSystemInfo;

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) NSString * currentAccessoryMediaRouteIdentifier; 
@property (readonly) BOOL isAppleMediaAccessory; 
@property (readonly) HMFSystemInfo * systemInfo; 
+(id)shortDescription;
-(HMFSystemInfo *)systemInfo;
-(BOOL)isAppleMediaAccessory;
-(id)createUnassociatedAppleMediaAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(NSString *)currentAccessoryMediaRouteIdentifier;
@end
