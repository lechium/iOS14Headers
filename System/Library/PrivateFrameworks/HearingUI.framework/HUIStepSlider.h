/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UISlider.h>

@class UIColor, NSMutableArray;

@interface HUIStepSlider : UISlider {

	BOOL _restrictsValuesToTicks;
	BOOL _supportsVibrancy;
	BOOL _drawsEndTicks;
	unsigned long long _segmentCount;
	UIColor* _tickColor;
	NSMutableArray* _ticks;

}

@property (nonatomic,retain) NSMutableArray * ticks;                       //@synthesize ticks=_ticks - In the implementation block
@property (assign,nonatomic) unsigned long long segmentCount;              //@synthesize segmentCount=_segmentCount - In the implementation block
@property (assign,nonatomic) BOOL restrictsValuesToTicks;                  //@synthesize restrictsValuesToTicks=_restrictsValuesToTicks - In the implementation block
@property (assign,nonatomic) BOOL supportsVibrancy;                        //@synthesize supportsVibrancy=_supportsVibrancy - In the implementation block
@property (assign,nonatomic) BOOL drawsEndTicks;                           //@synthesize drawsEndTicks=_drawsEndTicks - In the implementation block
@property (nonatomic,retain) UIColor * tickColor;                          //@synthesize tickColor=_tickColor - In the implementation block
-(unsigned long long)segmentCount;
-(NSMutableArray *)ticks;
-(void)sliderTapped:(id)arg1 ;
-(unsigned long long)numberOfTicks;
-(float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1 ;
-(id)traitCollection;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)setSegmentCount:(unsigned long long)arg1 ;
-(void)setTicks:(NSMutableArray *)arg1 ;
-(BOOL)supportsVibrancy;
-(UIColor *)tickColor;
-(void)setTickColor:(UIColor *)arg1 ;
-(void)setRestrictsValuesToTicks:(BOOL)arg1 ;
-(void)setSupportsVibrancy:(BOOL)arg1 ;
-(void)setDrawsEndTicks:(BOOL)arg1 ;
-(BOOL)restrictsValuesToTicks;
-(BOOL)drawsEndTicks;
@end

