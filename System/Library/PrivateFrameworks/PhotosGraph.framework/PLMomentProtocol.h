/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, CLLocation;


@protocol PLMomentProtocol <NSObject>
@property (nonatomic,readonly) NSDate * pl_startDate; 
@property (nonatomic,readonly) NSDate * pl_endDate; 
@property (nonatomic,readonly) unsigned long long pl_numberOfAssets; 
@property (nonatomic,readonly) CLLocation * pl_location; 
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
@required
-(unsigned long long)pl_numberOfAssets;
-(NSDate *)pl_startDate;
-(CLLocationCoordinate2D)pl_coordinate;
-(CLLocation *)pl_location;
-(NSDate *)pl_endDate;

@end
