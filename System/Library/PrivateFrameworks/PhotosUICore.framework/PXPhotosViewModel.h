/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXUIKeyCommandNamespace.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXMutablePhotosViewModel.h>

@protocol NSObject, PXPhotosGridOptionsController;
@class NSString, NSNumber, NSSet, PXAssetReference, PXContentFilterState, NSMutableOrderedSet, PXFooterViewModel, NSMutableSet, PXAssetsDataSourceManager, PXSectionedSelectionManager, PXPhotosGridActionManager, PXMediaProvider, PXAssetActionManager, PXAssetCollectionActionManager, PXLoadingStatusManager, PXPhotosLayoutSpecManager, PXAssetsDataSource, PXSelectionSnapshot, PXUpdater, NSOrderedSet;

@interface PXPhotosViewModel : PXObservable <PXUIKeyCommandNamespace, PXAssetsDataSourceManagerObserver, PXMutablePhotosViewModel> {

	long long _footerVisibilityStyle;
	PXFooterViewModel* _footerViewModel;
	NSMutableSet* _enterSelectModePreventedForReasons;
	NSMutableSet* _oneUpPresentationPreventedForReasons;
	NSMutableSet* _aspectRatioTogglePreventedForReasons;
	NSMutableSet* _hideSurroundingContentForReasons;
	BOOL _allowsOneUpPresentation;
	BOOL _allowsAspectFitToggle;
	long long _contentMode;
	BOOL _wantsContentFilterIndicatorVisible;
	id<NSObject> _filterTimeoutObserver;
	NSMutableOrderedSet* _visibleAssetCollections;
	BOOL _keepsTabBarAlwaysHidden;
	BOOL _wantsCPLStatus;
	BOOL _isInSelectMode;
	BOOL _isInCompactMode;
	BOOL _isAppearing;
	BOOL _dismissRequested;
	BOOL _hasScrollableContent;
	BOOL _scrolledToTop;
	BOOL _supportsAspectRatioToggle;
	BOOL _aspectFitContent;
	BOOL _supportsZooming;
	BOOL _isInteractiveZooming;
	BOOL _shouldAnimateZooming;
	BOOL _wantsContentFilterVisible;
	BOOL _wantsFooterVisible;
	BOOL _footerHasImportantInformation;
	BOOL _wantsTabBarVisible;
	BOOL _wantsToolbarVisible;
	BOOL _contentBelowTitle;
	BOOL _showingAlternateContent;
	BOOL _requiresLightTopBars;
	BOOL _viewBasedDecorationsEnabled;
	BOOL _captionsVisible;
	BOOL _wantsDimmedSelectionStyle;
	BOOL _allowsShowDetails;
	BOOL _allowsChromeManagementBehavior;
	BOOL _allowsInlineAddBehavior;
	BOOL _allowsSelectionUserActivityBehavior;
	BOOL _allowsPopOnContainerDeleteBehavior;
	BOOL _allowsEmptyPlaceholderBehavior;
	BOOL _allowsSelectModeToggle;
	BOOL _allowsSelectAllAction;
	BOOL _allowsSlideshowAction;
	BOOL _allowsAddAction;
	BOOL _allowsCopyAction;
	BOOL _allowsSelectSectionAction;
	BOOL _allowsGridAppearanceActions;
	BOOL _allowsShareAllAction;
	BOOL _allowsQuickLookAction;
	BOOL _allowsShowMapAction;
	BOOL _allowsPickAssetAction;
	BOOL _allowsInteractiveFavoriteBadges;
	BOOL _wantsModernNavBarButtons;
	BOOL _lowMemoryMode;
	BOOL _hideFooterInSelectMode;
	BOOL _wantsFloatingTitle;
	BOOL _wantsFooterTransparent;
	PXAssetsDataSourceManager* _dataSourceManager;
	PXSectionedSelectionManager* _selectionManager;
	PXPhotosGridActionManager* _gridActionManager;
	PXMediaProvider* _mediaProvider;
	PXAssetActionManager* _assetActionManager;
	PXAssetCollectionActionManager* _assetCollectionActionManager;
	PXLoadingStatusManager* _loadingStatusManager;
	PXPhotosLayoutSpecManager* _specManager;
	PXAssetsDataSource* _currentDataSource;
	PXSelectionSnapshot* _selectionSnapshot;
	double _headerTitleTopInset;
	NSSet* _draggedAssetReferences;
	PXAssetReference* _dropTargetAssetReference;
	NSNumber* _userWantsAspectFitContent;
	long long _numberOfZoomSteps;
	double _zoomStep;
	PXAssetReference* _zoomAnchorAssetReference;
	double _topBarsAppearanceChangeAnimationDuration;
	NSString* _title;
	NSString* _footerSubtitle;
	unsigned long long _forbiddenBadges;
	id<PXPhotosGridOptionsController> _optionsController;
	long long _navBarStyle;
	double _floatingTitleOpacity;
	PXContentFilterState* _filterState;
	PXUpdater* _updater;

}

