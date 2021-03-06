/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UISlidingBarStateRequest, _UIPanelCoordinatingAnimator;

@interface _UIPanelAnimationState : NSObject {

	BOOL _isFinishingAnimation;
	BOOL _shouldAssignOffscreenWidthsToStateRequest;
	BOOL _animatorShouldCoordinate;
	UISlidingBarStateRequest* _fromRequest;
	UISlidingBarStateRequest* _toRequest;
	double _progress;
	long long _affectedSides;
	_UIPanelCoordinatingAnimator* _animator;

}

@property (nonatomic,copy) UISlidingBarStateRequest * fromRequest;                                 //@synthesize fromRequest=_fromRequest - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * toRequest;                                   //@synthesize toRequest=_toRequest - In the implementation block
@property (assign,nonatomic) double progress;                                                      //@synthesize progress=_progress - In the implementation block
@property (assign,setter=setFinishingAnimation:,nonatomic) BOOL isFinishingAnimation;              //@synthesize isFinishingAnimation=_isFinishingAnimation - In the implementation block
@property (assign,nonatomic) long long affectedSides;                                              //@synthesize affectedSides=_affectedSides - In the implementation block
@property (assign,nonatomic) BOOL shouldAssignOffscreenWidthsToStateRequest;                       //@synthesize shouldAssignOffscreenWidthsToStateRequest=_shouldAssignOffscreenWidthsToStateRequest - In the implementation block
@property (nonatomic,readonly) UISlidingBarStateRequest * stateRequest; 
@property (nonatomic,retain) _UIPanelCoordinatingAnimator * animator;                              //@synthesize animator=_animator - In the implementation block
@property (assign,nonatomic) BOOL animatorShouldCoordinate;                                        //@synthesize animatorShouldCoordinate=_animatorShouldCoordinate - In the implementation block
+(double)defaultDuration;
+(id)timingCurveProvider;
+(id)timingCurveProviderWithVelocity:(double)arg1 ;
-(_UIPanelCoordinatingAnimator *)animator;
-(void)setAnimator:(_UIPanelCoordinatingAnimator *)arg1 ;
-(UISlidingBarStateRequest *)stateRequest;
-(UISlidingBarStateRequest *)toRequest;
-(void)setProgress:(double)arg1 ;
-(UISlidingBarStateRequest *)fromRequest;
-(void)setAffectedSides:(long long)arg1 ;
-(void)setToRequest:(UISlidingBarStateRequest *)arg1 ;
-(long long)affectedSides;
-(double)progress;
-(void)setFromRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)setFinishingAnimation:(BOOL)arg1 ;
-(BOOL)isFinishingAnimation;
-(BOOL)animatorShouldCoordinate;
-(BOOL)shouldAssignOffscreenWidthsToStateRequest;
-(void)setShouldAssignOffscreenWidthsToStateRequest:(BOOL)arg1 ;
-(id)description;
-(void)setAnimatorShouldCoordinate:(BOOL)arg1 ;
@end

