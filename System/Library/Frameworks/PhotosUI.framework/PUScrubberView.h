/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PUTilingViewTileSource.h>
#import <libobjc.A.dylib/PUTilingViewTileTransitionDelegate.h>
#import <libobjc.A.dylib/PUTilingViewScrollDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUScrubberTilingLayoutDelegate.h>
#import <libobjc.A.dylib/PXVideoScrubberControllerDelegate.h>
#import <libobjc.A.dylib/PUPlaybackTimeIndicatorTileViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PUScrubberViewDelegate;
@class NSString, PUTouchingGestureRecognizer, NSMutableDictionary, PUBrowsingSession, PUScrubberTilingLayout, PUTilingView, UITapGestureRecognizer, PXVideoScrubberController, NSIndexPath, UIScrollView;

@interface PUScrubberView : UIView <PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, UIScrollViewDelegate, PUBrowsingViewModelChangeObserver, PUScrubberTilingLayoutDelegate, PXVideoScrubberControllerDelegate, PUPlaybackTimeIndicatorTileViewControllerDelegate, UIGestureRecognizerDelegate> {

	NSString* _scrubbingIdentifier;
	NSString* _contentScrubbingIdentifier;
	NSString* _transitionLayoutIdentifier;
	BOOL _loupeEffectIsValid;
	BOOL _snapToExpandedIsValid;
	BOOL _scrubberLayoutIsValid;
	BOOL _scrubberLayoutNeedsTransition;
	PUTouchingGestureRecognizer* _touchingGestureRecognizer;
	NSMutableDictionary* _aspectRatioByIndexPath;
	SCD_Struct_PU16 _delegateFlags;
	BOOL _isForPreview;
	BOOL __isHandlingUserScroll;
	BOOL __isScrubbingAwayFromContentEdge;
	BOOL __scrollViewSettled;
	BOOL __useLoupe;
	BOOL __thinLoupe;
	BOOL __useSmoothingTransitionCoordinator;
	BOOL __snapToExpandedItem;
	BOOL __isHandlingScrollViewWillEndDragging;
	BOOL _currentDragBeganOnContent;
	PUBrowsingSession* _browsingSession;
	long long _type;
	id<PUScrubberViewDelegate> _delegate;
	PUScrubberTilingLayout* __scrubberLayout;
	PUTilingView* __tilingView;
	UITapGestureRecognizer* __tapGestureRecognizer;
	PXVideoScrubberController* __videoScrubberController;
	long long __expandedItemType;
	NSIndexPath* __decelerationTargetIndexPath;
	double __decelerationDistance;
	long long __layoutTransitionsDisabledCount;
	double __scrubbingTransitionProgress;
	CGPoint __decelerationTargetOffset;

}

