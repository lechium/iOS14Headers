/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGItemsLayout.h>
#import <libobjc.A.dylib/PXZoomablePhotosContentLayout.h>
#import <libobjc.A.dylib/PXGItemsGeometry.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@class NSString;

@interface PXGGridLayout : PXGItemsLayout <PXZoomablePhotosContentLayout, PXGItemsGeometry, PXGDiagnosticsProvider> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _isUpdating;
	CGSize _itemSize;
	double _finalInterItemSpacing;
	UIEdgeInsets _finalInsets;
	BOOL _canHandleVisibleRectRejection;
	BOOL _enableBestCropRect;
	BOOL _enableEffects;
	unsigned char _mediaFlags;
	BOOL _fillSafeAreaTopInset;
	BOOL _supportsAutomaticContentRotation;
	BOOL _hideIncompleteLastRow;
	BOOL _mediaTargetSizeIgnoresSpacing;
	BOOL _loadItemsOutsideAnchorViewport;
	int _mediaKind;
	int _presentationType;
	int _accessoryMediaKind;
	int _accessoryPresentationType;
	float _itemZPosition;
	long long _style;
	long long _contentMode;
	long long _numberOfColumns;
	double _interItemSpacing;
	double _itemCaptionSpacing;
	double _itemAspectRatio;
	double _aspectRatioLimit;
	double _accessoryAlpha;
	long long _visualItemShift;
	id _anchorObjectReference;
	SCD_Struct_PX81 _itemCornerRadius;
	SCD_Struct_PX81 _edgeCornerRadius;
	CGPoint _anchorViewportCenter;
	CGPoint _contentOrigin;
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
@property (nonatomic,readonly) long long numberOfVisualItems; 
@property (nonatomic,readonly) long long numberOfVisualRows; 
@property (assign,nonatomic) CGPoint contentOrigin;                                //@synthesize contentOrigin=_contentOrigin - In the implementation block
@property (assign,nonatomic) long long style;                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long contentMode;                                //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) long long numberOfColumns;                            //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                 //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double interItemSpacing;                              //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) double itemCaptionSpacing;                            //@synthesize itemCaptionSpacing=_itemCaptionSpacing - In the implementation block
@property (assign,nonatomic) double itemAspectRatio;                               //@synthesize itemAspectRatio=_itemAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL enableBestCropRect;                              //@synthesize enableBestCropRect=_enableBestCropRect - In the implementation block
@property (assign,nonatomic) BOOL enableEffects;                                   //@synthesize enableEffects=_enableEffects - In the implementation block
@property (assign,nonatomic) double aspectRatioLimit;                              //@synthesize aspectRatioLimit=_aspectRatioLimit - In the implementation block
@property (assign,nonatomic) int mediaKind;                                        //@synthesize mediaKind=_mediaKind - In the implementation block
@property (assign,nonatomic) unsigned char mediaFlags;                             //@synthesize mediaFlags=_mediaFlags - In the implementation block
@property (assign,nonatomic) int presentationType;                                 //@synthesize presentationType=_presentationType - In the implementation block
@property (assign,nonatomic) int accessoryMediaKind;                               //@synthesize accessoryMediaKind=_accessoryMediaKind - In the implementation block
@property (assign,nonatomic) int accessoryPresentationType;                        //@synthesize accessoryPresentationType=_accessoryPresentationType - In the implementation block
@property (assign,nonatomic) double accessoryAlpha;                                //@synthesize accessoryAlpha=_accessoryAlpha - In the implementation block
@property (assign,nonatomic) BOOL fillSafeAreaTopInset;                            //@synthesize fillSafeAreaTopInset=_fillSafeAreaTopInset - In the implementation block
@property (assign,nonatomic) BOOL supportsAutomaticContentRotation;                //@synthesize supportsAutomaticContentRotation=_supportsAutomaticContentRotation - In the implementation block
@property (assign,nonatomic) long long visualItemShift;                            //@synthesize visualItemShift=_visualItemShift - In the implementation block
@property (assign,getter=isLazy,nonatomic) BOOL lazy; 
@property (assign,nonatomic) BOOL hideIncompleteLastRow;                           //@synthesize hideIncompleteLastRow=_hideIncompleteLastRow - In the implementation block
@property (assign,nonatomic) BOOL mediaTargetSizeIgnoresSpacing;                   //@synthesize mediaTargetSizeIgnoresSpacing=_mediaTargetSizeIgnoresSpacing - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX82 itemCornerRadius;                     //@synthesize itemCornerRadius=_itemCornerRadius - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX82 edgeCornerRadius;                     //@synthesize edgeCornerRadius=_edgeCornerRadius - In the implementation block
@property (assign,nonatomic) float itemZPosition;                                  //@synthesize itemZPosition=_itemZPosition - In the implementation block
@property (nonatomic,retain) id anchorObjectReference;                             //@synthesize anchorObjectReference=_anchorObjectReference - In the implementation block
@property (assign,nonatomic) CGPoint anchorViewportCenter;                         //@synthesize anchorViewportCenter=_anchorViewportCenter - In the implementation block
@property (assign,nonatomic) BOOL loadItemsOutsideAnchorViewport;                  //@synthesize loadItemsOutsideAnchorViewport=_loadItemsOutsideAnchorViewport - In the implementation block
@property (assign,nonatomic) BOOL canHandleVisibleRectRejection;                   //@synthesize canHandleVisibleRectRejection=_canHandleVisibleRectRejection - In the implementation block
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
-(SCD_Struct_PX82)itemCornerRadius;
-(void)_updateContentSize;
-(int)presentationType;
-(void)setAnchorObjectReference:(id)arg1 ;
-(void)referenceSizeDidChange;
-(double)accessoryAlpha;
-(void)setMediaTargetSizeIgnoresSpacing:(BOOL)arg1 ;
-(CGPoint)_contentPointInLayout:(CGPoint)arg1 ;
-(int)accessoryMediaKind;
-(void)setVisualItemShift:(long long)arg1 ;
-(BOOL)supportsContentMode;
-(int)mediaKind;
-(void)setAccessoryMediaKind:(int)arg1 ;
-(long long)_rowForItem:(long long)arg1 ;
-(id)anchorObjectReference;
-(NSRange)itemsToLoad;
-(void)screenScaleDidChange;
-(CGPoint)anchorViewportCenter;
-(BOOL)loadItemsOutsideAnchorViewport;
-(void)setItemCaptionSpacing:(double)arg1 ;
-(BOOL)enableBestCropRect;
-(void)_updateColumnsMetrics;
-(float)itemZPosition;
-(long long)numberOfVisualItems;
-(void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned)arg2 initialState:(/*^block*/id)arg3 modifyState:(/*^block*/id)arg4 ;
-(void)setAccessoryAlpha:(double)arg1 ;
-(PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(CGRect)arg1 ;
-(BOOL)hideIncompleteLastRow;
-(void)setAspectRatioLimit:(double)arg1 ;
-(void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(/*^block*/id)arg3 ;
-(long long)style;
-(void)alphaDidChange;
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
-(CGSize)sizeForItem:(long long)arg1 ;
-(long long)itemClosestTo:(CGPoint)arg1 ;
-(CGRect)frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2 ;
-(NSString *)diagnosticDescription;
-(void)update;
-(BOOL)mediaTargetSizeIgnoresSpacing;
-(double)itemAspectRatio;
-(void)setItemZPosition:(float)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)setAnchorViewportCenter:(CGPoint)arg1 ;
-(id)init;
-(double)itemCaptionSpacing;
-(void)setEnableBestCropRect:(BOOL)arg1 ;
-(void)setAccessoryPresentationType:(int)arg1 ;
-(double)rowHeight;
-(void)setContentOrigin:(CGPoint)arg1 ;
-(CGRect)_pageAlignedRectForVisibleRect:(CGRect)arg1 ;
-(void)setMediaKind:(int)arg1 ;
-(BOOL)supportsAutomaticContentRotation;
-(CGPoint)contentOrigin;
-(long long)columnForItem:(long long)arg1 ;
-(void)setPresentationType:(int)arg1 ;
-(unsigned char)mediaFlags;
-(int)accessoryPresentationType;
-(void)_updateSprites;
-(NSRange)itemRangeForSpriteIndexRange:(PXGSpriteIndexRange)arg1 ;
-(long long)visualItemShift;
-(NSRange)_itemsToLoadForVisibleRect:(CGRect)arg1 ;
-(void)numberOfAccessoryItemsDidChange;
-(BOOL)fillSafeAreaTopInset;
-(void)setMediaFlags:(unsigned char)arg1 ;
-(CGPoint)_layoutPointInContent:(CGPoint)arg1 ;
-(long long)contentMode;
-(void)_updateSpriteStyles;
-(double)interItemSpacing;
-(void)accessoryItemsDidChange;
-(void)setCanHandleVisibleRectRejection:(BOOL)arg1 ;
-(BOOL)canHandleVisibleRectRejection;
-(CGRect)_frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2 itemSize:(CGSize)arg3 insets:(UIEdgeInsets)arg4 contentMode:(long long)arg5 ;
-(void)setInterItemSpacing:(double)arg1 ;
-(void)setItemAspectRatio:(double)arg1 ;
-(CGRect)loadedItemsRect;
-(double)aspectRatioLimit;
-(CGRect)_contentRectInLayout:(CGRect)arg1 ;
-(BOOL)enableEffects;
-(BOOL)itemCaptionsVisible;
-(long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2 ;
-(void)setSupportsAutomaticContentRotation:(BOOL)arg1 ;
-(long long)numberOfVisualRows;
-(void)safeAreaInsetsDidChange;
-(void)setEnableEffects:(BOOL)arg1 ;
-(void)dropTargetObjectReferenceDidChange;
-(SCD_Struct_PX82)edgeCornerRadius;
-(void)_getItemSize:(CGSize*)arg1 finalInteritemSpacing:(double*)arg2 finalInsets:(UIEdgeInsets*)arg3 forDesiredInterItemSpacing:(double)arg4 padding:(UIEdgeInsets)arg5 ;
-(void)setHideIncompleteLastRow:(BOOL)arg1 ;
-(id)dropTargetObjectReferenceForLocation:(CGPoint)arg1 ;
-(void)loadedItemsDidChange;
-(CGRect)_layoutRectInContent:(CGRect)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2 ;
-(BOOL)shouldUpdateDecorationMediaTargetSizes;
-(NSString *)description;
-(void)setEdgeCornerRadius:(SCD_Struct_PX82)arg1 ;
-(NSRange)itemRangeInRect:(CGRect)arg1 ;
-(void)setItemCornerRadius:(SCD_Struct_PX82)arg1 ;
-(unsigned)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
@end
