/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EFLinearFunction : NSObject {

	double _slope;
	double _intercept;

}

@property (assign,nonatomic) double slope;                  //@synthesize slope=_slope - In the implementation block
@property (assign,nonatomic) double intercept;              //@synthesize intercept=_intercept - In the implementation block
-(double)slope;
-(void)setSlope:(double)arg1 ;
-(id)initWithSlope:(double)arg1 intercept:(double)arg2 ;
-(id)initWithLineThroughPoints:(id)arg1 ;
-(double)evaluateX:(double)arg1 ;
-(double)evaluateReverse:(double)arg1 ;
-(void)setIntercept:(double)arg1 ;
-(double)intercept;
@end
