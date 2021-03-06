/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface GEORouteHypothesizerAnalyticsStore : NSObject <NSSecureCoding> {

	double _observedEarlyDeltaFromRequiredTimeToLeave;
	double _observedLateDeltaFromRequiredTimeToLeave;
	unsigned long long _hypothesizerRerouteCount;
	unsigned long long _etaUpdatesAfterEventStart;
	BOOL _etaUpdatesWereReported;
	unsigned long long _hypothesisCount;
	BOOL _stopped;
	unsigned long long _uiNotificationType;
	NSDate* _lastGenerationDate;

}

@property (assign,nonatomic) unsigned long long etaUpdatesAfterEventStart;              //@synthesize etaUpdatesAfterEventStart=_etaUpdatesAfterEventStart - In the implementation block
@property (assign,nonatomic) BOOL etaUpdatesWereReported;                               //@synthesize etaUpdatesWereReported=_etaUpdatesWereReported - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEtaUpdatesAfterEventStart:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)etaUpdatesAfterEventStart;
-(void)didArriveWithExpectedArrivalTime:(id)arg1 ;
-(id)init;
-(void)didShowUI:(unsigned long long)arg1 ;
-(void)didGenerateHypothesis;
-(void)didReroute;
-(id)initWithCoder:(id)arg1 ;
-(void)setEtaUpdatesWereReported:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)didStopHypothesizing;
-(BOOL)etaUpdatesWereReported;
-(void)didStopMoving;
-(void)didStartMovingWithExpectedDepartureTime:(id)arg1 ;
@end

