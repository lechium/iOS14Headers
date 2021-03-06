/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarImageView.h>
#import <UIKitCore/_UIStatusBarPersistentAnimation.h>

@class CAShapeLayer, NSString;

@interface _UIStatusBarActivityIconView : _UIStatusBarImageView <_UIStatusBarPersistentAnimation> {

	BOOL _ringing;
	double _ringingIconScale;
	CAShapeLayer* _innerRingShapeLayer;
	CAShapeLayer* _outerRingShapeLayer;

}

@property (nonatomic,retain) CAShapeLayer * innerRingShapeLayer;              //@synthesize innerRingShapeLayer=_innerRingShapeLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerRingShapeLayer;              //@synthesize outerRingShapeLayer=_outerRingShapeLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)alignmentRectInsets;
-(void)resumePersistentAnimation;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(CAShapeLayer *)outerRingShapeLayer;
-(void)_setupRingingLayersForStyleAttributes:(id)arg1 ;
-(void)layoutSubviews;
-(void)applyStyleAttributes:(id)arg1 ;
-(CAShapeLayer *)innerRingShapeLayer;
-(void)_teardownRingingLayers;
-(void)setRinging:(BOOL)arg1 forUpdate:(id)arg2 ;
-(void)setOuterRingShapeLayer:(CAShapeLayer *)arg1 ;
-(void)setInnerRingShapeLayer:(CAShapeLayer *)arg1 ;
@end

