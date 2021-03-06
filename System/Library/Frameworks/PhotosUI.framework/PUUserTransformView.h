/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol PUUserTransformViewDelegate;
@class UIScrollView, UIView, CADisplayLink, UIImage, NSString;

@interface PUUserTransformView : UIView <UIScrollViewDelegate> {

	SCD_Struct_PU15 _delegateFlags;
	BOOL _isUserInteracting;
	BOOL __updatingScrollView;
	BOOL __isUserPanning;
	BOOL __isUserDeceleratingPan;
	BOOL __isUserZooming;
	BOOL __isUserEndingZoom;
	BOOL __isUserPanningOrDecelerating;
	BOOL __isUserZoomingOrBouncing;
	BOOL __shouldTrackContentAnimation;
	BOOL __isContentAnimating;
	BOOL __isAnimatingZoomEnd;
	BOOL __isUpdatingState;
	BOOL __wasUserInteractingBeforeStateUpdate;
	BOOL __needsUpdateUserPanningOrDecelerating;
	BOOL __needsUpdateUserZoomingOrBouncing;
	BOOL __needsUpdateUserInteracting;
	BOOL __needsUpdateShouldTrackContentAnimation;
	BOOL __needsUpdateUserAffineTransform;
	BOOL __needsUpdateContentState;
	BOOL __needsUpdateAnimatingZoomEnd;
	BOOL __needsUpdateZoomAndScroll;
	BOOL __needsUpdateScrollView;
	id<PUUserTransformViewDelegate> _delegate;
	unsigned long long _enabledInteractions;
	UIScrollView* __scrollView;
	UIView* __scrollContentView;
	double __doubleTapZoomScale;
	double __contentZoomScale;
	long long __numberOfNestedStateChanges;
	CADisplayLink* __displayLink;
	double __desiredZoomScale;
	double __preferredMinimumZoomScale;
	double __preferredMaximumZoomScale;
	long long __numberOfNestedZoomAndScrollChanges;
	UIImage* _debugScrollViewContentImage;
	CGSize _contentPixelSize;
	CGSize _scrollPadding;
	CGPoint __contentCenter;
	CGRect _untransformedContentFrame;
	CGAffineTransform _userAffineTransform;

}

