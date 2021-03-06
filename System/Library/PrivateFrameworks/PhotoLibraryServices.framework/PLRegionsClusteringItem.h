/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol PLRegionsClusteringItem <NSObject>
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
@property (nonatomic,readonly) double pl_gpsHorizontalAccuracy; 
@property (nonatomic,readonly) NSDate * pl_date; 
@property (nonatomic,readonly) NSString * pl_uuid; 
@required
-(NSDate *)pl_date;
-(NSString *)pl_uuid;
-(CLLocationCoordinate2D)pl_coordinate;
-(double)pl_gpsHorizontalAccuracy;

@end

