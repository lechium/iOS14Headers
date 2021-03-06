/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TeaUI/TeaUI-Structs.h>
@class CAMediaTimingFunction, TUAnimationFloatFunction;

@interface TUAnimationSizeFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _speed;
	TUAnimationFloatFunction* _widthFunction;
	TUAnimationFloatFunction* _heightFunction;
	CGSize _startValue;
	CGSize _endValue;

}

@property (nonatomic,retain) TUAnimationFloatFunction * widthFunction;               //@synthesize widthFunction=_widthFunction - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * heightFunction;              //@synthesize heightFunction=_heightFunction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                 //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) CGSize startValue;                                      //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) CGSize endValue;                                        //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                           //@synthesize speed=_speed - In the implementation block
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(CGSize)solveForTime:(double)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(void)_reloadFunctions;
-(TUAnimationFloatFunction *)widthFunction;
-(TUAnimationFloatFunction *)heightFunction;
-(void)setWidthFunction:(TUAnimationFloatFunction *)arg1 ;
-(void)setHeightFunction:(TUAnimationFloatFunction *)arg1 ;
-(id)initWithTimingFunction:(id)arg1 startRect:(CGSize)arg2 endRect:(CGSize)arg3 speed:(double)arg4 ;
-(CGSize)startValue;
-(CGSize)endValue;
-(double)speed;
-(void)setStartValue:(CGSize)arg1 ;
-(void)setEndValue:(CGSize)arg1 ;
@end

