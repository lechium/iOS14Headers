/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOMapTransitPoint <NSObject>
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE36 boundingRect; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@required
-(NSString *)internalName;
-(GEOCoarseLocationLatLng)coordinate;
-(unsigned long long)transitID;
-(SCD_Struct_GE36)boundingRect;
-(double)boundingRadius;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(double)distanceInMetersFrom:(GEOCoarseLocationLatLng)arg1;
-(GEOCoarseLocationLatLng*)polygonPoints;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1;
-(long long)polygonPointsCount;

@end
