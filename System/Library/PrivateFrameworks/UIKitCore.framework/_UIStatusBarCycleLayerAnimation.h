/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, CAAnimation, NSString;

@interface _UIStatusBarCycleLayerAnimation : NSObject {

	CALayer* _layer;
	CAAnimation* _animation;
	CAAnimation* _originalAnimation;
	NSString* _key;

}

@property (nonatomic,retain) CALayer * layer;                              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;                      //@synthesize animation=_animation - In the implementation block
@property (nonatomic,retain) CAAnimation * originalAnimation;              //@synthesize originalAnimation=_originalAnimation - In the implementation block
@property (nonatomic,copy) NSString * key;                                 //@synthesize key=_key - In the implementation block
+(id)cycleAnimationWithLayer:(id)arg1 animation:(id)arg2 key:(id)arg3 ;
-(void)setLayer:(CALayer *)arg1 ;
-(CALayer *)layer;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(CAAnimation *)originalAnimation;
-(void)setOriginalAnimation:(CAAnimation *)arg1 ;
-(CAAnimation *)animation;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(id)description;
@end

