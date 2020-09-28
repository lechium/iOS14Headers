/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapServiceThrottlableTicket;
@interface _GEOThrottledTicket : NSObject {

	unsigned qos;
	id<GEOMapServiceThrottlableTicket> ticket;
	/*^block*/id submissionHandler;
	double safeTime;

}

@property (nonatomic,retain) id<GEOMapServiceThrottlableTicket> ticket; 
@property (nonatomic,copy) id submissionHandler; 
@property (assign,nonatomic) unsigned qos; 
@property (assign,nonatomic) double safeTime; 
+(id)ticket:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setSafeTime:(double)arg1 ;
-(id)submissionHandler;
-(void)setSubmissionHandler:(id)arg1 ;
-(void)setQos:(unsigned)arg1 ;
-(unsigned)qos;
-(double)safeTime;
-(id<GEOMapServiceThrottlableTicket>)ticket;
-(void)setTicket:(id<GEOMapServiceThrottlableTicket>)arg1 ;
@end