@property (nonatomic,readonly) NSString * namespaceIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PXUpdater * updater;                                                        //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) PXSelectionSnapshot * selectionSnapshot;                                      //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (assign,nonatomic) double zoomStep;                                                              //@synthesize zoomStep=_zoomStep - In the implementation block
@property (assign,nonatomic) BOOL isInteractiveZooming;                                                    //@synthesize isInteractiveZooming=_isInteractiveZooming - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateZooming;                                                    //@synthesize shouldAnimateZooming=_shouldAnimateZooming - In the implementation block
@property (nonatomic,retain) PXAssetReference * zoomAnchorAssetReference;                                  //@synthesize zoomAnchorAssetReference=_zoomAnchorAssetReference - In the implementation block
@property (assign,nonatomic) BOOL aspectFitContent;                                                        //@synthesize aspectFitContent=_aspectFitContent - In the implementation block
@property (nonatomic,readonly) BOOL shouldAspectFitContentByDefault; 
@property (assign,nonatomic) BOOL wantsTabBarVisible;                                                      //@synthesize wantsTabBarVisible=_wantsTabBarVisible - In the implementation block
@property (assign,nonatomic) BOOL wantsToolbarVisible;                                                     //@synthesize wantsToolbarVisible=_wantsToolbarVisible - In the implementation block
@property (assign,nonatomic) BOOL wantsFooterVisible;                                                      //@synthesize wantsFooterVisible=_wantsFooterVisible - In the implementation block
@property (assign,nonatomic) BOOL wantsFooterTransparent;                                                  //@synthesize wantsFooterTransparent=_wantsFooterTransparent - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * dataSourceManager;                              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                             //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) PXPhotosGridActionManager * gridActionManager;                              //@synthesize gridActionManager=_gridActionManager - In the implementation block
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                                            //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) PXAssetActionManager * assetActionManager;                                  //@synthesize assetActionManager=_assetActionManager - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager;              //@synthesize assetCollectionActionManager=_assetCollectionActionManager - In the implementation block
@property (nonatomic,readonly) PXLoadingStatusManager * loadingStatusManager;                              //@synthesize loadingStatusManager=_loadingStatusManager - In the implementation block
@property (nonatomic,readonly) BOOL wantsCPLStatus;                                                        //@synthesize wantsCPLStatus=_wantsCPLStatus - In the implementation block
@property (nonatomic,readonly) PXFooterViewModel * footerViewModel; 
@property (nonatomic,readonly) PXPhotosLayoutSpecManager * specManager;                                    //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * currentDataSource;                                     //@synthesize currentDataSource=_currentDataSource - In the implementation block
@property (nonatomic,readonly) BOOL isInSelectMode;                                                        //@synthesize isInSelectMode=_isInSelectMode - In the implementation block
@property (nonatomic,readonly) BOOL isInCompactMode;                                                       //@synthesize isInCompactMode=_isInCompactMode - In the implementation block
@property (nonatomic,readonly) BOOL canEnterSelectMode; 
@property (nonatomic,readonly) BOOL canExitSelectMode; 
@property (nonatomic,readonly) BOOL canSwipeSelect; 
@property (nonatomic,readonly) BOOL canPresentOneUp; 
@property (nonatomic,readonly) BOOL isAppearing;                                                           //@synthesize isAppearing=_isAppearing - In the implementation block
@property (nonatomic,readonly) BOOL dismissRequested;                                                      //@synthesize dismissRequested=_dismissRequested - In the implementation block
@property (nonatomic,readonly) BOOL hasScrollableContent;                                                  //@synthesize hasScrollableContent=_hasScrollableContent - In the implementation block
@property (getter=isScrolledToTop,nonatomic,readonly) BOOL scrolledToTop;                                  //@synthesize scrolledToTop=_scrolledToTop - In the implementation block
@property (nonatomic,readonly) double headerTitleTopInset;                                                 //@synthesize headerTitleTopInset=_headerTitleTopInset - In the implementation block
@property (nonatomic,copy,readonly) NSSet * draggedAssetReferences;                                        //@synthesize draggedAssetReferences=_draggedAssetReferences - In the implementation block
@property (nonatomic,readonly) PXAssetReference * dropTargetAssetReference;                                //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,readonly) BOOL supportsAspectRatioToggle;                                             //@synthesize supportsAspectRatioToggle=_supportsAspectRatioToggle - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * userWantsAspectFitContent;                                  //@synthesize userWantsAspectFitContent=_userWantsAspectFitContent - In the implementation block
@property (nonatomic,readonly) BOOL supportsZooming;                                                       //@synthesize supportsZooming=_supportsZooming - In the implementation block
@property (nonatomic,readonly) long long numberOfZoomSteps;                                                //@synthesize numberOfZoomSteps=_numberOfZoomSteps - In the implementation block
@property (nonatomic,readonly) BOOL canFilterContent; 
@property (nonatomic,readonly) BOOL wantsContentFilterVisible;                                             //@synthesize wantsContentFilterVisible=_wantsContentFilterVisible - In the implementation block
@property (nonatomic,readonly) BOOL wantsContentFilterIndicatorVisible;                                    //@synthesize wantsContentFilterIndicatorVisible=_wantsContentFilterIndicatorVisible - In the implementation block
@property (nonatomic,readonly) BOOL footerHasImportantInformation;                                         //@synthesize footerHasImportantInformation=_footerHasImportantInformation - In the implementation block
@property (nonatomic,readonly) BOOL hideSurroundingContent; 
@property (getter=isContentBelowTitle,nonatomic,readonly) BOOL contentBelowTitle;                          //@synthesize contentBelowTitle=_contentBelowTitle - In the implementation block
@property (getter=isShowingAlternateContent,nonatomic,readonly) BOOL showingAlternateContent;              //@synthesize showingAlternateContent=_showingAlternateContent - In the implementation block
@property (nonatomic,readonly) BOOL requiresLightTopBars;                                                  //@synthesize requiresLightTopBars=_requiresLightTopBars - In the implementation block
@property (nonatomic,readonly) double topBarsAppearanceChangeAnimationDuration;                            //@synthesize topBarsAppearanceChangeAnimationDuration=_topBarsAppearanceChangeAnimationDuration - In the implementation block
@property (nonatomic,readonly) BOOL viewBasedDecorationsEnabled;                                           //@synthesize viewBasedDecorationsEnabled=_viewBasedDecorationsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL captionsVisible;                                                       //@synthesize captionsVisible=_captionsVisible - In the implementation block
@property (nonatomic,readonly) BOOL wantsDimmedSelectionStyle;                                             //@synthesize wantsDimmedSelectionStyle=_wantsDimmedSelectionStyle - In the implementation block
@property (nonatomic,readonly) BOOL allowsShowDetails;                                                     //@synthesize allowsShowDetails=_allowsShowDetails - In the implementation block
@property (nonatomic,readonly) BOOL allowsChromeManagementBehavior;                                        //@synthesize allowsChromeManagementBehavior=_allowsChromeManagementBehavior - In the implementation block
@property (nonatomic,readonly) BOOL allowsInlineAddBehavior;                                               //@synthesize allowsInlineAddBehavior=_allowsInlineAddBehavior - In the implementation block
@property (nonatomic,readonly) BOOL allowsSelectionUserActivityBehavior;                                   //@synthesize allowsSelectionUserActivityBehavior=_allowsSelectionUserActivityBehavior - In the implementation block
@property (nonatomic,readonly) BOOL allowsPopOnContainerDeleteBehavior;                                    //@synthesize allowsPopOnContainerDeleteBehavior=_allowsPopOnContainerDeleteBehavior - In the implementation block
@property (nonatomic,readonly) BOOL allowsEmptyPlaceholderBehavior;                                        //@synthesize allowsEmptyPlaceholderBehavior=_allowsEmptyPlaceholderBehavior - In the implementation block
@property (nonatomic,readonly) BOOL allowsSelectModeToggle;                                                //@synthesize allowsSelectModeToggle=_allowsSelectModeToggle - In the implementation block
@property (nonatomic,readonly) BOOL allowsSelectAllAction;                                                 //@synthesize allowsSelectAllAction=_allowsSelectAllAction - In the implementation block
@property (nonatomic,readonly) BOOL allowsSlideshowAction;                                                 //@synthesize allowsSlideshowAction=_allowsSlideshowAction - In the implementation block
@property (nonatomic,readonly) BOOL allowsAddAction;                                                       //@synthesize allowsAddAction=_allowsAddAction - In the implementation block
@property (nonatomic,readonly) BOOL allowsCopyAction;                                                      //@synthesize allowsCopyAction=_allowsCopyAction - In the implementation block
@property (nonatomic,readonly) BOOL allowsSelectSectionAction;                                             //@synthesize allowsSelectSectionAction=_allowsSelectSectionAction - In the implementation block
@property (nonatomic,readonly) BOOL allowsGridAppearanceActions;                                           //@synthesize allowsGridAppearanceActions=_allowsGridAppearanceActions - In the implementation block
@property (nonatomic,readonly) BOOL allowsShareAllAction;                                                  //@synthesize allowsShareAllAction=_allowsShareAllAction - In the implementation block
@property (nonatomic,readonly) BOOL allowsQuickLookAction;                                                 //@synthesize allowsQuickLookAction=_allowsQuickLookAction - In the implementation block
@property (nonatomic,readonly) BOOL allowsShowMapAction;                                                   //@synthesize allowsShowMapAction=_allowsShowMapAction - In the implementation block
@property (nonatomic,readonly) BOOL allowsPickAssetAction;                                                 //@synthesize allowsPickAssetAction=_allowsPickAssetAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * footerSubtitle;                                             //@synthesize footerSubtitle=_footerSubtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long forbiddenBadges;                                         //@synthesize forbiddenBadges=_forbiddenBadges - In the implementation block
@property (nonatomic,readonly) BOOL allowsInteractiveFavoriteBadges;                                       //@synthesize allowsInteractiveFavoriteBadges=_allowsInteractiveFavoriteBadges - In the implementation block
@property (nonatomic,readonly) id<PXPhotosGridOptionsController> optionsController;                        //@synthesize optionsController=_optionsController - In the implementation block
@property (nonatomic,readonly) long long navBarStyle;                                                      //@synthesize navBarStyle=_navBarStyle - In the implementation block
@property (nonatomic,readonly) BOOL wantsModernNavBarButtons;                                              //@synthesize wantsModernNavBarButtons=_wantsModernNavBarButtons - In the implementation block
@property (nonatomic,readonly) BOOL lowMemoryMode;                                                         //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (nonatomic,readonly) BOOL hideFooterInSelectMode;                                                //@synthesize hideFooterInSelectMode=_hideFooterInSelectMode - In the implementation block
@property (nonatomic,readonly) double floatingTitleOpacity;                                                //@synthesize floatingTitleOpacity=_floatingTitleOpacity - In the implementation block
@property (nonatomic,readonly) BOOL wantsFloatingTitle;                                                    //@synthesize wantsFloatingTitle=_wantsFloatingTitle - In the implementation block
@property (nonatomic,readonly) PXContentFilterState * filterState;                                         //@synthesize filterState=_filterState - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * visibleAssetCollections; 
@property (assign,nonatomic) BOOL keepsTabBarAlwaysHidden;                                                 //@synthesize keepsTabBarAlwaysHidden=_keepsTabBarAlwaysHidden - In the implementation block
-(BOOL)lowMemoryMode;
-(NSSet *)draggedAssetReferences;
-(BOOL)wantsTabBarVisible;
-(long long)navBarStyle;
-(NSString *)namespaceIdentifier;
-(BOOL)viewBasedDecorationsEnabled;
-(void)setSelectionSnapshot:(PXSelectionSnapshot *)arg1 ;
-(PXSectionedSelectionManager *)selectionManager;
-(void)setIsInteractiveZooming:(BOOL)arg1 ;
-(void)setIsInSelectMode:(BOOL)arg1 ;
-(PXAssetActionManager *)assetActionManager;
-(void)setDropTargetAssetReference:(PXAssetReference *)arg1 ;
-(unsigned long long)forbiddenBadges;
-(BOOL)wantsContentFilterVisible;
-(PXLoadingStatusManager *)loadingStatusManager;
-(BOOL)wantsCPLStatus;
-(void)_updateFooterVisibility;
-(NSString *)footerSubtitle;
-(void)setCurrentDataSource:(PXAssetsDataSource *)arg1 ;
-(PXAssetReference *)dropTargetAssetReference;
-(BOOL)allowsCopyAction;
-(void)_updateDraggedAssetReferences;
-(PXAssetsDataSourceManager *)dataSourceManager;
-(BOOL)canExitSelectMode;
-(double)topBarsAppearanceChangeAnimationDuration;
-(BOOL)wantsContentFilterIndicatorVisible;
-(BOOL)hideFooterInSelectMode;
-(id)initWithConfiguration:(id)arg1 specManager:(id)arg2 ;
-(void)_invalidateGridAppearance;
-(void)setDraggedAssetReferences:(NSSet *)arg1 ;
-(void)_addAssetCollectionActionShortcutsIntoArray:(id)arg1 ;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(BOOL)shouldAnimateZooming;
-(BOOL)performKeyCommand:(id)arg1 keyCommandDelegate:(id)arg2 directionalSelectionDelegate:(id)arg3 ;
-(void)setWantsFooterTransparent:(BOOL)arg1 ;
-(void)didPerformChanges;
-(BOOL)hideSurroundingContent;
-(void)_invalidateAspectFitContent;
-(void)setShowingAlternateContent:(BOOL)arg1 ;
-(void)setWantsFooterVisible:(BOOL)arg1 ;
-(BOOL)allowsInteractiveFavoriteBadges;
-(BOOL)wantsFloatingTitle;
-(PXPhotosGridActionManager *)gridActionManager;
-(void)setWantsContentFilterIndicatorVisible:(BOOL)arg1 ;
-(id)_indexPathsForAssetCollectionReference:(id)arg1 ;
-(PXFooterViewModel *)footerViewModel;
-(BOOL)canSwipeSelect;
-(BOOL)footerHasImportantInformation;
-(BOOL)allowsQuickLookAction;
-(void)_setNeedsUpdate;
-(PXMediaProvider *)mediaProvider;
-(BOOL)hasScrollableContent;
-(id<PXPhotosGridOptionsController>)optionsController;
-(void)setKeepsTabBarAlwaysHidden:(BOOL)arg1 ;
-(BOOL)allowsSelectSectionAction;
-(void)setHasScrollableContent:(BOOL)arg1 ;
-(double)headerTitleTopInset;
-(PXPhotosLayoutSpecManager *)specManager;
-(BOOL)allowsSelectModeToggle;
-(BOOL)wantsDimmedSelectionStyle;
-(void)toggleSelectionForAssetCollectionReference:(id)arg1 ;
-(void)_updateChromeVisibility;
-(BOOL)wantsFooterVisible;
-(NSString *)title;
-(BOOL)isInteractiveZooming;
-(PXUpdater *)updater;
-(void)setAspectFitContent:(BOOL)arg1 ;
-(BOOL)isInSelectMode;
-(void)_invalidateUserWantsAspectFitContent;
-(void)toggleSelectionForAssetReference:(id)arg1 updateCursorIndexPath:(BOOL)arg2 ;
-(void)_invalidateDraggedAssetReferences;
-(void)_addGridActionShortcutsIntoArray:(id)arg1 ;
-(void)setShouldAnimateZooming:(BOOL)arg1 ;
-(void)setContentBelowTitle:(BOOL)arg1 ;
-(BOOL)shouldAspectFitContentByDefault;
-(BOOL)isScrolledToTop;
-(BOOL)allowsChromeManagementBehavior;
-(BOOL)allowsSelectionUserActivityBehavior;
-(void)_invalidateAssetsDataSourceManager;
-(PXAssetsDataSource *)currentDataSource;
-(void)setUserWantsAspectFitContent:(NSNumber *)arg1 ;
-(BOOL)isShowingAlternateContent;
-(void)_invalidateWantsContentFilterIndicatorVisible;
-(void)setDismissRequested:(BOOL)arg1 ;
-(void)_invalidateFooterVisibility;
-(void)setSupportsAspectRatioToggle:(BOOL)arg1 ;
-(void)setFloatingTitleOpacity:(double)arg1 ;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1 updateCursorIndexPath:(BOOL)arg2 ;
-(void)_updateUserWantsAspectFitContent;
-(BOOL)allowsGridAppearanceActions;
-(BOOL)allowsPopOnContainerDeleteBehavior;
-(BOOL)canEnterSelectMode;
-(void)setScrolledToTop:(BOOL)arg1 ;
-(id)init;
-(BOOL)allowsPickAssetAction;
-(BOOL)supportsAspectRatioToggle;
-(long long)numberOfZoomSteps;
-(id)uiKeyCommandsUsingDelegate:(id)arg1 ;
-(BOOL)supportsZooming;
-(BOOL)allowsAddAction;
-(void)setCaptionsVisible:(BOOL)arg1 ;
-(NSNumber *)userWantsAspectFitContent;
-(BOOL)wantsToolbarVisible;
-(void)_updateGridAppearance;
-(void)setOneUpPresentationAllowed:(BOOL)arg1 forReason:(id)arg2 ;
-(void)toggleSelectionForAssetReference:(id)arg1 ;
-(void)_invalidateChromeVisibility;
-(void)_updateDataSourceDependentProperties;
-(void)setWantsContentFilterVisible:(BOOL)arg1 ;
-(void)setHeaderTitleTopInset:(double)arg1 ;
-(BOOL)attemptSetInSelectMode:(BOOL)arg1 ;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)setNumberOfZoomSteps:(long long)arg1 ;
-(void)setRequiresLightTopBars:(BOOL)arg1 ;
-(BOOL)allowsShareAllAction;
-(BOOL)captionsVisible;
-(BOOL)wantsModernNavBarButtons;
-(PXContentFilterState *)filterState;
-(BOOL)allowsSelectAllAction;
-(BOOL)isInCompactMode;
-(BOOL)allowsSlideshowAction;
-(BOOL)allowsShowDetails;
-(void)setFooterHasImportantInformation:(BOOL)arg1 ;
-(void)_updateAspectFitContent;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(BOOL)allowsShowMapAction;
-(void)setZoomStep:(double)arg1 ;
-(BOOL)isContentBelowTitle;
-(PXAssetReference *)zoomAnchorAssetReference;
-(void)setWantsToolbarVisible:(BOOL)arg1 ;
-(BOOL)requiresLightTopBars;
-(void)setViewBasedDecorationsEnabled:(BOOL)arg1 ;
-(BOOL)wantsFooterTransparent;
-(NSOrderedSet *)visibleAssetCollections;
-(void)setWantsTabBarVisible:(BOOL)arg1 ;
-(void)setHideSurroundingContent:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_updateAssetsDataSourceManager;
-(double)floatingTitleOpacity;
-(void)_invalidateTopBarsStyles;
-(BOOL)keepsTabBarAlwaysHidden;
-(void)_updateTopBarsStyles;
-(void)_updateFilteringTimeoutObserver;
-(void)_addSelectionShortcutsIntoArray:(id)arg1 usingDelegate:(id)arg2 ;
-(void)setAspectRatioToggleAllowed:(BOOL)arg1 forReason:(id)arg2 ;
-(PXSelectionSnapshot *)selectionSnapshot;
-(BOOL)aspectFitContent;
-(BOOL)dismissRequested;
-(double)zoomStep;
-(BOOL)allowsInlineAddBehavior;
-(BOOL)allowsEmptyPlaceholderBehavior;
-(BOOL)canFilterContent;
-(void)setIsInCompactMode:(BOOL)arg1 ;
-(BOOL)canPresentOneUp;
-(void)setIsAppearing:(BOOL)arg1 ;
-(void)setZoomAnchorAssetReference:(PXAssetReference *)arg1 ;
-(void)_addEnterOneUpShortcutIntoArray:(id)arg1 ;
-(void)_updateWantsContentFilterIndicatorVisible;
-(void)_addActions:(id)arg1 actionManager:(id)arg2 intoArray:(id)arg3 ;
-(void)setFilterState:(PXContentFilterState *)arg1 ;
-(BOOL)_performSelectionKeyCommand:(id)arg1 withDelegate:(id)arg2 ;
-(void)setEnterSelectModeAllowed:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setZoomStep:(double)arg1 isInteractive:(BOOL)arg2 shouldAnimate:(BOOL)arg3 anchorAssetReference:(id)arg4 ;
-(BOOL)isAppearing;
@end

