/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSNumber, NSSet, PXAssetReference, PXContentFilterState, NSMutableOrderedSet;


@protocol PXMutablePhotosViewModel <NSObject>
@property (assign,nonatomic) BOOL isInSelectMode; 
@property (assign,nonatomic) BOOL isInCompactMode; 
@property (assign,nonatomic) BOOL isAppearing; 
@property (assign,nonatomic) BOOL dismissRequested; 
@property (assign,nonatomic) BOOL hasScrollableContent; 
@property (assign,getter=isScrolledToTop,nonatomic) BOOL scrolledToTop; 
@property (assign,nonatomic) double headerTitleTopInset; 
@property (assign,nonatomic) long long numberOfZoomSteps; 
@property (nonatomic,copy) NSNumber * userWantsAspectFitContent; 
@property (nonatomic,copy) NSSet * draggedAssetReferences; 
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference; 
@property (assign,nonatomic) BOOL wantsContentFilterVisible; 
@property (assign,nonatomic) BOOL wantsContentFilterIndicatorVisible; 
@property (assign,nonatomic) BOOL footerHasImportantInformation; 
@property (assign,getter=isContentBelowTitle,nonatomic) BOOL contentBelowTitle; 
@property (assign,getter=isShowingAlternateContent,nonatomic) BOOL showingAlternateContent; 
@property (assign,nonatomic) BOOL viewBasedDecorationsEnabled; 
@property (assign,nonatomic) BOOL captionsVisible; 
@property (assign,nonatomic) double floatingTitleOpacity; 
@property (assign,nonatomic) BOOL keepsTabBarAlwaysHidden; 
@property (nonatomic,copy) PXContentFilterState * filterState; 
@property (nonatomic,readonly) NSMutableOrderedSet * visibleAssetCollections; 
@required
-(NSSet *)draggedAssetReferences;
-(BOOL)viewBasedDecorationsEnabled;
-(void)setIsInSelectMode:(BOOL)arg1;
-(void)setDropTargetAssetReference:(id)arg1;
-(BOOL)wantsContentFilterVisible;
-(PXAssetReference *)dropTargetAssetReference;
-(BOOL)wantsContentFilterIndicatorVisible;
-(void)setDraggedAssetReferences:(id)arg1;
-(void)setShowingAlternateContent:(BOOL)arg1;
-(void)setWantsContentFilterIndicatorVisible:(BOOL)arg1;
-(BOOL)footerHasImportantInformation;
-(BOOL)hasScrollableContent;
-(void)setKeepsTabBarAlwaysHidden:(BOOL)arg1;
-(void)setHasScrollableContent:(BOOL)arg1;
-(double)headerTitleTopInset;
-(void)toggleSelectionForAssetCollectionReference:(id)arg1;
-(BOOL)isInSelectMode;
-(void)toggleSelectionForAssetReference:(id)arg1 updateCursorIndexPath:(BOOL)arg2;
-(void)setContentBelowTitle:(BOOL)arg1;
-(BOOL)isScrolledToTop;
-(void)setUserWantsAspectFitContent:(id)arg1;
-(BOOL)isShowingAlternateContent;
-(void)setDismissRequested:(BOOL)arg1;
-(void)setFloatingTitleOpacity:(double)arg1;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1 updateCursorIndexPath:(BOOL)arg2;
-(void)setScrolledToTop:(BOOL)arg1;
-(long long)numberOfZoomSteps;
-(void)setCaptionsVisible:(BOOL)arg1;
-(NSNumber *)userWantsAspectFitContent;
-(void)setOneUpPresentationAllowed:(BOOL)arg1 forReason:(id)arg2;
-(void)toggleSelectionForAssetReference:(id)arg1;
-(void)setWantsContentFilterVisible:(BOOL)arg1;
-(void)setHeaderTitleTopInset:(double)arg1;
-(BOOL)attemptSetInSelectMode:(BOOL)arg1;
-(void)toggleSelectionForIndexPath:(PXSimpleIndexPath)arg1;
-(void)setNumberOfZoomSteps:(long long)arg1;
-(BOOL)captionsVisible;
-(PXContentFilterState *)filterState;
-(BOOL)isInCompactMode;
-(void)setFooterHasImportantInformation:(BOOL)arg1;
-(BOOL)isContentBelowTitle;
-(void)setViewBasedDecorationsEnabled:(BOOL)arg1;
-(NSMutableOrderedSet *)visibleAssetCollections;
-(void)setHideSurroundingContent:(BOOL)arg1 forReason:(id)arg2;
-(double)floatingTitleOpacity;
-(BOOL)keepsTabBarAlwaysHidden;
-(void)setAspectRatioToggleAllowed:(BOOL)arg1 forReason:(id)arg2;
-(BOOL)dismissRequested;
-(void)setIsInCompactMode:(BOOL)arg1;
-(void)setIsAppearing:(BOOL)arg1;
-(void)setFilterState:(id)arg1;
-(void)setEnterSelectModeAllowed:(BOOL)arg1 forReason:(id)arg2;
-(void)setZoomStep:(double)arg1 isInteractive:(BOOL)arg2 shouldAnimate:(BOOL)arg3 anchorAssetReference:(id)arg4;
-(BOOL)isAppearing;

@end

