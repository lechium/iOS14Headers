/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/PGMaterialView.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@protocol BSInvalidatable, PGButtonViewDelegate;
@class NSString, _PGButton, UIViewPropertyAnimator, UIPointerInteraction, UIFont;

@interface PGButtonView : PGMaterialView <UIPointerInteractionDelegate> {

	double _currentGlyphSize;
	NSString* _currentGlyphImageName;
	id<BSInvalidatable> _preventAutoHideOfControlsAssertion;
	BOOL _circular;
	BOOL _highlighted;
	id<PGButtonViewDelegate> _delegate;
	NSString* _systemImageName;
	double _glyphSize;
	_PGButton* _actualButton;
	UIViewPropertyAnimator* _highlightAnimator;
	UIPointerInteraction* _pointerInteraction;

}

@property (nonatomic,retain) _PGButton * actualButton;                                       //@synthesize actualButton=_actualButton - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                          //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic,__weak) UIViewPropertyAnimator * highlightAnimator;              //@synthesize highlightAnimator=_highlightAnimator - In the implementation block
@property (assign,nonatomic,__weak) UIPointerInteraction * pointerInteraction;               //@synthesize pointerInteraction=_pointerInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<PGButtonViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * systemImageName;                                       //@synthesize systemImageName=_systemImageName - In the implementation block
@property (assign,getter=isCircular,nonatomic) BOOL circular;                                //@synthesize circular=_circular - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) UIFont * font; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) double glyphSize;                                               //@synthesize glyphSize=_glyphSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
+(id)buttonWithDelegate:(id)arg1 ;
+(id)disabledTintColor;
+(id)enabledTintColor;
-(void)setPointerInteraction:(UIPointerInteraction *)arg1 ;
-(BOOL)isCircular;
-(UIPointerInteraction *)pointerInteraction;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIViewPropertyAnimator *)highlightAnimator;
-(void)setHighlightAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)sizeToFit;
-(BOOL)isHighlighted;
-(BOOL)isEnabled;
-(NSString *)text;
-(void)dealloc;
-(void)setSystemImageName:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)_handleTouchDown:(id)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(double)glyphSize;
-(void)setCircular:(BOOL)arg1 ;
-(void)setDelegate:(id<PGButtonViewDelegate>)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id<PGButtonViewDelegate>)delegate;
-(void)didMoveToWindow;
-(void)setEnabled:(BOOL)arg1 ;
-(id)accessibilityIdentifier;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)setAccessibilityIdentifier:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)systemImageName;
-(void)setGlyphSize:(double)arg1 ;
-(void)_handleDragEnter:(id)arg1 ;
-(void)_handleDragExit:(id)arg1 ;
-(void)_handleTouchUpOrCancel:(id)arg1 ;
-(_PGButton *)actualButton;
-(void)_updateForCircularAppearanceIfNeeded;
-(void)_updateGlyphConfigurationIfNeeded;
-(void)setActualButton:(_PGButton *)arg1 ;
@end
