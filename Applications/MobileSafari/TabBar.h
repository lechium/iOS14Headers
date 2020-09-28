//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TabCollectionView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, ReorderingAutoscroller, UIDragInteraction, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIVisualEffectView;
@protocol TabBarDelegate;

@interface TabBar : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, TabCollectionView>
{
    NSMutableArray *_tabBarItemViewReuseStack;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    UITapGestureRecognizer *_tapRecognizer;	// 24 = 0x18
    UIView *_leadingContainer;	// 32 = 0x20
    UIView *_trailingContainer;	// 40 = 0x28
    UIVisualEffectView *_leadingVibrancyEffectView;	// 48 = 0x30
    UIVisualEffectView *_trailingVibrancyEffectView;	// 56 = 0x38
    UIPanGestureRecognizer *_reorderRecognizer;	// 64 = 0x40
    UIDragInteraction *_dragInteraction;	// 72 = 0x48
    _Bool _hidesTitles;	// 80 = 0x50
    id <TabBarDelegate> _delegate;	// 88 = 0x58
    NSArray *_items;	// 96 = 0x60
    unsigned long long _tintStyle;	// 104 = 0x68
    double _minimumTabWidth;	// 112 = 0x70
}

+ (double)defaultHeight;	// IMP=0x00000001000d1778
- (void).cxx_destruct;	// IMP=0x00000001000d5964
@property(readonly, nonatomic) double minimumTabWidth; // @synthesize minimumTabWidth=_minimumTabWidth;
@property(nonatomic) _Bool hidesTitles; // @synthesize hidesTitles=_hidesTitles;
@property(nonatomic) unsigned long long tintStyle; // @synthesize tintStyle=_tintStyle;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <TabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_relinquishReusableTabBarItemView:(id)arg1;	// IMP=0x00000001000d5884
- (id)_requestReusableTabBarItemView;	// IMP=0x00000001000d57dc
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001000d57d0
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000001000d56e8
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000001000d56a8
- (void)_didReceiveMemoryWarning:(id)arg1;	// IMP=0x00000001000d5690
- (void)dealloc;	// IMP=0x00000001000d55c4
- (unsigned long long)_maximumTruncationIndexForTitle:(id)arg1;	// IMP=0x00000001000d53b4
- (void)_reorder:(id)arg1;	// IMP=0x00000001000d5174
- (void)addInteraction:(id)arg1;	// IMP=0x00000001000d50e0
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000d5030
- (void)_tap:(id)arg1;	// IMP=0x00000001000d4f30
- (id)_itemForTouch:(id)arg1;	// IMP=0x00000001000d4ef4
- (void)_activateItemIfNeeded:(id)arg1;	// IMP=0x00000001000d4e64
- (void)activateItem:(id)arg1;	// IMP=0x00000001000d4e58
- (id)_itemAtLocation:(struct CGPoint)arg1;	// IMP=0x00000001000d4c84
- (void)layoutSubviews;	// IMP=0x00000001000d4184
- (void)_layoutIndexes:(id)arg1 ofItems:(id)arg2;	// IMP=0x00000001000d3df0
- (void)_layoutContainers;	// IMP=0x00000001000d3968
- (unsigned long long)_effectiveIndexForIndex:(unsigned long long)arg1 ofItems:(id)arg2;	// IMP=0x00000001000d3874
- (struct CGRect)_frameForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000d37d4
- (double)_horizontalPositionForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000d37c0
- (double)_horizontalPositionForItemAtIndex:(unsigned long long)arg1 withSlowingFactor:(double)arg2;	// IMP=0x00000001000d35c8
- (void)_scrollTowardItem:(id)arg1 byAmount:(double)arg2;	// IMP=0x00000001000d33fc
@property(readonly, nonatomic) double itemWidth;
- (id)itemAtPoint:(struct CGPoint)arg1;	// IMP=0x00000001000d33e4
@property(readonly, nonatomic) _Bool supportsDropTransitionToItemView;
@property(readonly, nonatomic) _Bool supportsSystemDrag;
- (id)targetedDragPreviewForLiftingItem:(id)arg1;	// IMP=0x00000001000d310c
- (unsigned int)_edgeToAlignWithPreviewForItem:(id)arg1;	// IMP=0x00000001000d2f78
- (id)targetItemForDropAtPoint:(struct CGPoint)arg1;	// IMP=0x00000001000d2d4c
- (id)viewForItem:(id)arg1;	// IMP=0x00000001000d2cf4
- (struct CGRect)frameForItem:(id)arg1;	// IMP=0x00000001000d2c5c
- (void)scrollToItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000d27f4
- (void)_scrollToItemIfNeeded:(id)arg1;	// IMP=0x00000001000d2660
- (_Bool)_isScrollable;	// IMP=0x00000001000d2610
- (double)_scrollableWidth;	// IMP=0x00000001000d25bc
- (double)_itemWidth;	// IMP=0x00000001000d254c
- (void)_layoutItem:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3 itemCount:(unsigned long long)arg4 beforeActiveItem:(_Bool)arg5;	// IMP=0x00000001000d2278
- (void)_toggleMediaStateMutedForItem:(id)arg1;	// IMP=0x00000001000d2210
- (void)_itemDidPressCloseButton:(id)arg1;	// IMP=0x00000001000d21a8
- (void)_updateBackground;	// IMP=0x00000001000d2118
- (void)_updateReorderRecognizer;	// IMP=0x00000001000d20d4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000d1fa0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001000d1ed0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000d1784

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) ReorderingAutoscroller *reorderingAutoscroller;
@property(readonly) Class superclass;

@end
