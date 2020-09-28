/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDateInterval, NSArray;


@protocol PLFrequentLocationProtocol <NSObject>
@property (readonly) CLLocationCoordinate2D coordinate; 
@property (readonly) NSDateInterval * dateInterval; 
@property (readonly) NSArray * sortedMoments; 
@required
-(CLLocationCoordinate2D)coordinate;
-(NSDateInterval *)dateInterval;
-(NSArray *)sortedMoments;

@end
