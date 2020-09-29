/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer, UIColor;

@interface PUPhotoEditCircularIndicatorView : UIView {

	double _thickness;
	double _currentValue;
	double _minValue;
	double _maxValue;
	CAShapeLayer* _backgroundLayer;
	CAShapeLayer* _progressLayer;

}

@property (nonatomic,retain) CAShapeLayer * backgroundLayer;              //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                //@synthesize progressLayer=_progressLayer - In the implementation block
@property (assign,nonatomic) double thickness;                            //@synthesize thickness=_thickness - In the implementation block
@property (assign,nonatomic) double currentValue;                         //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,retain) UIColor * ringColor; 
@property (assign,nonatomic) double minValue;                             //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                             //@synthesize maxValue=_maxValue - In the implementation block
-(void)setMaxValue:(double)arg1 ;
-(double)currentValue;
-(void)_layoutSubLayers;
-(void)setRingColor:(UIColor *)arg1 ;
-(void)_updateProgressLayer;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)backgroundLayer;
-(void)setBackgroundLayer:(CAShapeLayer *)arg1 ;
-(void)setCurrentValue:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)maxValue;
-(void)_setupLayers;
-(void)layoutSubviews;
-(void)resetToDefaults;
-(double)minValue;
-(UIColor *)ringColor;
-(void)setMinValue:(double)arg1 ;
-(void)setThickness:(double)arg1 ;
-(double)thickness;
@end
