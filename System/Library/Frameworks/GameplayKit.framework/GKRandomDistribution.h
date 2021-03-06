/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKRandom.h>

@protocol GKRandom;
@interface GKRandomDistribution : NSObject <GKRandom> {

	id<GKRandom> _source;
	long long _lowest;
	long long _highest;

}

@property (nonatomic,readonly) long long lowestValue;                                    //@synthesize lowest=_lowest - In the implementation block
@property (nonatomic,readonly) long long highestValue;                                   //@synthesize highest=_highest - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPossibleOutcomes; 
+(id)d6;
+(id)d20;
+(id)distributionWithLowestValue:(long long)arg1 highestValue:(long long)arg2 ;
+(id)distributionForDieWithSideCount:(long long)arg1 ;
-(id)init;
-(long long)nextInt;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(long long)lowestValue;
-(long long)highestValue;
-(unsigned long long)numberOfPossibleOutcomes;
-(BOOL)nextBool;
-(float)nextUniform;
@end

