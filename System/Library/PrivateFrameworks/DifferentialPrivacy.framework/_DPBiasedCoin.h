/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPBiasedCoin : NSObject {

	double _bias;

}

@property (nonatomic,readonly) double bias;              //@synthesize bias=_bias - In the implementation block
+(id)coinWithBias:(double)arg1 ;
+(double)sanitizedProbability:(double)arg1 ;
-(double)bias;
-(BOOL)flip;
-(id)init;
-(id)description;
-(unsigned char)generateByte;
-(id)initWithBias:(double)arg1 ;
@end
