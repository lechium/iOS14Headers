/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKTimeFormatterObserver.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@protocol NTKOlympusContentViewDelegate;
@class CLKDevice, UIButton, UIImage, NTKVictoryTimeLabel, NTKVictoryLabel, UIView, CLKTimeFormatter, NTKOlympusColorPalette, UIColor, NSString;

@interface NTKOlympusTimeContentView : UIView <CLKTimeFormatterObserver, NTKTimeView> {

	BOOL frozen;
	BOOL _invertedColors;
	BOOL _useSmallFont;
	id<NTKOlympusContentViewDelegate> _delegate;
	CLKDevice* _device;
	UIButton* _fullscreenLogoButton;
	UIButton* _circularLogoButton;
	UIImage* _circularLogoImage;
	NTKVictoryTimeLabel* _fullscreenHybridUpperTimeLabel;
	NTKVictoryLabel* _fullscreenHybridLowerTimeLabel;
	NTKVictoryLabel* _fullscreenDigitalUpperTimeLabel;
	NTKVictoryLabel* _fullscreenDigitalLowerTimeLabel;
	NTKVictoryLabel* _circularUpperTimeLabel;
	NTKVictoryLabel* _circularLowerTimeLabel;
	UIView* _contentView;
	UIView* _fullscreenDigitsContainerView;
	UIView* _circularDigitsContainerView;
	CLKTimeFormatter* _timeFormatter;
	unsigned long long _style;
	unsigned long long _dial;
	unsigned long long _color;
	NTKOlympusColorPalette* _palette;
	UIColor* _currentForegroundColor;
	UIColor* _currentBackgroundColor;
	UIColor* _currentLogoColor;
	double _dialFraction;
	double _digitalStyleFraction;
	double _olympusDigitalStyleFraction;
	double _olympusAnalogStyleFraction;
	double _analogStyleFraction;
	double _olympusDigitalLabelsPositionFraction;
	double _analogStyleSwooshPositionFraction;
	CGSize _logoImageSizeForCircularDial;

}

