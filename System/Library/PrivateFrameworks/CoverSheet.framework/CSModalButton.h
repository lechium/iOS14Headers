/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIVisualEffectView, UIVisualEffect;

@interface CSModalButton : UIButton {

	UIColor* _backgroundColor;
	UIVisualEffectView* _effectView;
	BOOL _isPressed;

}

@property (nonatomic,retain) UIVisualEffect * visualEffect; 
-(UIVisualEffect *)visualEffect;
-(void)setVisualEffect:(UIVisualEffect *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(void)_buttonReleased:(id)arg1 ;
@end

