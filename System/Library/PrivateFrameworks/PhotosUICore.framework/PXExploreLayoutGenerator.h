/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>
#import <libobjc.A.dylib/PXPresentedGridLayout.h>

@class PXExploreParsingState, PXExploreLayoutMetrics, NSString;

@interface PXExploreLayoutGenerator : PXLayoutGenerator <PXGDiagnosticsProvider, PXPresentedGridLayout> {

	long long _count;
	long long _capacity;
	SCD_Struct_PX88* _inputItemInfos;
	PXLayoutGeometry* _outputGeometries;
	long long* _outputItemIndexToParseLocation;
	SCD_Struct_PX29* _outputItemLocations;
	long long* _outputNumberOfColumnsAtRow;
	BOOL _isPrepared;
	CGPoint _origin;
	long long _row;
	long long _localNumberOfColumns;
	long long _localNumberOfRows;
	CGSize _cellSize;
	CGSize _intercellSpacing;
	CGSize _contentSize;
	PXCornerSpriteIndexes _cornerSpriteIndexes;
	CGSize _headerItemSize;
	CGSize _minHeroItemsSize;
	PXExploreParsingState* _localState;
	CGSize _minimumItemSize;
	CGSize _buildingBlockSize;

}

@property (nonatomic,readonly) PXExploreParsingState * localState;                 //@synthesize localState=_localState - In the implementation block
@property (nonatomic,readonly) long long numberOfRemainingItems; 
@property (nonatomic,copy) PXExploreLayoutMetrics * metrics; 
@property (nonatomic,readonly) CGSize headerItemSize; 
@property (nonatomic,readonly) CGSize minHeroItemsSize; 
@property (nonatomic,readonly) CGSize minimumItemSize;                             //@synthesize minimumItemSize=_minimumItemSize - In the implementation block
@property (nonatomic,readonly) CGSize buildingBlockSize;                           //@synthesize buildingBlockSize=_buildingBlockSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long presentedNumberOfRows; 
-(void)sortNextItems:(long long)arg1 withItemAtIndex:(long long)arg2 having:(long long)arg3 ;
-(void)_parseSixColumnHeroRowWithNumberOfItems:(long long)arg1 heroItemType:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(unsigned long long)arg4 ;
-(BOOL)_isShortRowNextFollowedByLargeHero;
-(CGSize)_estimatedSizeForSixColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(void)_parseThreeColumnMediumHeroRowWithNumberOfItems:(long long)arg1 ;
-(CGSize)estimatedSizeForPhoneLandscape;
-(void)invalidate;
-(BOOL)_parseThreeColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(CGSize)_cellSizeForNumberOfColumns:(long long)arg1 ;
-(long long)numberOfItemsInFourColumnMediumHeroRowForNumberOfRemainingItems:(long long)arg1 ;
-(BOOL)parseMacLayout;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(BOOL)parseThreeColumnMediumHeroRowWithPano;
-(PXCornerSpriteIndexes)cornerSpriteIndexes;
-(id)presentedItemsInRect:(CGRect)arg1 ;
-(CGSize)estimatedSizeForPadPortrait;
-(CGSize)_estimatedSizeForThreeColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(BOOL)prepareNextItems:(long long)arg1 withLargeHeroIndex:(long long)arg2 ;
-(void)_prepareIfNeeded;
-(void)_parseThreeColumnShortRowWithNumberOfItems:(long long)arg1 ;
-(void)dealloc;
-(long long)numberOfRemainingItems;
-(CGSize)_estimatedSizeForColumns:(long long)arg1 headerRows:(long long)arg2 averageItemsPerBlock:(double)arg3 averageRowsPerBlock:(double)arg4 withOptions:(unsigned long long)arg5 ;
-(BOOL)nextItems:(long long)arg1 areAll:(unsigned long long)arg2 ;
-(long long)preferredRowTypeAfterRowWithType:(long long)arg1 ;
-(CGSize)estimatedSizeForPhonePortrait;
-(BOOL)parseThreeColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 ;
-(BOOL)_parseSixColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(BOOL)parseThreeColumnShortRowWithPano;
-(id)initWithMetrics:(id)arg1 ;
-(void)_parseFourColumnShortRowWithNumberOfItems:(long long)arg1 ;
-(SCD_Struct_PX29)presentedItemLocationForItemAtIndex:(long long)arg1 ;
-(void)_addTwoItemsForThreeColumnRowPreferringTallVariant:(BOOL)arg1 ;
-(void)_addThreeItemsToSixColumnRowWithHeroItemType:(long long)arg1 options:(unsigned long long)arg2 rowType:(long long*)arg3 ;
-(NSString *)diagnosticDescription;
-(CGSize)estimatedSizeForPadLandscape;
-(void)beginRowWithNumberOfColumns:(long long)arg1 ;
-(long long)presentedNumberOfColumnsAtRow:(long long)arg1 ;
-(void)addLocalItemWithType:(long long)arg1 atColumn:(long long)arg2 row:(long long)arg3 columnSpan:(long long)arg4 rowSpan:(long long)arg5 ;
-(unsigned long long)attributesForNextItemAtIndex:(long long)arg1 ;
-(BOOL)parsePadLandscapeLayout;
-(long long)numberOf:(unsigned long long)arg1 withinNextItems:(long long)arg2 ;
-(BOOL)parsePhonePortraitLayout;
-(BOOL)nextItems:(long long)arg1 isAny:(unsigned long long)arg2 ;
-(BOOL)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 options:(unsigned long long)arg3 ;
-(BOOL)parseThreeColumnGroupWithFiveItems;
-(CGRect)presentedRectForItemAtIndex:(long long)arg1 ;
-(long long)numberOfItemsInSixColumnShortRowForNumberOfRemainingItems:(long long)arg1 ;
-(long long)itemIndexForItem:(long long)arg1 inDirection:(unsigned long long)arg2 ;
-(BOOL)parsePadPortraitLayout;
-(BOOL)parseFourColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 ;
-(long long)itemIndexForPresentedItemIndex:(long long)arg1 ;
-(double)_buildingBlockAspectRatioForNumberOfColumns:(long long)arg1 options:(unsigned long long)arg2 ;
-(CGSize)minHeroItemsSize;
-(CGSize)size;
-(PXExploreParsingState *)localState;
-(long long)indexWithinNextItems:(long long)arg1 having:(long long)arg2 keyIndex:(long long)arg3 ;
-(BOOL)isAcceptableLargeHeroNextItemAtIndex:(long long)arg1 ;
-(CGSize)estimatedSize;
-(void)reorderNextItems:(long long)arg1 usingMapping:(/*^block*/id)arg2 ;
-(long long)presentedNumberOfRows;
-(void)endRowWithType:(long long)arg1 ;
-(void)setBuildingBlockColumnSpan:(long long)arg1 rowSpan:(long long)arg2 withNumberOfColumns:(long long)arg3 ;
-(CGSize)_estimatedSizeForFourColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(BOOL)parseThreeColumnGroupWithShortRowFollowedByLargeHero;
-(CGSize)minimumItemSize;
-(void)getLowestAspectRatio:(double*)arg1 highestAspectRatio:(double*)arg2 forNextItems:(long long)arg3 ;
-(void)moveNextItemAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(BOOL)parseFourColumnGroupWithShortRowFollowedByLargeHero;
-(CGSize)headerItemSize;
-(BOOL)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(unsigned long long)arg4 ;
-(void)_parseThreeColumnHeaderRowWithNumberOfItems:(long long)arg1 ;
-(CGSize)buildingBlockSize;
-(void)_parseSixColumnShortRowWithNumberOfItems:(long long)arg1 ;
-(BOOL)parseThreeColumnGroupWithThreeItemsFollowedByOneItemAllowingLargeHeroAtEnd:(BOOL)arg1 ;
-(double)score:(long long)arg1 forNextItemAtIndex:(long long)arg2 ;
-(long long)numberOfItemsInSixColumnHeroRowForNumberOfRemainingItems:(long long)arg1 rowOptions:(unsigned long long*)arg2 ;
-(BOOL)parsePhoneLandscapeLayout;
-(void)_parseFourColumnHeroRowWithType:(long long)arg1 heroItemType:(long long)arg2 numberOfItems:(long long)arg3 ;
-(id)presentedItemsBetweenItem:(long long)arg1 andItem:(long long)arg2 ;
-(BOOL)_parseFourColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(BOOL)nextInputItems:(unsigned long long)arg1 ;
@end