@property (nonatomic,retain) CLKDevice * device;                                                //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) UIButton * fullscreenLogoButton;                                   //@synthesize fullscreenLogoButton=_fullscreenLogoButton - In the implementation block
@property (nonatomic,retain) UIButton * circularLogoButton;                                     //@synthesize circularLogoButton=_circularLogoButton - In the implementation block
@property (nonatomic,retain) UIImage * circularLogoImage;                                       //@synthesize circularLogoImage=_circularLogoImage - In the implementation block
@property (nonatomic,retain) NTKVictoryTimeLabel * fullscreenHybridUpperTimeLabel;              //@synthesize fullscreenHybridUpperTimeLabel=_fullscreenHybridUpperTimeLabel - In the implementation block
@property (nonatomic,retain) NTKVictoryLabel * fullscreenHybridLowerTimeLabel;                  //@synthesize fullscreenHybridLowerTimeLabel=_fullscreenHybridLowerTimeLabel - In the implementation block
@property (nonatomic,retain) NTKVictoryLabel * fullscreenDigitalUpperTimeLabel;                 //@synthesize fullscreenDigitalUpperTimeLabel=_fullscreenDigitalUpperTimeLabel - In the implementation block
@property (nonatomic,retain) NTKVictoryLabel * fullscreenDigitalLowerTimeLabel;                 //@synthesize fullscreenDigitalLowerTimeLabel=_fullscreenDigitalLowerTimeLabel - In the implementation block
@property (nonatomic,retain) NTKVictoryLabel * circularUpperTimeLabel;                          //@synthesize circularUpperTimeLabel=_circularUpperTimeLabel - In the implementation block
@property (nonatomic,retain) NTKVictoryLabel * circularLowerTimeLabel;                          //@synthesize circularLowerTimeLabel=_circularLowerTimeLabel - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * fullscreenDigitsContainerView;                            //@synthesize fullscreenDigitsContainerView=_fullscreenDigitsContainerView - In the implementation block
@property (nonatomic,retain) UIView * circularDigitsContainerView;                              //@synthesize circularDigitsContainerView=_circularDigitsContainerView - In the implementation block
@property (nonatomic,retain) CLKTimeFormatter * timeFormatter;                                  //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long dial;                                           //@synthesize dial=_dial - In the implementation block
@property (assign,nonatomic) unsigned long long color;                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NTKOlympusColorPalette * palette;                                  //@synthesize palette=_palette - In the implementation block
@property (nonatomic,retain) UIColor * currentForegroundColor;                                  //@synthesize currentForegroundColor=_currentForegroundColor - In the implementation block
@property (nonatomic,retain) UIColor * currentBackgroundColor;                                  //@synthesize currentBackgroundColor=_currentBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * currentLogoColor;                                        //@synthesize currentLogoColor=_currentLogoColor - In the implementation block
@property (assign,nonatomic) double dialFraction;                                               //@synthesize dialFraction=_dialFraction - In the implementation block
@property (assign,nonatomic) double digitalStyleFraction;                                       //@synthesize digitalStyleFraction=_digitalStyleFraction - In the implementation block
@property (assign,nonatomic) double olympusDigitalStyleFraction;                                //@synthesize olympusDigitalStyleFraction=_olympusDigitalStyleFraction - In the implementation block
@property (assign,nonatomic) double olympusAnalogStyleFraction;                                 //@synthesize olympusAnalogStyleFraction=_olympusAnalogStyleFraction - In the implementation block
@property (assign,nonatomic) double analogStyleFraction;                                        //@synthesize analogStyleFraction=_analogStyleFraction - In the implementation block
@property (assign,nonatomic) double olympusDigitalLabelsPositionFraction;                       //@synthesize olympusDigitalLabelsPositionFraction=_olympusDigitalLabelsPositionFraction - In the implementation block
@property (assign,nonatomic) double analogStyleSwooshPositionFraction;                          //@synthesize analogStyleSwooshPositionFraction=_analogStyleSwooshPositionFraction - In the implementation block
@property (assign,nonatomic) CGSize logoImageSizeForCircularDial;                               //@synthesize logoImageSizeForCircularDial=_logoImageSizeForCircularDial - In the implementation block
@property (assign,nonatomic) BOOL useSmallFont;                                                 //@synthesize useSmallFont=_useSmallFont - In the implementation block
@property (assign,nonatomic,__weak) id<NTKOlympusContentViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL invertedColors;                                               //@synthesize invertedColors=_invertedColors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
+(double)scaleForViewDuringColorChangeTransitionWithFraction:(double)arg1 ;
-(CLKDevice *)device;
-(UIView *)contentView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(unsigned long long)dial;
-(void)setTimeOffset:(double)arg1 ;
-(NTKOlympusColorPalette *)palette;
-(void)dealloc;
-(unsigned long long)style;
-(CLKTimeFormatter *)timeFormatter;
-(void)updateColors;
-(void)layoutSubviews;
-(void)setUseSmallFont:(BOOL)arg1 ;
-(BOOL)useSmallFont;
-(void)setContentView:(UIView *)arg1 ;
-(void)setDelegate:(id<NTKOlympusContentViewDelegate>)arg1 ;
-(void)setTimeFormatter:(CLKTimeFormatter *)arg1 ;
-(UIColor *)currentBackgroundColor;
-(BOOL)isFrozen;
-(id<NTKOlympusContentViewDelegate>)delegate;
-(unsigned long long)color;
-(void)setColor:(unsigned long long)arg1 ;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)setPalette:(NTKOlympusColorPalette *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(BOOL)invertedColors;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)createAndRemoveViewsForCurrentStateIfNeeded;
-(void)setDial:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4 useSmallFont:(BOOL)arg5 circularLogoImage:(id)arg6 ;
-(void)setInvertedColors:(BOOL)arg1 ;
-(void)prepareForEditing;
-(void)cleanupAfterEditing;
-(void)applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(BOOL)arg4 ;
-(void)applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3 ;
-(void)setLogoButtonHighlighted:(BOOL)arg1 ;
-(void)configureViewsForEditing;
-(UIImage *)circularLogoImage;
-(void)setCircularLogoImage:(UIImage *)arg1 ;
-(void)setFullscreenDigitsContainerView:(UIView *)arg1 ;
-(UIView *)fullscreenDigitsContainerView;
-(void)setCircularDigitsContainerView:(UIView *)arg1 ;
-(UIView *)circularDigitsContainerView;
-(void)createCircularViewsIfNeeded;
-(void)removeFullscreenViews;
-(void)removeCircularViews;
-(void)createFullscreenLogoIfNeeded;
-(void)createFullscreenDigitalViewsIfNeeded;
-(void)createFullscreenHybridViewsIfNeeded;
-(void)timeFormatterTextDidChange:(id)arg1 ;
-(id)createLogoButtonWithBackgroundImage:(id)arg1 ;
-(id)fontForCircularDial;
-(void)handleLogoButtonHighlighted:(id)arg1 ;
-(void)handleLogoButtonResetHighlight:(id)arg1 ;
-(void)handleLogoButtonTouchUpInside:(id)arg1 ;
-(id)fontForDigitalFullscreen;
-(id)fontForHybridFullscreen;
-(id)createTimeLabelWithFont:(id)arg1 option:(unsigned long long)arg2 ;
-(id)styleWithFont:(id)arg1 ;
-(void)updateLogosFrame;
-(void)updateTimeLabelsFrame;
-(void)setViewsVisibilityForDial:(unsigned long long)arg1 style:(unsigned long long)arg2 ;
-(void)updateStylesFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(void)setViewsVisibleForDialTransition;
-(void)setViewsVisibleForStyleTransition;
-(void)ensureVisibleIfNeeded:(id)arg1 ;
-(void)_applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3 fromBackgroundColor:(id)arg4 toBackgroundColor:(id)arg5 fromLogoColor:(id)arg6 toLogoColor:(id)arg7 ;
-(void)_applyAnimationPopTransitionWithFraction:(double)arg1 ;
-(void)_applyTransitionFraction:(double)arg1 fromTextColor:(id)arg2 toTextColor:(id)arg3 ;
-(id)monospacedFontForCircularDial;
-(id)initWithDevice:(id)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4 ;
-(id)victoryFontWithSize:(double)arg1 ;
-(CGSize)logoImageSizeForCircularDial;
-(void)setLabelOutlineAlpha:(double)arg1 ;
-(void)setLabelOutlineColor:(id)arg1 ;
-(BOOL)containsSubview:(id)arg1 ;
-(UIButton *)fullscreenLogoButton;
-(void)setFullscreenLogoButton:(UIButton *)arg1 ;
-(UIButton *)circularLogoButton;
-(void)setCircularLogoButton:(UIButton *)arg1 ;
-(NTKVictoryTimeLabel *)fullscreenHybridUpperTimeLabel;
-(void)setFullscreenHybridUpperTimeLabel:(NTKVictoryTimeLabel *)arg1 ;
-(NTKVictoryLabel *)fullscreenHybridLowerTimeLabel;
-(void)setFullscreenHybridLowerTimeLabel:(NTKVictoryLabel *)arg1 ;
-(NTKVictoryLabel *)fullscreenDigitalUpperTimeLabel;
-(void)setFullscreenDigitalUpperTimeLabel:(NTKVictoryLabel *)arg1 ;
-(NTKVictoryLabel *)fullscreenDigitalLowerTimeLabel;
-(void)setFullscreenDigitalLowerTimeLabel:(NTKVictoryLabel *)arg1 ;
-(NTKVictoryLabel *)circularUpperTimeLabel;
-(void)setCircularUpperTimeLabel:(NTKVictoryLabel *)arg1 ;
-(NTKVictoryLabel *)circularLowerTimeLabel;
-(void)setCircularLowerTimeLabel:(NTKVictoryLabel *)arg1 ;
-(UIColor *)currentForegroundColor;
-(void)setCurrentForegroundColor:(UIColor *)arg1 ;
-(void)setCurrentBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)currentLogoColor;
-(void)setCurrentLogoColor:(UIColor *)arg1 ;
-(double)dialFraction;
-(void)setDialFraction:(double)arg1 ;
-(double)digitalStyleFraction;
-(void)setDigitalStyleFraction:(double)arg1 ;
-(double)olympusDigitalStyleFraction;
-(void)setOlympusDigitalStyleFraction:(double)arg1 ;
-(double)olympusAnalogStyleFraction;
-(void)setOlympusAnalogStyleFraction:(double)arg1 ;
-(double)analogStyleFraction;
-(void)setAnalogStyleFraction:(double)arg1 ;
-(double)olympusDigitalLabelsPositionFraction;
-(void)setOlympusDigitalLabelsPositionFraction:(double)arg1 ;
-(double)analogStyleSwooshPositionFraction;
-(void)setAnalogStyleSwooshPositionFraction:(double)arg1 ;
-(void)setLogoImageSizeForCircularDial:(CGSize)arg1 ;
@end
