/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface MNTraceRouteSelectionsRow : NSObject {

	double _startTimestamp;
	double _endTimestamp;
	NSData* _routeID;
	unsigned long long _selectedRouteIndex;

}

@property (assign,nonatomic) double startTimestamp;                              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) double endTimestamp;                                //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,copy) NSData * routeID;                                     //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) unsigned long long selectedRouteIndex;              //@synthesize selectedRouteIndex=_selectedRouteIndex - In the implementation block
-(void)setSelectedRouteIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectedRouteIndex;
-(NSData *)routeID;
-(double)startTimestamp;
-(double)endTimestamp;
-(void)setEndTimestamp:(double)arg1 ;
-(void)setStartTimestamp:(double)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
@end
