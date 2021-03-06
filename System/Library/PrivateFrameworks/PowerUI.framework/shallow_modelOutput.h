/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface shallow_modelOutput : NSObject <MLFeatureProvider> {

	long long _next_discharge_is_shallow;
	NSDictionary* _classProbability;

}

@property (assign,nonatomic) long long next_discharge_is_shallow;              //@synthesize next_discharge_is_shallow=_next_discharge_is_shallow - In the implementation block
@property (nonatomic,retain) NSDictionary * classProbability;                  //@synthesize classProbability=_classProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(NSDictionary *)classProbability;
-(void)setClassProbability:(NSDictionary *)arg1 ;
-(id)initWithNext_discharge_is_shallow:(long long)arg1 classProbability:(id)arg2 ;
-(long long)next_discharge_is_shallow;
-(void)setNext_discharge_is_shallow:(long long)arg1 ;
@end

