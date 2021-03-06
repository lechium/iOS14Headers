/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKTravelEngineUtilities : NSObject
+(id)cadRouteHypothesisForEKTravelEngineHypothesis:(id)arg1 ;
+(id)formattedLocationCoordinates:(id)arg1 ;
+(int)geoTransportTypeForCalLocationRoutingMode:(long long)arg1 ;
+(id)geoTrafficDensityAsString:(unsigned long long)arg1 ;
+(BOOL)date:(id)arg1 representsImmediateDepartureForHypothesis:(id)arg2 ;
+(double)minimumAllowableTravelTime;
+(unsigned long long)geoTrafficDensityForString:(id)arg1 ;
+(long long)geoRouteHypothesisTravelStateForString:(id)arg1 ;
+(BOOL)date:(id)arg1 representsApproachingDepartureDateForHypothesis:(id)arg2 ;
+(double)maximumAllowableTravelTime;
+(BOOL)date:(id)arg1 representsLatenessForHypothesis:(id)arg2 ;
+(id)authorizationStatusAsString:(int)arg1 ;
+(id)geoTransportTypeAsString:(int)arg1 ;
+(int)geoTransportTypeForString:(id)arg1 ;
+(BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1 ;
@end

