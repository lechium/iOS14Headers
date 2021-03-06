/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIMotionEffectGroup, UIView;

@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject {

	UIMotionEffectGroup* _installedHighlightedActionMotionEffectsGroup;
	BOOL _highlighted;
	BOOL _pressed;
	UIView* _highlightTransformTargetView;

}

@property (assign,nonatomic,__weak) UIView * highlightTransformTargetView;              //@synthesize highlightTransformTargetView=_highlightTransformTargetView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                          //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL pressed;                                              //@synthesize pressed=_pressed - In the implementation block
-(BOOL)highlighted;
-(BOOL)pressed;
-(void)setPressed:(BOOL)arg1 ;
-(id)_newMotionEffectsGroupForHighlightedAction;
-(void)setHighlightTransformTargetView:(UIView *)arg1 ;
-(id)initWithHighlightTransformTargetView:(id)arg1 ;
-(CATransform3D)_enlargedTransformForSize:(CGSize)arg1 pressed:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_applyHighlightTransform;
-(UIView *)highlightTransformTargetView;
-(void)_removeMotionEffects;
-(void)_insertMotionEffects;
@end

