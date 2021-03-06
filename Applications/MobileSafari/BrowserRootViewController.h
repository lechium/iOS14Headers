//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SidebarContentDimmingViewDelegate-Protocol.h"
#import "TabBarDropExpansionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class BarContainerView, BookmarksBarView, BrowserController, BrowserToolbar, CatalogViewController, NSString, NavigationBar, ScrollToTopView, SidebarContentDimmingView, SidebarViewController, TabBar, TabBarDropExpansionView, UIApplication, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView, ViewWithCustomNextResponder, _SFBrowserConfiguration, _SFDigitalHealthViewController, _SFDynamicBarAnimator, _SFWebView;
@protocol BrowserRootViewControllerDelegate, TabThumbnailCollectionView, _SFBarCommon;

@interface BrowserRootViewController : UIViewController <TabBarDropExpansionViewDelegate, UIGestureRecognizerDelegate, SidebarContentDimmingViewDelegate>
{
    UIApplication *_app;	// 8 = 0x8
    double _bottomBarKeyboardOffset;	// 16 = 0x10
    _Bool _adjustsObscuredInsetsForKeyboard;	// 24 = 0x18
    _Bool _canBecomeFirstResponder;	// 25 = 0x19
    ViewWithCustomNextResponder *_contentContainerView;	// 32 = 0x20
    struct UIEdgeInsets _maximumObscuredInsets;	// 40 = 0x28
    struct UIEdgeInsets _obscuredInsets;	// 72 = 0x48
    unsigned long long _sizeTransitionCount;	// 104 = 0x68
    _Bool _statusBarStyleUpdateQueued;	// 112 = 0x70
    TabBarDropExpansionView *_tabBarDropExpansionView;	// 120 = 0x78
    BarContainerView *_topAuxiliaryBarsContainerView;	// 128 = 0x80
    ScrollToTopView *_scrollToTopView;	// 136 = 0x88
    _Bool _pageScrollsWithBottomBar;	// 144 = 0x90
    UITapGestureRecognizer *_showBarsFromBottomBarRecognizer;	// 152 = 0x98
    UIPanGestureRecognizer *_hideNavigationBarGestureRecognizer;	// 160 = 0xa0
    _Bool _isTransitioningTabViews;	// 168 = 0xa8
    struct CGSize _sizeForToolbarPlacement;	// 176 = 0xb0
    long long _toolbarPlacement;	// 192 = 0xc0
    SidebarContentDimmingView *_sidebarContentDimmingView;	// 200 = 0xc8
    unsigned long long _sidebarControllerActiveAnimationCount;	// 208 = 0xd0
    _Bool _barStateAllowsHidingHomeIndicator;	// 216 = 0xd8
    _Bool _showingTabBar;	// 217 = 0xd9
    _Bool _keepBarsMinimized;	// 218 = 0xda
    _Bool _documentSafeAreaInsetsFrozen;	// 219 = 0xdb
    _Bool _needsScrollToTopView;	// 220 = 0xdc
    _Bool _showingSidebar;	// 221 = 0xdd
    _Bool _statusBarIsScrolledOffScreen;	// 222 = 0xde
    _SFBrowserConfiguration *_configuration;	// 224 = 0xe0
    id <BrowserRootViewControllerDelegate> _delegate;	// 232 = 0xe8
    UIView *_documentAndTopBarsContainerView;	// 240 = 0xf0
    UIView *_tabBarClipperView;	// 248 = 0xf8
    BookmarksBarView *_bookmarksBar;	// 256 = 0x100
    BrowserToolbar *_bottomToolbar;	// 264 = 0x108
    _SFDynamicBarAnimator *_dynamicBarAnimator;	// 272 = 0x110
    NavigationBar *_navigationBar;	// 280 = 0x118
    TabBar *_tabBar;	// 288 = 0x120
    _SFWebView *_webView;	// 296 = 0x128
    UIScrollView *_scrollView;	// 304 = 0x130
    SidebarViewController *_sidebarViewController;	// 312 = 0x138
    long long _sidebarStyle;	// 320 = 0x140
    BrowserController *_browserController;	// 328 = 0x148
    CatalogViewController *_catalogViewController;	// 336 = 0x150
    _SFDigitalHealthViewController *_digitalHealthViewController;	// 344 = 0x158
    UIView<TabThumbnailCollectionView> *_tabThumbnailCollectionView;	// 352 = 0x160
}

