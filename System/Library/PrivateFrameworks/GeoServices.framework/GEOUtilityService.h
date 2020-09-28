/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOUtilityServiceProxy.h>

@protocol GEOUtilityServiceProxy;
@class NSString;

@interface GEOUtilityService : NSObject <GEOUtilityServiceProxy> {

	id<GEOUtilityServiceProxy> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)useProxy:(Class)arg1 ;
+(id)sharedService;
-(id)init;
-(id)getHomeDirectoryPath;
-(id)getGeoServicesCacheDirectoryPath;
-(void)getCurrentGeoServicesState:(id)arg1 callback:(/*^block*/id)arg2 ;
@end
