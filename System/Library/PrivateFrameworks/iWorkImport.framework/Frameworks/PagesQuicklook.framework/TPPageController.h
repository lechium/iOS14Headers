/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <libobjc.A.dylib/TPPageLayoutInfoProvider.h>
#import <libobjc.A.dylib/TSKChangeSourceObserver.h>
#import <libobjc.A.dylib/TSWPLayoutOwner.h>

@protocol TPPageControllerDelegate, TPPageControllerObserver;
@class _TtC14PagesQuicklook17TPPageLayoutCache, _TtC14PagesQuicklook17TPPaginationState, TPPageControllerCanvasDelegate, TPFootnoteLayoutController, NSMutableArray, TSUMutablePointerSet, TSWPLayoutMetricsCache, TPTextFlowLayoutController, TPTextWrapController, TPDocumentRoot, TSWPLayoutManager, NSString, NSArray;

@interface TPPageController : NSObject <TPPageLayoutInfoProvider, TSKChangeSourceObserver, TSWPLayoutOwner> {

	Ai _isScrolling;
	Ai _isZooming;
	BOOL _isObservingNotifications;
	_TtC14PagesQuicklook17TPPageLayoutCache* _pageLayoutCache;
	_TtC14PagesQuicklook17TPPaginationState* _paginationState;
	_TtC14PagesQuicklook17TPPaginationState* _cachedPaginationState;
	TPPageControllerCanvasDelegate* _offscreenSearchDelegate;
	TPFootnoteLayoutController* _footnoteLayoutController;
	BOOL _checkedForBackUp;
	NSMutableArray* _pageGeneratorStack;
	unsigned long long _lastKnownPageCount;
	unsigned long long _completePageCount;
	BOOL _shouldUpdatePageCount;
	BOOL _bodyLayoutInvalidated;
	unsigned long long _didLayOutPageIndex;
	unsigned long long _currentPageBeingLaidOut;
	TSUMutablePointerSet* _layoutObservers;
	TSWPLayoutMetricsCache* _bodyLayoutMetricsCache;
	TPTextFlowLayoutController* _flowController;
	TPTextWrapController* _wrapController;
	BOOL _textLayoutMustIncludeAdornments;
	double _horizontalGapBetweenPages;
	double _verticalGapBetweenPages;
	unsigned long long _pageHeightCount;
	BOOL _layoutInvalidationPending;
	BOOL _isPaginating;
	BOOL _allowParagraphMetrics;
	TPDocumentRoot* _documentRoot;
	id<TPPageControllerDelegate> _delegate;
	id<TPPageControllerObserver> _observer;
	TSWPLayoutManager* _bodyLayoutManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isPaginating; 
@property (nonatomic,readonly) TPTextWrapController * d_wrapController; 
@property (assign,nonatomic) BOOL isPaginating;                                                                        //@synthesize isPaginating=_isPaginating - In the implementation block
@property (assign,nonatomic) BOOL allowParagraphMetrics;                                                               //@synthesize allowParagraphMetrics=_allowParagraphMetrics - In the implementation block
@property (assign,nonatomic,__weak) TPDocumentRoot * documentRoot;                                                     //@synthesize documentRoot=_documentRoot - In the implementation block
@property (nonatomic,__weak,readonly) id<TPPageControllerDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TPPageControllerObserver> observer;                                             //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) TSWPLayoutManager * bodyLayoutManager;                                                  //@synthesize bodyLayoutManager=_bodyLayoutManager - In the implementation block
@property (assign,getter=textLayoutMustIncludeAdornments,nonatomic) BOOL textLayoutMustIncludeAdornments;              //@synthesize textLayoutMustIncludeAdornments=_textLayoutMustIncludeAdornments - In the implementation block
@property (nonatomic,readonly) NSArray * numberOfPagesInEachSection; 
@property (nonatomic,readonly) unsigned long long firstPageIndexNeedingLayout; 
@property (nonatomic,readonly) unsigned long long pageCount;                                                           //@synthesize lastKnownPageCount=_lastKnownPageCount - In the implementation block
@property (nonatomic,readonly) unsigned long long lastLaidOutDocumentPageIndex; 
@property (nonatomic,readonly) BOOL isPageLayoutRightToLeft; 
@property (nonatomic,readonly) double horizontalPageSeparation; 
@property (nonatomic,readonly) double verticalPageSeparation; 
-(void)removeLayoutObserver:(id)arg1 ;
-(void)addLayoutObserver:(id)arg1 ;
-(double)footerHeight;
-(void)dealloc;
-(TPDocumentRoot *)documentRoot;
-(void)teardown;
-(CGSize)pageSize;
-(id)initWithDelegate:(id)arg1 ;
-(void)setObserver:(id<TPPageControllerObserver>)arg1 ;
-(id<TPPageControllerDelegate>)delegate;
-(id<TPPageControllerObserver>)observer;
-(double)headerHeight;
-(unsigned long long)pageCount;
-(void)setDocumentRoot:(TPDocumentRoot *)arg1 ;
-(id)textWrapper;
-(void)canvasDidValidateLayouts:(id)arg1 ;
-(BOOL)caresAboutStorageChanges;
-(void)layoutManagerNeedsLayout:(id)arg1 ;
-(void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3 ;
-(BOOL)textLayoutMustIncludeAdornments;
-(void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(id)pageInfoForPageIndex:(unsigned long long)arg1 ;
-(id)p_pageInfoForPageAtIndex:(unsigned long long)arg1 ;
-(id)i_columnPriorToPageIndex:(unsigned long long)arg1 ;
-(id)i_topicHintsPriorToPageIndex:(unsigned long long)arg1 ;
-(id)i_columnAfterPageIndex:(unsigned long long)arg1 ;
-(id)i_topicHintsAfterPageIndex:(unsigned long long)arg1 ;
-(id)i_firstChildHintAfterPageIndex:(unsigned long long)arg1 ;
-(id)i_pageHintForPageIndex:(unsigned long long)arg1 ;
-(void)i_inflateColumnsInBodyLayout:(id)arg1 ;
-(BOOL)isPaginationComplete;
-(unsigned long long)firstPageIndexNeedingLayout;
-(void)i_invalidatePageIndex:(unsigned long long)arg1 ;
-(void)i_unregisterPageLayout:(id)arg1 ;
-(void)i_registerPageLayout:(id)arg1 ;
-(NSRange)footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 ;
-(void)i_inflateFootnotesInFootnoteContainer:(id)arg1 ;
-(void)i_invalidateFlows:(id)arg1 startingPage:(id)arg2 ;
-(id)i_flowLayoutController;
-(void)accquireLockAndPerformAction:(/*^block*/id)arg1 ;
-(BOOL)canProvideInfoForPageIndex:(unsigned long long)arg1 ;
-(id)headerFooterProviderForPageIndex:(unsigned long long)arg1 ;
-(id)masterDrawableProviderForPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)contentFlagsForPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageCountForPageIndex:(unsigned long long)arg1 ;
-(BOOL)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1 ;
-(id)backgroundFillForPageIndex:(unsigned long long)arg1 ;
-(double)verticalPageSeparation;
-(CGPoint)pageOriginForPageIndex:(unsigned long long)arg1 allowAfterPaginationPoint:(BOOL)arg2 ;
-(void)i_rebuildCachedLayoutChildrenFromStartPage:(unsigned long long)arg1 toEndPage:(unsigned long long)arg2 setNeedsLayout:(BOOL)arg3 ;
-(void)didLayoutChangingDirtyRanges;
-(id)metricsCacheForStorage:(id)arg1 ;
-(void)paginateThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2 ;
-(void)i_trimPageAtIndex:(unsigned long long)arg1 toCharIndex:(unsigned long long)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4 ;
-(void)paginateThroughPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)lastLaidOutDocumentPageIndex;
-(CGRect)pageRectForPageIndex:(unsigned long long)arg1 allowAfterPaginationPoint:(BOOL)arg2 ;
-(NSRange)bodyRangeForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 ;
-(id)p_paginationState;
-(BOOL)isPaginating;
-(id)i_pageIndexPathForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3 ;
-(id)p_sectionAtSectionIndex:(unsigned long long)arg1 ;
-(id)p_pageMasterForPageIndex:(unsigned long long)arg1 inSection:(id)arg2 sectionHint:(id)arg3 ;
-(id)p_sectionHintForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3 ;
-(BOOL)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1 ;
-(NSRange)p_rangeOfContinuousSectionsAtPageIndex:(unsigned long long)arg1 startPage:(unsigned long long*)arg2 ;
-(unsigned long long)pageIndexForCharIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 ;
-(id)displayPageNumberForPageIndex:(unsigned long long)arg1 ;
-(id)pageNumberFormatForSectionOnPageIndex:(unsigned long long)arg1 ;
-(id)p_pageHintForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3 ;
-(id)sectionForPageIndex:(unsigned long long)arg1 ;
-(id)displayPageNumberForCharIndex:(unsigned long long)arg1 ;
-(BOOL)isSectionInfo:(id)arg1 onPage:(unsigned long long)arg2 ;
-(void)enumerateHeaderFooterFragmentsOnPageIndex:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSRange)documentPageRangeOfSectionIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 ;
-(double)horizontalPageSeparation;
-(void)p_hasBodyChanged:(id)arg1 ;
-(void)p_destroyBodyLayoutState;
-(void)p_paginateThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2 clearOffscreenInfos:(BOOL)arg3 ;
-(NSRange)p_pageRangeForSelection:(id)arg1 includingEmptyPages:(BOOL)arg2 outEndIsValid:(BOOL*)arg3 forcePagination:(BOOL)arg4 ;
-(unsigned long long)p_pageIndexForCharIndex:(unsigned long long)arg1 includeEmptyPages:(BOOL)arg2 caretAffinity:(int)arg3 forcePagination:(BOOL)arg4 searchAfterPaginationPoint:(BOOL)arg5 ;
-(NSRange)p_bodyRangeForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3 ;
-(NSRange)p_anchoredRangeForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3 ;
-(NSRange)anchoredRangeForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 ;
-(NSRange)p_footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3 ;
-(unsigned long long)p_pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 searchAfterPaginationPoint:(BOOL)arg3 ;
-(unsigned long long)pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 ;
-(unsigned long long)p_pageIndexForFootnoteIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 searchAfterPaginationPoint:(BOOL)arg3 ;
-(NSRange)sectionPageRangeForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 outEndIsValid:(BOOL*)arg3 ;
-(id)p_cachedPageLayoutForPageIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 ;
-(void)withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(/*^block*/id)arg3 ;
-(void)setAllowParagraphMetrics:(BOOL)arg1 ;
-(void)p_withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(/*^block*/id)arg3 ;
-(id)p_pageIndicesForFlow:(id)arg1 withSelection:(id)arg2 forcePagination:(BOOL)arg3 ;
-(BOOL)p_isPaginationComplete;
-(BOOL)okToAnchorDrawables:(id)arg1 toPageIndex:(unsigned long long)arg2 ;
-(BOOL)p_canAnchorDrawable:(id)arg1 toPageLayout:(id)arg2 ;
-(void)withPageLayoutAtIndex:(unsigned long long)arg1 executeBlock:(/*^block*/id)arg2 ;
-(void)p_processBodyLayoutInvalidation;
-(unsigned long long)p_pageHintIndexForCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_pageHintIndexForAnchoredCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_lastValidCharIndex;
-(unsigned long long)p_textPageIndexPrecedingPageIndex:(unsigned long long)arg1 ;
-(void)p_setNeedsLayoutOnPageIndex:(unsigned long long)arg1 ;
-(BOOL)allowParagraphMetrics;
-(unsigned long long)p_firstPageColumn;
-(id)p_pageHintForPageIndexPath:(id)arg1 ;
-(BOOL)isPageLayoutRightToLeft;
-(unsigned long long)calculatePageIndexFromCanvasPoint:(CGPoint)arg1 ;
-(id)p_lastValidPageHint;
-(unsigned long long)pageHeightCountForPageViewState:(long long)arg1 ;
-(void)p_performWithCachedPageLayouts:(/*^block*/id)arg1 ;
-(NSRange)p_pageRangeAffectedByInfo:(id)arg1 ;
-(unsigned long long)p_backupPageIndexForCharIndex:(unsigned long long)arg1 ;
-(void)p_forceRestartPaginationAndResetMetricsCache:(BOOL)arg1 ;
-(void)p_invalidatePageIndex:(unsigned long long)arg1 ;
-(void)p_interruptBackgroundPagination;
-(void)p_notifyObserversDidInvalidate;
-(void)p_removeDeletedFootnotesOnPageLayout:(id)arg1 ;
-(unsigned long long)p_pageIndexContainingIndex:(unsigned long long)arg1 ofType:(unsigned long long)arg2 ;
-(unsigned long long)p_lastValidTextPageIndex;
-(NSRange)pageRangeForSelection:(id)arg1 includingEmptyPages:(BOOL)arg2 outEndIsValid:(BOOL*)arg3 ;
-(id)p_lastValidTextPageHint:(out unsigned long long*)arg1 ;
-(void)p_processWidowsAndInflationForLayoutController:(id)arg1 ;
-(void)p_checkForBackUp;
-(void)p_layOutNextPageForLayoutController:(id)arg1 dirtyRange:(id)arg2 ;
-(BOOL)p_didLayOut;
-(void)p_preparePaginationStateForNextPage;
-(void)p_prepareSectionHintForNextPage;
-(void)p_preparePageHintForNextPage;
-(void)p_notifyObserversWillLayoutWhileSyncing:(BOOL)arg1 ;
-(void)setIsPaginating:(BOOL)arg1 ;
-(void)p_layOutIntoPageLayout:(id)arg1 outDidSync:(out BOOL*)arg2 ;
-(void)p_notifyObserversDidLayoutWhileSyncing:(BOOL)arg1 ;
-(BOOL)p_isBodyLayoutComplete;
-(void)p_syncFromNextPageWithDirtyRanges:(id)arg1 pageTextRange:(const NSRange*)arg2 ;
-(void)p_removeFinishedPageGenerators;
-(void)p_advanceSectionIndex;
-(void)p_layOutTextIntoPageLayout:(id)arg1 didSync:(out BOOL*)arg2 initialFootnoteIndex:(out unsigned long long*)arg3 ;
-(void)p_updateTextHintAtPageIndexPath:(id)arg1 withTarget:(id)arg2 ;
-(void)p_updateNonTextHintAtPageIndexPath:(id)arg1 pageLayout:(id)arg2 ;
-(void)p_layOutFootnotesIntoPageLayout:(id)arg1 ;
-(unsigned long long)p_lastValidFootnoteIndex;
-(void)p_performPaginationResetAndMetricsReset:(BOOL)arg1 ;
-(id)p_textPageHintPrecedingPageIndexPath:(id)arg1 ;
-(id)p_pageHintPrecedingPageIndexPath:(id)arg1 ;
-(id)i_textPageHintPrecedingPageIndex:(inout unsigned long long*)arg1 ;
-(void)p_resetPageGenerators;
-(void)p_updatePageCount;
-(void)backgroundPaginationDidEnd;
-(BOOL)p_layOutNextPageOnceWithOffscreenLayoutController;
-(void)p_invalidateThumbnailsFromSectionIndexToEnd:(unsigned long long)arg1 ;
-(void)restoreFromLayoutState:(id)arg1 ;
-(void)saveIntoLayoutState:(id)arg1 ;
-(NSRange)validPageRangeForSelection:(id)arg1 ;
-(id)anchoredDrawablesOnPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 ;
-(BOOL)pageBeginsWithPaginatedAttachment:(unsigned long long)arg1 ;
-(BOOL)pageEndsWithPaginatedAttachment:(unsigned long long)arg1 ;
-(BOOL)pageAtIndexHasBody:(unsigned long long)arg1 ;
-(unsigned long long)pageIndexForAnchoredAttachment:(id)arg1 forcePagination:(BOOL)arg2 ;
-(unsigned long long)pageIndexForFootnoteIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 ;
-(unsigned long long)sectionIndexForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 ;
-(NSRange)sectionBodyRangeForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 ;
-(unsigned long long)sectionPageIndexForPageIndex:(unsigned long long)arg1 forcePagination:(BOOL)arg2 ;
-(BOOL)pageIndexIsFirstPageOfSection:(unsigned long long)arg1 ;
-(NSArray *)numberOfPagesInEachSection;
-(id)pageIndicesForPartitionableAttachmentAtBodyCharIndex:(unsigned long long)arg1 selectionPath:(id)arg2 forcePagination:(BOOL)arg3 ;
-(BOOL)isPaginationCompleteForSelection:(id)arg1 inFlow:(id)arg2 ;
-(BOOL)isPaginationCompleteThroughPageIndex:(unsigned long long)arg1 ;
-(BOOL)isPaginationInProgress;
-(id)footnoteLayoutController;
-(BOOL)okToAnchorDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2 ;
-(unsigned long long)pageIndexFromCanvasPoint:(CGPoint)arg1 ;
-(CGSize)canvasSizeToFitAllPagesForPageViewState:(long long)arg1 ;
-(void)invalidateAllPageLayoutsSizeAndPosition;
-(unsigned long long)adjacentPageIndexForPageIndex:(unsigned long long)arg1 ;
-(void)p_rebuildPageLayoutsContainingDrawableUUIDs:(id)arg1 ;
-(void)p_setNeedsLayoutFromSectionIndexToEnd:(unsigned long long)arg1 ;
-(BOOL)p_couldBeFirstPageIndex:(unsigned long long)arg1 forPartitionedAttachmentCharIndex:(unsigned long long)arg2 ;
-(id)p_pageInfosForBodySelection:(id)arg1 ;
-(id)p_pageInfosForFlow:(id)arg1 withSelection:(id)arg2 ;
-(void)i_forceRestartPaginationForServer;
-(id)p_textPageHintFollowingPageIndexPath:(id)arg1 ;
-(BOOL)backgroundPaginationWillBegin;
-(BOOL)performBackgroundPagination;
-(void)p_invalidateThumbnailsFromSectionToEnd:(id)arg1 ;
-(void)setTextLayoutMustIncludeAdornments:(BOOL)arg1 ;
-(TSWPLayoutManager *)bodyLayoutManager;
-(void)i_inflateTextFlowsOnPage:(id)arg1 ;
-(void)i_setNeedsDynamicLayoutForLayoutController:(id)arg1 onPageIndex:(unsigned long long)arg2 ;
-(void)d_timePaginationResettingMetrics:(BOOL)arg1 ;
-(TPTextWrapController *)d_wrapController;
@end
