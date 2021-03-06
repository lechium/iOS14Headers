/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSReading/TSWPTextHostRep.h>
#import <TSCharts/TSCHChartRepPlatformProtocols.h>
#import <TSCharts/TSCHSupportsRendering.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSArray, TSCHSelectionPath, TSCHChartLayout, TSCHLegendMoveKnob, CALayer, NSMutableArray, TSCHSearchSelection, TSCHChartDrawableInfo, NSString;

@interface TSCHChartRep : TSWPTextHostRep <TSCHChartRepPlatformProtocols, TSCHSupportsRendering, CALayerDelegate> {

	NSArray* mRenderers;
	BOOL mBuildingChunks;
	int mChunkPhase;
	long long mCurrentChunk;
	BOOL mBuildingFinalBackground;
	BOOL mBuildingFinalElements;
	BOOL mInZoom;
	unsigned long long mInDynamicStandinOperation;
	unsigned long long mInDynamicStandinLayoutOperation;
	BOOL mIsKPFExportForMultiData;
	unsigned long long mTextureStage;
	unsigned long long mTextureDeliveryStyle;
	int mTextureByGlyphStyle;
	TSCHSelectionPath* mActiveTextEditingPath;
	BOOL mForceSeparateLegendLayer;
	BOOL mIsLayerBasedRep;
	TSCHChartLayout* mChartLayout;
	BOOL mWantsPreviewLayout;
	BOOL mEditorIsEditingInfo;
	BOOL mChartRepGoingAway;
	BOOL mDrawingSearchReference;
	TSCHLegendMoveKnob* mDynamicLegendKnob;
	BOOL mIs2DRepFor3DChartRep;
	int mRenderPassChunkPhase;
	CGPoint mLastSubselectionLayerRelativeReferencePosition;
	CALayer* mDownloadIndicatorLayer;
	NSMutableArray* mRenderersWaitingForDownload;
	TSCHSearchSelection* _selection;

}

