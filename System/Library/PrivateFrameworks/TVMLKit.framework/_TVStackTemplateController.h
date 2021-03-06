/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVStackCommonTemplateController.h>
#import <TVMLKit/_TVStackViewDelegateFlowLayout.h>
#import <TVMLKit/TVTabBarAdjusting.h>
#import <TVMLKit/TVShowcasing.h>

@class NSArray, IKChangeSet, NSMutableArray, NSIndexPath, _TVNeedsMoreContentEvaluator, UIViewController, UIView, NSString;

@interface _TVStackTemplateController : _TVStackCommonTemplateController <_TVStackViewDelegateFlowLayout, TVTabBarAdjusting, TVShowcasing> {

	NSArray* _unfilteredViewControllers;
	IKChangeSet* _filteredChangeSet;
	NSArray* _viewControllers;
	NSMutableArray* _preloadQueue;
	NSArray* _stackSections;
	NSArray* _stackRows;
	double _contentHeight;
	double _showcaseFactor;
	NSIndexPath* _lastFocusedIndexPath;
	_TVNeedsMoreContentEvaluator* _needsMoreContentEvaluator;
	UIViewController* _backdropTintViewController;
	UIView* _backdropTintView;
	BOOL _requiresShowcasing;
	BOOL _shouldInvalidateMetrics;
	struct {
		BOOL _preloadingScheduled;
	}  _flags;
	double _showcaseInset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double showcaseFactor; 
@property (assign,nonatomic) double showcaseInset;                  //@synthesize showcaseInset=_showcaseInset - In the implementation block
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)viewControllers;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)init;
-(long long)numberOfCollections;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)showcaseFactor;
-(void)showcaseFactorDidChange;
-(id)scrollStopForShowcaseTransition;
-(id)scrollStopForEnteringSectionAtIndex:(long long)arg1 fromEdge:(long long)arg2 ;
-(BOOL)shouldAdjustForTabBarSafeAreaInsets;
-(void)_configureBackgroundTintView;
-(void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(CGPoint*)arg2 ;
-(void)_buildStackSections;
-(void)_updateBackgroundTintView;
-(void)_updateBackgroundTintViewEffects;
-(double)_maxViewWidth;
-(CGSize)_maxContentSize;
-(void)_updateFirstItemRowIndexes;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForSectionAtIndex:(long long)arg3 ;
-(void)collectionView:(id)arg1 showcaseFactorDidChangeForLayout:(id)arg2 ;
-(void)updateCollectionViewControllersAndForceReload:(BOOL)arg1 ;
-(void)updateBackgroundAndBackdrop;
-(void)updateBackgroundAndBackdropMaskFactor;
-(void)didUpdateSupplementarySectionInfo;
-(void)_scrollToTopAnimated:(BOOL)arg1 ;
-(double)showcaseInset;
-(void)setShowcaseInset:(double)arg1 ;
-(void)mediaInfoDidChange;
-(void)_invalidateSectionMetricsIfNeeded;
-(double)_offsetToScrollStop:(id)arg1 ;
-(id)_updateWithCollectionListElement:(id)arg1 commits:(/*^block*/id*)arg2 autoHighlightIndexPath:(id*)arg3 ;
-(UIEdgeInsets)_scrollableBoundsInset;
-(void)_scheduleNextPreloadConditional;
-(void)_preloadNext;
-(BOOL)_didExtendContentForPeekMetrics:(SCD_Struct_TV19*)arg1 above:(BOOL)arg2 initial:(BOOL)arg3 ;
-(void)didUpdateSectionInfo;
-(id)tabBarObservedScrollView;
@end