@property (nonatomic,readonly) UIScrollView * _scrollView;                                                                                 //@synthesize _scrollView=__scrollView - In the implementation block
@property (nonatomic,readonly) UIView * _scrollContentView;                                                                                //@synthesize _scrollContentView=__scrollContentView - In the implementation block
@property (assign,setter=_setDoubleTapZoomScale:,nonatomic) double _doubleTapZoomScale;                                                    //@synthesize _doubleTapZoomScale=__doubleTapZoomScale - In the implementation block
@property (assign,setter=_setUpdatingScrollView:,getter=_isUpdatingScrollView,nonatomic) BOOL _updatingScrollView;                         //@synthesize _updatingScrollView=__updatingScrollView - In the implementation block
@property (assign,setter=_setUserPanning:,nonatomic) BOOL _isUserPanning;                                                                  //@synthesize _isUserPanning=__isUserPanning - In the implementation block
@property (assign,setter=_setUserDeceleratingPan:,nonatomic) BOOL _isUserDeceleratingPan;                                                  //@synthesize _isUserDeceleratingPan=__isUserDeceleratingPan - In the implementation block
@property (assign,setter=_setUserZooming:,nonatomic) BOOL _isUserZooming;                                                                  //@synthesize _isUserZooming=__isUserZooming - In the implementation block
@property (assign,setter=_setUserEndingZoom:,nonatomic) BOOL _isUserEndingZoom;                                                            //@synthesize _isUserEndingZoom=__isUserEndingZoom - In the implementation block
@property (assign,setter=_setUserPanningOrDecelerating:,nonatomic) BOOL _isUserPanningOrDecelerating;                                      //@synthesize _isUserPanningOrDecelerating=__isUserPanningOrDecelerating - In the implementation block
@property (assign,setter=_setUserZoomingOrBouncing:,nonatomic) BOOL _isUserZoomingOrBouncing;                                              //@synthesize _isUserZoomingOrBouncing=__isUserZoomingOrBouncing - In the implementation block
@property (assign,setter=_setUserInteracting:,nonatomic) BOOL isUserInteracting;                                                           //@synthesize isUserInteracting=_isUserInteracting - In the implementation block
@property (assign,setter=_setShouldTrackContentAnimation:,nonatomic) BOOL _shouldTrackContentAnimation;                                    //@synthesize _shouldTrackContentAnimation=__shouldTrackContentAnimation - In the implementation block
@property (assign,setter=_setContentAnimating:,nonatomic) BOOL _isContentAnimating;                                                        //@synthesize _isContentAnimating=__isContentAnimating - In the implementation block
@property (assign,setter=_setContentCenter:,nonatomic) CGPoint _contentCenter;                                                             //@synthesize _contentCenter=__contentCenter - In the implementation block
@property (assign,setter=_setContentZoomScale:,nonatomic) double _contentZoomScale;                                                        //@synthesize _contentZoomScale=__contentZoomScale - In the implementation block
@property (assign,setter=_setAnimatingZoomEnd:,nonatomic) BOOL _isAnimatingZoomEnd;                                                        //@synthesize _isAnimatingZoomEnd=__isAnimatingZoomEnd - In the implementation block
@property (assign,setter=_setNumberOfNestedStateChanges:,nonatomic) long long _numberOfNestedStateChanges;                                 //@synthesize _numberOfNestedStateChanges=__numberOfNestedStateChanges - In the implementation block
@property (assign,setter=_setUpdatingState:,nonatomic) BOOL _isUpdatingState;                                                              //@synthesize _isUpdatingState=__isUpdatingState - In the implementation block
@property (assign,setter=_setWasUserInteractingBeforeStateUpdate:,nonatomic) BOOL _wasUserInteractingBeforeStateUpdate;                    //@synthesize _wasUserInteractingBeforeStateUpdate=__wasUserInteractingBeforeStateUpdate - In the implementation block
@property (assign,setter=_setNeedsUpdateUserPanningOrDecelerating:,nonatomic) BOOL _needsUpdateUserPanningOrDecelerating;                  //@synthesize _needsUpdateUserPanningOrDecelerating=__needsUpdateUserPanningOrDecelerating - In the implementation block
@property (assign,setter=_setNeedsUpdateUserZoomingOrBouncing:,nonatomic) BOOL _needsUpdateUserZoomingOrBouncing;                          //@synthesize _needsUpdateUserZoomingOrBouncing=__needsUpdateUserZoomingOrBouncing - In the implementation block
@property (assign,setter=_setNeedsUpdateUserInteracting:,nonatomic) BOOL _needsUpdateUserInteracting;                                      //@synthesize _needsUpdateUserInteracting=__needsUpdateUserInteracting - In the implementation block
@property (assign,setter=_setNeedsUpdateShouldTrackContentAnimation:,nonatomic) BOOL _needsUpdateShouldTrackContentAnimation;              //@synthesize _needsUpdateShouldTrackContentAnimation=__needsUpdateShouldTrackContentAnimation - In the implementation block
@property (assign,setter=_setNeedsUpdateUserAffineTransform:,nonatomic) BOOL _needsUpdateUserAffineTransform;                              //@synthesize _needsUpdateUserAffineTransform=__needsUpdateUserAffineTransform - In the implementation block
@property (assign,setter=_setNeedsUpdateContentState:,nonatomic) BOOL _needsUpdateContentState;                                            //@synthesize _needsUpdateContentState=__needsUpdateContentState - In the implementation block
@property (assign,setter=_setNeedsUpdateAnimatingZoomEnd:,nonatomic) BOOL _needsUpdateAnimatingZoomEnd;                                    //@synthesize _needsUpdateAnimatingZoomEnd=__needsUpdateAnimatingZoomEnd - In the implementation block
@property (setter=_setDisplayLink:,nonatomic,retain) CADisplayLink * _displayLink;                                                         //@synthesize _displayLink=__displayLink - In the implementation block
@property (assign,setter=_setDesiredZoomScale:,nonatomic) double _desiredZoomScale;                                                        //@synthesize _desiredZoomScale=__desiredZoomScale - In the implementation block
@property (assign,setter=_setPreferredMinimumZoomScale:,nonatomic) double _preferredMinimumZoomScale;                                      //@synthesize _preferredMinimumZoomScale=__preferredMinimumZoomScale - In the implementation block
@property (assign,setter=_setPreferredMaximumZoomScale:,nonatomic) double _preferredMaximumZoomScale;                                      //@synthesize _preferredMaximumZoomScale=__preferredMaximumZoomScale - In the implementation block
@property (assign,setter=_setNumberOfNestedZoomAndScrollChanges:,nonatomic) long long _numberOfNestedZoomAndScrollChanges;                 //@synthesize _numberOfNestedZoomAndScrollChanges=__numberOfNestedZoomAndScrollChanges - In the implementation block
@property (assign,setter=_setNeedsUpdateZoomAndScroll:,nonatomic) BOOL _needsUpdateZoomAndScroll;                                          //@synthesize _needsUpdateZoomAndScroll=__needsUpdateZoomAndScroll - In the implementation block
@property (assign,setter=_setNeedsUpdateScrollView:,nonatomic) BOOL _needsUpdateScrollView;                                                //@synthesize _needsUpdateScrollView=__needsUpdateScrollView - In the implementation block
@property (nonatomic,retain) UIImage * debugScrollViewContentImage;                                                                        //@synthesize debugScrollViewContentImage=_debugScrollViewContentImage - In the implementation block
@property (assign,nonatomic,__weak) id<PUUserTransformViewDelegate> delegate;                                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize contentPixelSize;                                                                                      //@synthesize contentPixelSize=_contentPixelSize - In the implementation block
@property (assign,nonatomic) CGRect untransformedContentFrame;                                                                             //@synthesize untransformedContentFrame=_untransformedContentFrame - In the implementation block
@property (assign,nonatomic) CGAffineTransform userAffineTransform;                                                                        //@synthesize userAffineTransform=_userAffineTransform - In the implementation block
@property (assign,nonatomic) unsigned long long enabledInteractions;                                                                       //@synthesize enabledInteractions=_enabledInteractions - In the implementation block
@property (assign,nonatomic) CGSize scrollPadding;                                                                                         //@synthesize scrollPadding=_scrollPadding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleDisplayLink:(id)arg1 ;
-(UIScrollView *)_scrollView;
-(void)_setPreferredMinimumZoomScale:(double)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_needsUpdateUserInteracting;
-(void)_setDesiredZoomScale:(double)arg1 ;
-(BOOL)_isUserDeceleratingPan;
-(void)_setUserPanningOrDecelerating:(BOOL)arg1 ;
-(void)handleDoubleTapWithLocationProvider:(id)arg1 ;
-(BOOL)_needsUpdateShouldTrackContentAnimation;
-(void)_updateAnimatingZoomEndIfNeeded;
-(void)_setNeedsUpdateZoomAndScroll:(BOOL)arg1 ;
-(void)_setUserZooming:(BOOL)arg1 ;
-(void)_updateUserInteractingIfNeeded;
-(void)_setNumberOfNestedStateChanges:(long long)arg1 ;
-(double)_preferredMaximumZoomScale;
-(void)setContentPixelSize:(CGSize)arg1 ;
-(void)_setPreferredMaximumZoomScale:(double)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)_updateUserAffineTransformIfNeeded;
-(CGRect)untransformedContentFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_isUserEndingZoom;
-(void)_setContentZoomScale:(double)arg1 ;
-(void)_setDoubleTapZoomScale:(double)arg1 ;
-(UIEdgeInsets)_contentInsetsForContentScale:(double)arg1 ;
-(void)_setNeedsUpdateAnimatingZoomEnd:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)_setUserPanning:(BOOL)arg1 ;
-(UIImage *)debugScrollViewContentImage;
-(void)_setNeedsUpdateUserAffineTransform:(BOOL)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)_needsUpdateUserZoomingOrBouncing;
-(void)_setUserInteracting:(BOOL)arg1 ;
-(void)_updateDisplayLink;
-(BOOL)_needsUpdateZoomAndScroll;
-(void)_setNeedsUpdateUserZoomingOrBouncing:(BOOL)arg1 ;
-(CGAffineTransform)userAffineTransform;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)_setNeedsUpdateScrollView:(BOOL)arg1 ;
-(void)setDebugScrollViewContentImage:(UIImage *)arg1 ;
-(void)_setUpdatingState:(BOOL)arg1 ;
-(void)_setNeedsUpdateShouldTrackContentAnimation:(BOOL)arg1 ;
-(void)_performStateChanges:(/*^block*/id)arg1 ;
-(void)_assertInsideStateUpdate;
-(long long)_numberOfNestedStateChanges;
-(void)_setContentAnimating:(BOOL)arg1 ;
-(CADisplayLink *)_displayLink;
-(void)_updateUserZoomingOrBouncingIfNeeded;
-(void)_updateScrollViewIfNeeded;
-(void)_updateZoomAndScrollIfNeeded;
-(BOOL)_needsUpdateUserPanningOrDecelerating;
-(void)_setNeedsUpdateUserInteracting:(BOOL)arg1 ;
-(void)_setUserEndingZoom:(BOOL)arg1 ;
-(void)_performZoomAndScrollChanges:(/*^block*/id)arg1 ;
-(UIView *)_scrollContentView;
-(void)_updateUserPanningOrDeceleratingIfNeeded;
-(BOOL)_isUserPanning;
-(void)setDelegate:(id<PUUserTransformViewDelegate>)arg1 ;
-(BOOL)_shouldTrackContentAnimation;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)_invalidateUserInteracting;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(CGPoint)_contentOffsetAdjustmentForContentInsets:(UIEdgeInsets)arg1 ;
-(BOOL)contentContainsLocationFromProvider:(id)arg1 ;
-(void)_invalidateAnimatingZoomEnd;
-(void)_invalidateUserZoomingOrBouncing;
-(BOOL)_isUpdatingState;
-(double)_contentZoomScale;
-(void)_invalidateContentState;
-(void)_setNeedsUpdateContentState:(BOOL)arg1 ;
-(BOOL)_needsUpdateUserAffineTransform;
-(void)_assertInsideZoomAndScrollChangeBlock;
-(void)_setAnimatingZoomEnd:(BOOL)arg1 ;
-(void)_setNeedsUpdateUserPanningOrDecelerating:(BOOL)arg1 ;
-(void)setUserAffineTransform:(CGAffineTransform)arg1 ;
-(void)setScrollPadding:(CGSize)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<PUUserTransformViewDelegate>)delegate;
-(BOOL)_needsUpdateAnimatingZoomEnd;
-(void)_updateShouldTrackContentAnimationIfNeeded;
-(void)_willChangeState;
-(void)_updateStateIfNeeded;
-(BOOL)_needsStateUpdate;
-(CGSize)scrollPadding;
-(CGPoint)_contentCenter;
-(void)_setContentCenter:(CGPoint)arg1 ;
-(void)setUntransformedContentFrame:(CGRect)arg1 ;
-(BOOL)_isAnimatingZoomEnd;
-(CGSize)contentPixelSize;
-(BOOL)_isUpdatingScrollView;
-(void)_didChangeState;
-(BOOL)_needsUpdateContentState;
-(void)_setWasUserInteractingBeforeStateUpdate:(BOOL)arg1 ;
-(BOOL)_isContentAnimating;
-(void)_setDisplayLink:(id)arg1 ;
-(long long)_numberOfNestedZoomAndScrollChanges;
-(unsigned long long)enabledInteractions;
-(BOOL)_isUserZoomingOrBouncing;
-(void)_invalidateUserAffineTransform;
-(BOOL)_isUserZooming;
-(void)_setUpdatingScrollView:(BOOL)arg1 ;
-(void)_setNumberOfNestedZoomAndScrollChanges:(long long)arg1 ;
-(double)_preferredMinimumZoomScale;
-(void)_setShouldTrackContentAnimation:(BOOL)arg1 ;
-(void)_invalidateZoomAndScroll;
-(void)_setUserDeceleratingPan:(BOOL)arg1 ;
-(void)_setEnabledInteractions:(unsigned long long)arg1 ;
-(void)_setUserZoomingOrBouncing:(BOOL)arg1 ;
-(void)_invalidateShouldTrackContentAnimation;
-(double)_desiredZoomScale;
-(BOOL)isUserInteracting;
-(void)_invalidateScrollView;
-(void)_setNeedsStateUpdate;
-(BOOL)_wasUserInteractingBeforeStateUpdate;
-(void)_updateContentStateIfNeeded;
-(void)_setUserAffineTransform:(CGAffineTransform)arg1 ;
-(BOOL)_needsUpdateScrollView;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)setEnabledInteractions:(unsigned long long)arg1 ;
-(void)_invalidateUserPanningOrDecelerating;
-(BOOL)_isUserPanningOrDecelerating;
-(void)_assertInsideStateChangeBlock;
-(double)_doubleTapZoomScale;
@end