@property (assign,nonatomic) BOOL forceSeparateLegendLayer; 
@property (nonatomic,readonly) long long currentChunk; 
@property (nonatomic,readonly) TSCHChartDrawableInfo * chartInfo; 
@property (nonatomic,readonly) TSCHChartLayout * chartLayout; 
@property (nonatomic,readonly) unsigned long long chartDeliveryStyle; 
@property (nonatomic,readonly) TSCHSearchSelection * selection;                               //@synthesize selection=_selection - In the implementation block
@property (nonatomic,readonly) BOOL forceRenderBlankBackground; 
@property (nonatomic,retain,readonly) TSCHSelectionPath * activeTextEditingPath; 
@property (nonatomic,readonly) BOOL drawingSearchReference; 
@property (nonatomic,readonly) NSString * animationFilter; 
@property (nonatomic,readonly) double viewScale; 
@property (nonatomic,readonly) double contentsScale; 
@property (assign,nonatomic) unsigned long long textureDeliveryStyle; 
@property (assign,nonatomic) int textureByGlyphStyle; 
@property (assign,nonatomic) unsigned long long textureStage; 
@property (nonatomic,readonly) BOOL chartRepGoingAway; 
@property (nonatomic,retain) TSCHLegendMoveKnob * dynamicLegendKnob; 
@property (nonatomic,readonly) BOOL is2DRepFor3DChartRep; 
@property (nonatomic,readonly) BOOL isCorrectRepClassForInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3 ;
-(id)renderers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)isEditing;
-(void)dealloc;
-(void)willBeginZooming;
-(id)geometry;
-(double)contentsScale;
-(TSCHSearchSelection *)selection;
-(BOOL)shadowsEnabled;
-(CGRect)convertUnscaledToBoundsRect:(CGRect)arg1 ;
-(CGRect)frameInUnscaledCanvas;
-(double)viewScale;
-(CGRect)targetRectForEditMenu;
-(void)didEndZooming;
-(BOOL)canDrawInParallel;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)updateFromLayout;
-(void)setTextureDeliveryStyle:(unsigned long long)arg1 ;
-(void)setTextureByGlyphStyle:(int)arg1 ;
-(void)setTextureStage:(unsigned long long)arg1 ;
-(unsigned long long)textureDeliveryStyle;
-(int)textureByGlyphStyle;
-(unsigned long long)textureStage;
-(BOOL)isDrawingIntoPDF;
-(NSString *)animationFilter;
-(id)textureForDescription:(id)arg1 ;
-(TSCHChartDrawableInfo *)chartInfo;
-(TSCHChartLayout *)chartLayout;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 is2DRepFor3DChartRep:(BOOL)arg3 ;
-(void)renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(BOOL)renderGrid;
-(BOOL)forceRenderBlankBackground;
-(BOOL)renderElementsShadowOnly;
-(BOOL)renderElementsWithoutShadows;
-(id)renderSeriesIndexSet;
-(id)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1 ;
-(BOOL)is2DRepFor3DChartRep;
-(BOOL)renderElements;
-(BOOL)renderLabels;
-(BOOL)requireSeparateLabelLayer;
-(TSCHSelectionPath *)activeTextEditingPath;
-(BOOL)drawingSearchReference;
-(void)p_checkFillPropertiesForDataListeningWithChangedProperties:(id)arg1 ;
-(id)drawableLayout;
-(BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
-(CGRect)outerShadowFrame;
-(BOOL)buildShouldUseRenderer:(id)arg1 ;
-(BOOL)shouldUseRenderer:(id)arg1 ;
-(void)p_listenForDataChangesIfAppropriateForFill:(id)arg1 forProperty:(int)arg2 ;
-(BOOL)shouldUseChartAreaRectForEditMenuTargetRectMinY;
-(BOOL)messageIsVisible;
-(void)dismissMessageOverlayNowWithAnimation:(BOOL)arg1 ;
-(void)p_positionMessageView;
-(void)p_invalidateMessageOverlay;
-(void)p_removeOrShowAndPositionMessageOverlay;
-(BOOL)planeIsVisible:(int)arg1 ;
-(long long)currentChunk;
-(unsigned long long)chartDeliveryStyle;
-(void)p_addChildTexturesToTextureSet:(id)arg1 forDescription:(id)arg2 stage:(long long)arg3 finalTexture:(BOOL)arg4 ;
-(id)p_textureForDescription:(id)arg1 ;
-(void)clearRenderers;
-(void)protected_renderChunkInBounds:(CGRect)arg1 textureSet:(id)arg2 description:(id)arg3 ;
-(id)renderSeriesIndexSetForFinalElements:(BOOL)arg1 ;
-(id)renderSeriesIndexSetForFinalElements:(BOOL)arg1 currentChunk:(long long)arg2 ;
-(id)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1 finalElements:(BOOL)arg2 ;
-(id)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1 finalElements:(BOOL)arg2 currentChunk:(long long)arg3 ;
-(int)planeState:(int)arg1 finalElements:(BOOL)arg2 chunkStage:(long long)arg3 ;
-(int)p_backgroundLikePlaneStateForEffectiveStage:(long long)arg1 ;
-(BOOL)p_hasBackgroundLayerForPieChart;
-(BOOL)renderTrendLinesForSeriesIndex:(unsigned long long)arg1 ;
-(BOOL)renderReferenceLines;
-(BOOL)isLayerBasedRep;
-(id)p_legendRenderer;
-(BOOL)isCorrectRepClassForInfo;
-(CGRect)geometryFrame;
-(BOOL)p_hasBackgroundFill;
-(CGPoint)scaledSubpixelOffsetFromLayerFrameInScaledCanvas;
-(void)p_deleteMessageView;
-(BOOL)p_chartShouldDisplayMessage;
-(void)p_forceDismissTransientMessage;
-(void)p_messageAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)displayMessage:(id)arg1 zPosition:(double)arg2 style:(int)arg3 ;
-(void)p_topBarsShowedUp:(id)arg1 ;
-(void)updateMessageOverlayNow;
-(void)editor:(id)arg1 isSelectingInfos:(id)arg2 ;
-(void)editor:(id)arg1 isDeselectingInfos:(id)arg2 ;
-(int)planeState:(int)arg1 finalElements:(BOOL)arg2 ;
-(BOOL)p_legendHitByLayoutPoint:(CGPoint)arg1 ;
-(id)p_textImageForPath:(CGPathRef)arg1 renderer:(id)arg2 selection:(id)arg3 shouldPulsate:(BOOL)arg4 ;
-(double)captionBottomDistanceToRect:(CGRect)arg1 ;
-(BOOL)forceSeparateLegendLayer;
-(void)setForceSeparateLegendLayer:(BOOL)arg1 ;
-(TSCHLegendMoveKnob *)dynamicLegendKnob;
-(void)setDynamicLegendKnob:(TSCHLegendMoveKnob *)arg1 ;
-(BOOL)chartRepGoingAway;
-(id)referenceLinesToRender;
-(id)referenceLineLabelsSearchSelectionsToRender;
@end

