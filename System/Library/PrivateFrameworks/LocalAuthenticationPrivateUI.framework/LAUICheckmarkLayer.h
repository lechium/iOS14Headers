/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class CAShapeLayer, UIColor;

@interface LAUICheckmarkLayer : CALayer {

	CAShapeLayer* _shape_layer;
	vector<CAShapeLayer *, std::__1::allocator<CAShapeLayer *> >* _transient_shape_layers;
	BOOL _animating;
	unsigned _animation_index;
	double _line_width;
	double _effective_line_width;
	vector<LAUI_CA_utilities::animation_completion_handler_container, std::__1::allocator<LAUI_CA_utilities::animation_completion_handler_container> >* _completions;
	BOOL _revealed;
	UIColor* _primary_color;
	double _line_width_scale;

}

@property (assign,nonatomic) double lineWidthScale;                          //@synthesize line_width_scale=_line_width_scale - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryColor;                  //@synthesize primary_color=_primary_color - In the implementation block
@property (getter=isRevealed,nonatomic,readonly) BOOL revealed;              //@synthesize revealed=_revealed - In the implementation block
@property (nonatomic,readonly) CGSize aspectSize; 
-(UIColor *)primaryColor;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)isRevealed;
-(void)layoutSublayers;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(id)init;
-(CGSize)aspectSize;
-(void)setLineWidthScale:(double)arg1 ;
-(void)setPrimaryColor:(id)arg1 animated:(BOOL)arg2 ;
-(CGSize)defaultSizeForCircleWithDiameter:(double)arg1 scale:(double)arg2 ;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(double)lineWidthScale;
-(void)_updateRevealedAnimated:(BOOL)arg1 ;
-(void)_executeCompletions:(BOOL)arg1 ;
-(void)_animationsDidResolve;
@end
