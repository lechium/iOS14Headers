/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface EntityMapCache : NSObject {

	NSMutableDictionary* _uuidMap;
	unsigned _capacityLimit;
	unsigned _pruneSize;
	double _hitRetainTime;
	double _missRetainTime;

}

@property (assign) double hitRetainTime;                //@synthesize hitRetainTime=_hitRetainTime - In the implementation block
@property (assign) double missRetainTime;               //@synthesize missRetainTime=_missRetainTime - In the implementation block
@property (assign) unsigned capacityLimit;              //@synthesize capacityLimit=_capacityLimit - In the implementation block
@property (assign) unsigned pruneSize;                  //@synthesize pruneSize=_pruneSize - In the implementation block
-(void)setMissRetainTime:(double)arg1 ;
-(void)setPruneSize:(unsigned)arg1 ;
-(id)entryForUUID:(id)arg1 ;
-(id)stateDictionary;
-(void)setEntry:(id)arg1 forUUID:(id)arg2 ;
-(void)setHitRetainTime:(double)arg1 ;
-(double)hitRetainTime;
-(double)missRetainTime;
-(id)init;
-(unsigned)pruneSize;
-(void)setCapacityLimit:(unsigned)arg1 ;
-(unsigned)capacityLimit;
-(void)pruneCache;
-(id)description;
@end

