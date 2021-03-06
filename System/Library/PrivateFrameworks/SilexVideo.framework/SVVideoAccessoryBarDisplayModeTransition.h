/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoAccessoryItemDisplayModeTransitioning;
@class SVVideoAccessoryBarDisplayState, SVVideoAccessoryBarDisplayModeTransitionContext;

@interface SVVideoAccessoryBarDisplayModeTransition : NSObject {

	SVVideoAccessoryBarDisplayState* _fromState;
	SVVideoAccessoryBarDisplayState* _toState;
	id<SVVideoAccessoryItemDisplayModeTransitioning> _transitionCoordinator;
	SVVideoAccessoryBarDisplayModeTransitionContext* _context;

}

@property (nonatomic,retain) SVVideoAccessoryBarDisplayModeTransitionContext * context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) SVVideoAccessoryBarDisplayState * fromState;                                         //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,readonly) SVVideoAccessoryBarDisplayState * toState;                                           //@synthesize toState=_toState - In the implementation block
@property (nonatomic,readonly) id<SVVideoAccessoryItemDisplayModeTransitioning> transitionCoordinator;              //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
-(void)cancel;
-(SVVideoAccessoryBarDisplayState *)toState;
-(SVVideoAccessoryBarDisplayState *)fromState;
-(id<SVVideoAccessoryItemDisplayModeTransitioning>)transitionCoordinator;
-(void)performTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setContext:(SVVideoAccessoryBarDisplayModeTransitionContext *)arg1 ;
-(SVVideoAccessoryBarDisplayModeTransitionContext *)context;
-(id)initWithFromState:(id)arg1 toState:(id)arg2 transitionCoordinator:(id)arg3 ;
@end