- (void).cxx_destruct;	// IMP=0x00000001000728f4
@property(nonatomic) __weak UIView<TabThumbnailCollectionView> *tabThumbnailCollectionView; // @synthesize tabThumbnailCollectionView=_tabThumbnailCollectionView;
@property(nonatomic) _Bool statusBarIsScrolledOffScreen; // @synthesize statusBarIsScrolledOffScreen=_statusBarIsScrolledOffScreen;
@property(retain, nonatomic) _SFDigitalHealthViewController *digitalHealthViewController; // @synthesize digitalHealthViewController=_digitalHealthViewController;
@property(retain, nonatomic) CatalogViewController *catalogViewController; // @synthesize catalogViewController=_catalogViewController;
@property(readonly, nonatomic) __weak BrowserController *browserController; // @synthesize browserController=_browserController;
@property(readonly, nonatomic) long long sidebarStyle; // @synthesize sidebarStyle=_sidebarStyle;
@property(readonly, nonatomic) SidebarViewController *sidebarViewController; // @synthesize sidebarViewController=_sidebarViewController;
@property(nonatomic, getter=isShowingSidebar) _Bool showingSidebar; // @synthesize showingSidebar=_showingSidebar;
@property(nonatomic) _Bool needsScrollToTopView; // @synthesize needsScrollToTopView=_needsScrollToTopView;
@property(nonatomic) _Bool documentSafeAreaInsetsFrozen; // @synthesize documentSafeAreaInsetsFrozen=_documentSafeAreaInsetsFrozen;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) _SFWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool keepBarsMinimized; // @synthesize keepBarsMinimized=_keepBarsMinimized;
@property(retain, nonatomic) TabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(nonatomic, getter=isShowingTabBar) _Bool showingTabBar; // @synthesize showingTabBar=_showingTabBar;
@property(readonly, nonatomic) NavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) _SFDynamicBarAnimator *dynamicBarAnimator; // @synthesize dynamicBarAnimator=_dynamicBarAnimator;
@property(readonly, nonatomic) BrowserToolbar *bottomToolbar; // @synthesize bottomToolbar=_bottomToolbar;
@property(retain, nonatomic) BookmarksBarView *bookmarksBar; // @synthesize bookmarksBar=_bookmarksBar;
@property(nonatomic) _Bool barStateAllowsHidingHomeIndicator; // @synthesize barStateAllowsHidingHomeIndicator=_barStateAllowsHidingHomeIndicator;
@property(readonly, nonatomic) UIView *tabBarClipperView; // @synthesize tabBarClipperView=_tabBarClipperView;
@property(readonly, nonatomic) UIView *documentAndTopBarsContainerView; // @synthesize documentAndTopBarsContainerView=_documentAndTopBarsContainerView;
@property(nonatomic) __weak id <BrowserRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _SFBrowserConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)updateAccessibilityIdentifier;	// IMP=0x00000001000724f8
- (void)tabBarDropExpansionView:(id)arg1 didEndTrackingDropSession:(id)arg2;	// IMP=0x00000001000724a0
- (void)tabBarDropExpansionView:(id)arg1 didBeginTrackingDropSession:(id)arg2;	// IMP=0x0000000100072448
- (void)tabCollectionViewDidDismiss:(id)arg1;	// IMP=0x0000000100072348
- (void)tabCollectionViewDidCancelDismissal:(id)arg1;	// IMP=0x00000001000722e0
- (void)tabCollectionViewWillDismiss:(id)arg1;	// IMP=0x0000000100072278
- (void)tabCollectionViewWillPresent:(id)arg1;	// IMP=0x00000001000720bc
- (void)didTransitionTabView;	// IMP=0x00000001000720ac
- (void)willTransitionTabView;	// IMP=0x0000000100072098
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100071d50
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100071b6c
- (id)overrideTraitCollectionForChildViewController:(id)arg1;	// IMP=0x00000001000719b0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100071894
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100071384
- (_Bool)becomeFirstResponder;	// IMP=0x00000001000712e8
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000100071294
- (void)viewDidLoad;	// IMP=0x00000001000711f4
- (void)loadView;	// IMP=0x0000000100070e44
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(_Bool)arg2;	// IMP=0x0000000100070e00
- (_Bool)safari_wantsTransparentApplicationBackground;	// IMP=0x0000000100070d8c
- (void)sidebarDimmingViewDismiss:(id)arg1;	// IMP=0x0000000100070d7c
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100070d70
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100070c00
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100070abc
- (void)_showBarsFromBottomBarTap:(id)arg1;	// IMP=0x0000000100070a8c
- (void)_hideNavigationBarGestureRecognized:(id)arg1;	// IMP=0x00000001000708b8
@property(readonly, nonatomic, getter=isInteractivelyMinimizingBars) _Bool interactivelyMinimizingBars;
@property(readonly, nonatomic) double offsetForDynamicBarAnimator;
- (void)stopScrollingPageWithBottomToolbar;	// IMP=0x00000001000707d0
- (void)dynamicBarAnimatorOutputsDidChange:(id)arg1;	// IMP=0x00000001000706b4
- (void)_keyboardWillChangeFrame:(id)arg1;	// IMP=0x0000000100070304
- (_Bool)_shouldShowSidebarContentDimmingView;	// IMP=0x00000001000702d4
- (struct CGRect)_sidebarDimmedContentFrameIncludingSidebarOnlyIfEmbedded:(_Bool)arg1;	// IMP=0x000000010007021c
- (void)_layOutSidebarContentDimmingView;	// IMP=0x000000010007017c
- (void)_destroySidebarContentDimmingViewIfNeeded;	// IMP=0x000000010007011c
- (void)_createSidebarContentDimmingViewIfNeeded;	// IMP=0x000000010006ffa0
- (void)_updateSidebarStyle;	// IMP=0x000000010006fe6c
- (void)_updateSidebarWallpaperObscuredInsets;	// IMP=0x000000010006fc90
- (void)_layOutSidebar;	// IMP=0x000000010006fbe8
- (struct CGRect)_frameForSidebarWhenShowing:(_Bool)arg1;	// IMP=0x000000010006f9a8
- (_Bool)_interfaceFillsScreen;	// IMP=0x000000010006f958
@property(readonly, nonatomic) double maximumHeightObscuredByBottomToolbar;
- (void)_updateToolbarForToolbarPlacementAllowingRemoval:(_Bool)arg1;	// IMP=0x000000010006f6a0
- (void)_setToolbarPlacement:(long long)arg1;	// IMP=0x000000010006f5b8
- (void)_updateToolbarPlacementIfNeeded;	// IMP=0x000000010006f4dc
- (_Bool)_shouldPositionBottomToolbarAboveKeyboard;	// IMP=0x000000010006f490
- (struct CGRect)_frameForBottomToolbarForceHidden:(_Bool)arg1;	// IMP=0x000000010006f308
- (void)_layOutBottomToolbar;	// IMP=0x000000010006f1cc
- (struct CGRect)_frameForNavigationBar;	// IMP=0x000000010006f114
- (double)_navigationBarSquishedHeight;	// IMP=0x000000010006f0c4
@property(readonly, nonatomic) double navigationBarDesiredHeight;
- (struct CGRect)bottomToolbarFrameInCoordinateSpace:(id)arg1;	// IMP=0x000000010006efac
- (struct CGRect)navigationBarFrameInCoordinateSpace:(id)arg1;	// IMP=0x000000010006ef10
- (double)_topAuxiliaryBarsHeight;	// IMP=0x000000010006eeb0
- (void)_layOutTopBars;	// IMP=0x000000010006e950
- (double)keyboardInsetInCoordinateSpace:(id)arg1;	// IMP=0x000000010006e7f4
- (double)_keyboardInsetInCoordinateSpaceIfObscuringInsets:(id)arg1;	// IMP=0x000000010006e7d0
- (struct UIEdgeInsets)sidebarObscuredInsetsForRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000010006e7bc
- (struct UIEdgeInsets)minimumObscuredInsetsForRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000010006e66c
- (struct UIEdgeInsets)maximumObscuredInsetsForRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000010006e400
- (struct UIEdgeInsets)obscuredInsetsWithComponents:(unsigned long long)arg1 forRect:(struct CGRect)arg2 inCoordinateSpace:(id)arg3;	// IMP=0x000000010006e158
- (struct UIEdgeInsets)obscuredInsetsForRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000010006e144
- (void)_layOutScrollToTopView;	// IMP=0x000000010006e028
- (void)_layOutTabView;	// IMP=0x000000010006de78
- (void)viewWillLayoutSubviews;	// IMP=0x000000010006daa8
- (struct CGRect)_frameForContentContainerView;	// IMP=0x000000010006da24
@property(readonly, nonatomic) ViewWithCustomNextResponder *contentContainerView;
- (void)_updateTopBarStyles;	// IMP=0x000000010006d8b4
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;	// IMP=0x000000010006d7b8
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x000000010006d724
- (struct UIEdgeInsets)_avoidanceInsets;	// IMP=0x000000010006d4f0
- (long long)preferredStatusBarStyle;	// IMP=0x000000010006d448
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000010006d438
- (void)setNeedsPreferredStatusBarUpdateAfterCommitAnimated:(_Bool)arg1;	// IMP=0x000000010006d32c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010006d270
- (void)removeChildViewController:(id)arg1 notifyDidMove:(_Bool)arg2;	// IMP=0x000000010006d1f4
- (void)addChildViewController:(id)arg1;	// IMP=0x000000010006d174
- (void)_prepareToShowSidebarViewControllerIfNeeded;	// IMP=0x000000010006cdc0
- (void)setShowingSidebar:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006c4ec
@property(readonly, nonatomic) long long toolbarPlacement;
@property(readonly, nonatomic) id <_SFBarCommon> primaryBar;
- (void)didReceiveMemoryWarning;	// IMP=0x000000010006be90
- (void)dealloc;	// IMP=0x000000010006be04
- (id)initWithBrowserController:(id)arg1;	// IMP=0x000000010006bd4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

