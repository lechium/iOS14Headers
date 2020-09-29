/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUModalTransition.h>
#import <libobjc.A.dylib/PUTilingViewControllerTransition.h>

@class PUTilingViewTransitionHelper, NSString;

@interface PUTilingViewModalTransition : PUModalTransition <PUTilingViewControllerTransition> {

	PUTilingViewTransitionHelper* __tilingViewTransitionHelper;

}

@property (nonatomic,readonly) PUTilingViewTransitionHelper * _tilingViewTransitionHelper;              //@synthesize _tilingViewTransitionHelper=__tilingViewTransitionHelper - In the implementation block
@property (nonatomic,readonly) BOOL hasStarted; 
@property (getter=isTransitionPaused,nonatomic,readonly) BOOL transitionPaused; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_animateTransitionWithOperation:(long long)arg1 ;
-(BOOL)isTransitionPaused;
-(PUTilingViewTransitionHelper *)_tilingViewTransitionHelper;
-(void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2 ;
-(BOOL)isInteractive;
-(id)init;
-(void)resumeTransition:(BOOL)arg1 ;
-(BOOL)hasStarted;
-(void)pauseTransitionWithOptions:(unsigned long long)arg1 ;
-(void)pauseTransition;
-(void)animatePresentTransition;
-(void)animateDismissTransition;
@end