@property (setter=_setScrubberLayout:,nonatomic,retain) PUScrubberTilingLayout * _scrubberLayout;                                   //@synthesize _scrubberLayout=__scrubberLayout - In the implementation block
@property (setter=_setTilingView:,nonatomic,retain) PUTilingView * _tilingView;                                                     //@synthesize _tilingView=__tilingView - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _tapGestureRecognizer;                                                      //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (setter=_setVideoScrubberController:,nonatomic,retain) PXVideoScrubberController * _videoScrubberController;              //@synthesize _videoScrubberController=__videoScrubberController - In the implementation block
@property (assign,setter=_setExpandedItemType:,nonatomic) long long _expandedItemType;                                              //@synthesize _expandedItemType=__expandedItemType - In the implementation block
@property (assign,setter=_setIsHandlingUserScroll:,nonatomic) BOOL _isHandlingUserScroll;                                           //@synthesize _isHandlingUserScroll=__isHandlingUserScroll - In the implementation block
@property (assign,setter=_setScrubbingAwayFromContentEdge:,nonatomic) BOOL _isScrubbingAwayFromContentEdge;                         //@synthesize _isScrubbingAwayFromContentEdge=__isScrubbingAwayFromContentEdge - In the implementation block
@property (assign,setter=_setScrollViewSettled:,nonatomic) BOOL _scrollViewSettled;                                                 //@synthesize _scrollViewSettled=__scrollViewSettled - In the implementation block
@property (assign,setter=_setUseLoupe:,nonatomic) BOOL _useLoupe;                                                                   //@synthesize _useLoupe=__useLoupe - In the implementation block
@property (assign,setter=_setThinLoupe:,nonatomic) BOOL _thinLoupe;                                                                 //@synthesize _thinLoupe=__thinLoupe - In the implementation block
@property (assign,setter=_setUseSmoothingTransitionCoordinator:,nonatomic) BOOL _useSmoothingTransitionCoordinator;                 //@synthesize _useSmoothingTransitionCoordinator=__useSmoothingTransitionCoordinator - In the implementation block
@property (assign,setter=_setSnapToExpandedItem:,nonatomic) BOOL _snapToExpandedItem;                                               //@synthesize _snapToExpandedItem=__snapToExpandedItem - In the implementation block
@property (setter=_setDecelerationTargetIndexPath:,nonatomic,retain) NSIndexPath * _decelerationTargetIndexPath;                    //@synthesize _decelerationTargetIndexPath=__decelerationTargetIndexPath - In the implementation block
@property (assign,setter=_setDecelerationTargetOffset:,nonatomic) CGPoint _decelerationTargetOffset;                                //@synthesize _decelerationTargetOffset=__decelerationTargetOffset - In the implementation block
@property (assign,setter=_setDecelerationDistance:,nonatomic) double _decelerationDistance;                                         //@synthesize _decelerationDistance=__decelerationDistance - In the implementation block
@property (assign,setter=_setLayoutTransitionsDisabledCount:,nonatomic) long long _layoutTransitionsDisabledCount;                  //@synthesize _layoutTransitionsDisabledCount=__layoutTransitionsDisabledCount - In the implementation block
@property (assign,setter=_setScrubbingTransitionProgress:,nonatomic) double _scrubbingTransitionProgress;                           //@synthesize _scrubbingTransitionProgress=__scrubbingTransitionProgress - In the implementation block
@property (assign,setter=_setHandlingScrollViewWillEndDragging:,nonatomic) BOOL _isHandlingScrollViewWillEndDragging;               //@synthesize _isHandlingScrollViewWillEndDragging=__isHandlingScrollViewWillEndDragging - In the implementation block
@property (getter=_areLayoutTransitionsDisabled,nonatomic,readonly) BOOL _layoutTransitionsDisabled; 
@property (assign,nonatomic) BOOL currentDragBeganOnContent;                                                                        //@synthesize currentDragBeganOnContent=_currentDragBeganOnContent - In the implementation block
@property (nonatomic,retain) PUBrowsingSession * browsingSession;                                                                   //@synthesize browsingSession=_browsingSession - In the implementation block
@property (assign,nonatomic) long long type;                                                                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<PUScrubberViewDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double topOutset; 
@property (nonatomic,readonly) UIScrollView * scrollViewForPreviewing; 
@property (assign,nonatomic) BOOL isForPreview;                                                                                     //@synthesize isForPreview=_isForPreview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBrowsingSession:(PUBrowsingSession *)arg1 ;
-(PUBrowsingSession *)browsingSession;
-(void)_setScrubbingAwayFromContentEdge:(BOOL)arg1 ;
-(void)videoScrubberController:(id)arg1 desiredSeekTime:(SCD_Struct_PH4)arg2 ;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4 ;
-(BOOL)_isContentScrubbing;
-(void)videoScrubberControllerDidUpdate:(id)arg1 ;
-(BOOL)_isScrubbingAwayFromContentEdge;
-(BOOL)_allowExitFromContentScrubbing;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(double)_decelerationDistance;
-(void)_handleTapOnBrowsingVideoPlayer:(id)arg1 ;
-(CGPoint)tilingView:(id)arg1 initialVisibleOriginWithLayout:(id)arg2 ;
-(void)_endScrubbing;
-(BOOL)_scrollViewSettled;
-(id)_expandedAssetReference;
-(void)_setDecelerationDistance:(double)arg1 ;
-(void)_setUseLoupe:(BOOL)arg1 ;
-(void)_setScrubberLayout:(id)arg1 ;
-(NSIndexPath *)_decelerationTargetIndexPath;
-(void)_setTilingView:(id)arg1 ;
-(BOOL)_isLibraryScrubbing;
-(id)_currentAssetsDataSource;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)_setNeedsUpdate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setDecelerationTargetOffset:(CGPoint)arg1 ;
-(void)_handleTapOnBrowsingIrisPlayer:(id)arg1 ;
-(void)_updateScrubbingAwayFromContentEdgeBeganDragging:(BOOL)arg1 ;
-(CGPoint)tilingView:(id)arg1 targetVisibleOriginForProposedVisibleOrigin:(CGPoint)arg2 withLayout:(id)arg3 ;
-(void)_disableLayoutTransitionsForDuration:(double)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(double)_lengthForDuration:(double)arg1 ;
-(double)topOutset;
-(BOOL)_isHandlingScrollViewWillEndDragging;
-(void)setCurrentDragBeganOnContent:(BOOL)arg1 ;
-(void)_invalidateSnapToExpandedItem;
-(void)layoutSubviews;
-(void)_setThinLoupe:(BOOL)arg1 ;
-(void)_updateLoupeEffectIfNeeded;
-(void)_reenableLayoutTransitions;
-(void)_invalidateScrubberLayout;
-(BOOL)_snapToExpandedItem;
-(void)updateIfNeeded;
-(void)_setVideoScrubberController:(id)arg1 ;
-(void)_invalidateLoupeEffect;
-(void)_setHandlingScrollViewWillEndDragging:(BOOL)arg1 ;
-(double)_scrubbingTransitionProgress;
-(void)_updateTilingViewIfNeeded;
-(void)beginPreviewing;
-(BOOL)_thinLoupe;
-(double)_playheadProgressForIrisAssetReference:(id)arg1 ;
-(id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4 ;
-(BOOL)isForPreview;
-(BOOL)layout:(id)arg1 shouldShowTimeIndicatorForExpandedItemAtIndexPath:(id)arg2 ;
-(void)_setLayoutTransitionsDisabledCount:(long long)arg1 ;
-(long long)type;
-(double)videoScrubberController:(id)arg1 lengthForDuration:(double)arg2 ;
-(void)setDelegate:(id<PUScrubberViewDelegate>)arg1 ;
-(void)_updateScrubberLayoutIfNeeded;
-(PUScrubberTilingLayout *)_scrubberLayout;
-(BOOL)_useSmoothingTransitionCoordinator;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(double)_expandedItemWidth;
-(void)_setScrollViewSettled:(BOOL)arg1 ;
-(BOOL)_useLoupe;
-(void)setType:(long long)arg1 ;
-(void)_setSnapToExpandedItem:(BOOL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)handleTouchGesture:(id)arg1 ;
-(id<PUScrubberViewDelegate>)delegate;
-(long long)_expandedItemType;
-(float)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2 ;
-(void)_setScrubbingTransitionProgress:(double)arg1 ;
-(UITapGestureRecognizer *)_tapGestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_handleTap:(id)arg1 ;
-(CGPoint)_decelerationTargetOffset;
-(BOOL)_areLayoutTransitionsDisabled;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg2 ;
-(void)_handleUserScrollWillBegin:(BOOL)arg1 ;
-(PUTilingView *)_tilingView;
-(id)_newScrubberLayout;
-(void)_updateScrollPositionAnimated:(BOOL)arg1 ;
-(BOOL)_isHandlingUserScroll;
-(id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 ;
-(void)_updateSnapToExpandedItemIfNeeded;
-(long long)_layoutTransitionsDisabledCount;
-(void)_setUseSmoothingTransitionCoordinator:(BOOL)arg1 ;
-(void)endPreviewing;
-(UIScrollView *)scrollViewForPreviewing;
-(void)cancelDeceleration;
-(BOOL)_isDrivingPlayheadProgress;
-(BOOL)currentDragBeganOnContent;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_invalidateScrubberLayoutEnsureTransition;
-(PXVideoScrubberController *)_videoScrubberController;
-(void)_setDecelerationTargetIndexPath:(id)arg1 ;
-(void)setIsForPreview:(BOOL)arg1 ;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(CGRect)arg2 toFrame:(CGRect)arg3 duration:(double)arg4 ;
-(BOOL)playbackTimeIndicatorTileViewControllerCanFlashIndicator:(id)arg1 ;
-(void)_setExpandedItemType:(long long)arg1 ;
-(void)_setIsHandlingUserScroll:(BOOL)arg1 ;
@end

