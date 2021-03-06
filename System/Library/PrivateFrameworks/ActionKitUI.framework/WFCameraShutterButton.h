/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class CAShapeLayer;

@interface WFCameraShutterButton : UIControl {

	CAShapeLayer* _outlineLayer;
	CAShapeLayer* _buttonLayer;

}

@property (assign,nonatomic,__weak) CAShapeLayer * outlineLayer;              //@synthesize outlineLayer=_outlineLayer - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * buttonLayer;               //@synthesize buttonLayer=_buttonLayer - In the implementation block
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CAShapeLayer *)outlineLayer;
-(void)setOutlineLayer:(CAShapeLayer *)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(unsigned long long)accessibilityTraits;
-(CAShapeLayer *)buttonLayer;
-(void)setButtonLayer:(CAShapeLayer *)arg1 ;
@end

