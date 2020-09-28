/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REWorkoutRelevanceProvider : RERelevanceProvider {

	unsigned long long _state;

}

@property (nonatomic,readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
+(id)relevanceSimulatorID;
-(unsigned long long)_hash;
-(id)initWithState:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)state;
-(id)description;
-(id)dictionaryEncoding;
@end
