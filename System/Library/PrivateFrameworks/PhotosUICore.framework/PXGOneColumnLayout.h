/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGItemsLayout.h>
#import <libobjc.A.dylib/PXZoomablePhotosContentLayout.h>
#import <libobjc.A.dylib/PXGItemsGeometry.h>

@class NSString;

@interface PXGOneColumnLayout : PXGItemsLayout <PXZoomablePhotosContentLayout, PXGItemsGeometry> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _isUpdating;
	BOOL _didAlreadyUpdateLoadedItems;
	BOOL _enableBestCropRect;
	BOOL _enableEffects;
	BOOL _fillSafeAreaTopInset;
	int _mediaKind;
	int _presentationType;
	double _interItemSpacing;
	double _itemCaptionSpacing;
	double _overrideAspectRatio;
	double _overrideAspectRatioAmount;
	double _aspectRatioLimit;
	id _anchorObjectReference;
	long long _anchorItem;
	CGPoint _anchorViewportCenter;
	CGPoint _anchorItemCenter;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) long long numberOfColumns; 
@property (assign,nonatomic) UIEdgeInsets padding; 
@property (assign,nonatomic) double interItemSpacing; 
@property (assign,nonatomic) double itemCaptionSpacing; 
@property (assign,nonatomic) BOOL enableBestCropRect; 
@property (assign,nonatomic) unsigned char mediaFlags; 
@property (nonatomic,readonly) long long visualItemShift; 
@property (nonatomic,readonly) double rowHeight; 
@property (assign,nonatomic) BOOL hideIncompleteLastRow; 
@property (assign,nonatomic) BOOL fillSafeAreaTopInset; 
@property (nonatomic,readonly) NSRange loadedItems; 
@property (nonatomic,readonly) CGRect loadedItemsRect; 
@property (nonatomic,readonly) BOOL supportsContentMode; 
@property (nonatomic,readonly) BOOL itemCaptionsVisible; 
@property (nonatomic,retain) id anchorObjectReference; 
@property (assign,nonatomic) CGPoint anchorViewportCenter; 
@property (assign,nonatomic) BOOL loadItemsOutsideAnchorViewport; 
@property (assign,nonatomic) BOOL enableEffects; 
@property (assign,nonatomic) double accessoryAlpha; 
@property (assign,nonatomic) long long contentMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long anchorItem;                             //@synthesize anchorItem=_anchorItem - In the implementation block
@property (assign,nonatomic) CGPoint anchorItemCenter;                         //@synthesize anchorItemCenter=_anchorItemCenter - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                             //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) int mediaKind;                                    //@synthesize mediaKind=_mediaKind - In the implementation block
@property (assign,nonatomic) int presentationType;                             //@synthesize presentationType=_presentationType - In the implementation block
@property (assign,nonatomic) double interItemSpacing;                          //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) double itemCaptionSpacing;                        //@synthesize itemCaptionSpacing=_itemCaptionSpacing - In the implementation block
@property (assign,nonatomic) BOOL enableBestCropRect;                          //@synthesize enableBestCropRect=_enableBestCropRect - In the implementation block
@property (assign,nonatomic) BOOL enableEffects;                               //@synthesize enableEffects=_enableEffects - In the implementation block
@property (assign,nonatomic) double overrideAspectRatio;                       //@synthesize overrideAspectRatio=_overrideAspectRatio - In the implementation block
@property (assign,nonatomic) double overrideAspectRatioAmount;                 //@synthesize overrideAspectRatioAmount=_overrideAspectRatioAmount - In the implementation block
@property (assign,nonatomic) double aspectRatioLimit;                          //@synthesize aspectRatioLimit=_aspectRatioLimit - In the implementation block
@property (assign,nonatomic) BOOL fillSafeAreaTopInset;                        //@synthesize fillSafeAreaTopInset=_fillSafeAreaTopInset - In the implementation block
@property (nonatomic,retain) id anchorObjectReference;                         //@synthesize anchorObjectReference=_anchorObjectReference - In the implementation block
@property (assign,nonatomic) CGPoint anchorViewportCenter;                     //@synthesize anchorViewportCenter=_anchorViewportCenter - In the implementation block
-(int)presentationType;
-(void)setAnchorObjectReference:(id)arg1 ;
-(void)referenceSizeDidChange;
-(double)accessoryAlpha;
-(double)overrideAspectRatioAmount;
-(BOOL)supportsContentMode;
-(int)mediaKind;
-(id)anchorObjectReference;
-(NSRange)itemsToLoad;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)screenScaleDidChange;
-(CGPoint)anchorViewportCenter;
-(BOOL)loadItemsOutsideAnchorViewport;
-(void)setItemCaptionSpacing:(double)arg1 ;
-(BOOL)enableBestCropRect;
-(void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned)arg2 initialState:(/*^block*/id)arg3 modifyState:(/*^block*/id)arg4 ;
-(void)setAnchorItem:(long long)arg1 ;
-(void)setAccessoryAlpha:(double)arg1 ;
-(PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(CGRect)arg1 ;
-(BOOL)hideIncompleteLastRow;
-(void)setAspectRatioLimit:(double)arg1 ;
-(void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(/*^block*/id)arg3 ;
-(void)_updateVisibleRect;
-(void)alphaDidChange;
-(void)setOverrideAspectRatio:(double)arg1 ;
-(long long)anchorItem;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setLoadItemsOutsideAnchorViewport:(BOOL)arg1 ;
-(void)setNumberOfColumns:(long long)arg1 ;
-(id)itemsInRect:(CGRect)arg1 inLayout:(id)arg2 ;
-(long long)numberOfColumns;
-(id)itemsGeometry;
-(UIEdgeInsets)padding;
-(void)visibleRectDidChange;
-(BOOL)shiftItem:(long long)arg1 toColumn:(long long)arg2 hideIncompleteRows:(BOOL)arg3 ;
-(void)setFillSafeAreaTopInset:(BOOL)arg1 ;
-(CGRect)frameForItem:(long long)arg1 ;
-(long long)itemClosestTo:(CGPoint)arg1 ;
-(CGRect)frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2 ;
-(id)diagnosticDescription;
-(void)update;
-(void)setOverrideAspectRatioAmount:(double)arg1 ;
-(void)setAnchorViewportCenter:(CGPoint)arg1 ;
-(id)init;
-(double)itemCaptionSpacing;
-(void)setEnableBestCropRect:(BOOL)arg1 ;
-(double)rowHeight;
-(NSRange)_itemsToLoadForAnchorItem:(long long)arg1 visibleRect:(CGRect)arg2 ;
-(void)setMediaKind:(int)arg1 ;
-(long long)columnForItem:(long long)arg1 ;
-(void)setPresentationType:(int)arg1 ;
-(unsigned char)mediaFlags;
-(void)_updateSprites;
-(NSRange)itemRangeForSpriteIndexRange:(PXGSpriteIndexRange)arg1 ;
-(long long)visualItemShift;
-(CGPoint)anchorItemCenter;
-(BOOL)fillSafeAreaTopInset;
-(void)setMediaFlags:(unsigned char)arg1 ;
-(void)_updateSpriteStyles;
-(double)interItemSpacing;
-(BOOL)canHandleVisibleRectRejection;
-(void)setAnchorItemCenter:(CGPoint)arg1 ;
-(void)setInterItemSpacing:(double)arg1 ;
-(CGRect)loadedItemsRect;
-(double)aspectRatioLimit;
-(BOOL)enableEffects;
-(BOOL)itemCaptionsVisible;
-(void)invalidateLoadedItems;
-(long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2 ;
-(void)setEnableEffects:(BOOL)arg1 ;
-(void)setHideIncompleteLastRow:(BOOL)arg1 ;
-(void)loadedItemsDidChange;
-(id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2 ;
-(NSString *)description;
-(double)overrideAspectRatio;
-(NSRange)itemRangeInRect:(CGRect)arg1 ;
-(unsigned)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
@end
