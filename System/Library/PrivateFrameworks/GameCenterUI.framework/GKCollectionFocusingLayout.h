/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSIndexPath, UICollectionViewLayoutAttributes;

@interface GKCollectionFocusingLayout : UICollectionViewFlowLayout {

	double _topHeaderHeight;
	double _focusScaleFactor;
	NSIndexPath* _focusedIndexPath;
	double _focusHeaderOffset;
	double _headerToItemSpacing;
	UICollectionViewLayoutAttributes* _topHeaderAttributes;

}

@property (assign,nonatomic) double topHeaderHeight;                                              //@synthesize topHeaderHeight=_topHeaderHeight - In the implementation block
@property (assign,nonatomic) double focusScaleFactor;                                             //@synthesize focusScaleFactor=_focusScaleFactor - In the implementation block
@property (nonatomic,retain) NSIndexPath * focusedIndexPath;                                      //@synthesize focusedIndexPath=_focusedIndexPath - In the implementation block
@property (assign,nonatomic) double focusHeaderOffset;                                            //@synthesize focusHeaderOffset=_focusHeaderOffset - In the implementation block
@property (assign,nonatomic) double headerToItemSpacing;                                          //@synthesize headerToItemSpacing=_headerToItemSpacing - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * topHeaderAttributes;              //@synthesize topHeaderAttributes=_topHeaderAttributes - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(double)focusHeaderOffset;
-(void)_updateFocusOffsetsForSectionHeadersWithAnimationCoordinator:(id)arg1 ;
-(double)focusScaleFactor;
-(void)_updateFocusFrameForCellAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)setFocusScaleFactor:(double)arg1 ;
-(void)setFocusHeaderOffset:(double)arg1 ;
-(double)topHeaderHeight;
-(void)setTopHeaderAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionViewLayoutAttributes *)topHeaderAttributes;
-(CGSize)sizeForHeaderInSection:(long long)arg1 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1 ;
-(double)minimumLineSpacingForSectionAtIndex:(long long)arg1 ;
-(CGSize)sizeForFooterInSection:(long long)arg1 ;
-(void)applyDefaults;
-(id)focusAdjustedAttributesForItemAttributes:(id)arg1 ;
-(id)focusAdjustedAttributesForSupplementaryViewAttributes:(id)arg1 ;
-(id)init;
-(UIEdgeInsets)sectionInset;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setHeaderToItemSpacing:(double)arg1 ;
-(double)headerToItemSpacing;
-(BOOL)shouldUpdateVisibleCellLayoutAttributes;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setFocusedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)focusedIndexPath;
-(void)awakeFromNib;
-(void)setTopHeaderHeight:(double)arg1 ;
@end

