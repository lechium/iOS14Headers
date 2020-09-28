/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, ADPrerollSlider;

@interface ADProgressView : UIView {

	UILabel* _elapsedTimeLabel;
	UILabel* _remainingTimeLabel;
	ADPrerollSlider* _slider;

}

@property (nonatomic,retain) UILabel * elapsedTimeLabel;                //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * remainingTimeLabel;              //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (nonatomic,retain) ADPrerollSlider * slider;                  //@synthesize slider=_slider - In the implementation block
-(ADPrerollSlider *)slider;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSlider:(ADPrerollSlider *)arg1 ;
-(void)layoutSubviews;
-(void)setElapsedTimeLabel:(UILabel *)arg1 ;
-(void)setRemainingTimeLabel:(UILabel *)arg1 ;
-(UILabel *)remainingTimeLabel;
-(UILabel *)elapsedTimeLabel;
-(void)setElapsedTime:(double)arg1 totalTime:(double)arg2 ;
@end
