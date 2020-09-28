/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIColor, CALayer, CAGradientLayer, _UIStatusBarCycleAnimation, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarActivityView : UIView <_UIStatusBarDisplayable> {

	BOOL _isSlow;
	UIColor* _color;
	CALayer* _mainLayer;
	CAGradientLayer* _barLayer;
	CALayer* _pointLayer;
	double _thickness;
	_UIStatusBarCycleAnimation* _cycleAnimation;

}

@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CALayer * mainLayer;                                                    //@synthesize mainLayer=_mainLayer - In the implementation block
@property (nonatomic,retain) CAGradientLayer * barLayer;                                             //@synthesize barLayer=_barLayer - In the implementation block
@property (nonatomic,retain) CALayer * pointLayer;                                                   //@synthesize pointLayer=_pointLayer - In the implementation block
@property (assign,nonatomic) double thickness;                                                       //@synthesize thickness=_thickness - In the implementation block
@property (nonatomic,retain) _UIStatusBarCycleAnimation * cycleAnimation;                            //@synthesize cycleAnimation=_cycleAnimation - In the implementation block
@property (assign,nonatomic) BOOL isSlow;                                                            //@synthesize isSlow=_isSlow - In the implementation block
@property (nonatomic,copy) UIColor * color;                                                          //@synthesize color=_color - In the implementation block
-(BOOL)isSlow;
-(void)setCycleAnimation:(_UIStatusBarCycleAnimation *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CAGradientLayer *)barLayer;
-(void)setIsSlow:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)stopAnimatingWithCompletionHandler:(/*^block*/id)arg1 ;
-(CALayer *)mainLayer;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)setBarLayer:(CAGradientLayer *)arg1 ;
-(void)setThickness:(double)arg1 ;
-(void)_stopAnimatingWithStoppingAnimations:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPointLayer:(CALayer *)arg1 ;
-(double)_thicknessForTraitCollection:(id)arg1 ;
-(void)setMainLayer:(CALayer *)arg1 ;
-(double)thickness;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(UIColor *)color;
-(CALayer *)pointLayer;
-(void)setColor:(UIColor *)arg1 ;
-(void)startAnimating;
-(_UIStatusBarCycleAnimation *)cycleAnimation;
@end
