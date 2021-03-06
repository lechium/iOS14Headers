//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "BookmarkFavoritesViewControllerDelegate-Protocol.h"
#import "BookmarksTableViewControllerDelegate-Protocol.h"
#import "HistoryTableViewControllerDelegate-Protocol.h"
#import "ReadingListViewControllerDelegate-Protocol.h"
#import "UINavigationBarDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "_SFBookmarkInfoViewControllerDelegate-Protocol.h"

@class BookmarkFavoritesViewController, NSArray, NSMutableDictionary, NSObject, NSString, NSTimer, SidebarInteractionReporter, UIBarButtonItem, UISegmentedControl, WebBookmarkCollection, WebBookmarkReadonlyCollection, _UINavigationBarPalette;
@protocol BookmarksNavigationControllerDelegate, LinkPreviewProvider, OS_dispatch_queue;

@interface BookmarksNavigationController : UINavigationController <BookmarkFavoritesViewControllerDelegate, BookmarksTableViewControllerDelegate, HistoryTableViewControllerDelegate, ReadingListViewControllerDelegate, _SFBookmarkInfoViewControllerDelegate, UINavigationBarDelegate, UINavigationControllerDelegate>
{
    WebBookmarkCollection *_bookmarkCollection;	// 8 = 0x8
    WebBookmarkReadonlyCollection *_readonlyCollection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_readonlyCollectionQueue;	// 24 = 0x18
    _Bool _haveBookmarksLock;	// 32 = 0x20
    NSTimer *_bookmarkLockTimer;	// 40 = 0x28
    NSTimer *_bookmarkSyncTimer;	// 48 = 0x30
    _Bool _hasScheduledBookmarkSyncTimer;	// 56 = 0x38
    _Bool _allowsEditing;	// 57 = 0x39
    _Bool _isEditing;	// 58 = 0x3a
    _Bool _needsReloadSavedState;	// 59 = 0x3b
    _Bool _contentDirtyFlag;	// 60 = 0x3c
    UIBarButtonItem *_createFolderButtonItem;	// 64 = 0x40
    UIBarButtonItem *_editButtonItem;	// 72 = 0x48
    UIBarButtonItem *_editingDoneButtonItem;	// 80 = 0x50
    UIBarButtonItem *_flexibleSpaceItem;	// 88 = 0x58
    _Bool _showCollections;	// 96 = 0x60
    UISegmentedControl *_collectionSegmentedControl;	// 104 = 0x68
    _Bool _showOnlyFavorites;	// 112 = 0x70
    NSArray *_topLevelCollections;	// 120 = 0x78
    NSString *_currentCollection;	// 128 = 0x80
    NSMutableDictionary *_savedCollectionState;	// 136 = 0x88
    _UINavigationBarPalette *_palette;	// 144 = 0x90
    UIBarButtonItem *_doneButtonItem;	// 152 = 0x98
    _Bool _adjustedForSidebar;	// 160 = 0xa0
    _Bool _hasTranslucentAppearance;	// 161 = 0xa1
    _Bool _isShowingPopover;	// 162 = 0xa2
    _Bool _contentBorrowed;	// 163 = 0xa3
    _Bool _doneButtonHidden;	// 164 = 0xa4
    id <BookmarksNavigationControllerDelegate> _bookmarksNavigationControllerDelegate;	// 168 = 0xa8
    id <LinkPreviewProvider> _linkPreviewProvider;	// 176 = 0xb0
    SidebarInteractionReporter *_sidebarInteractionReporter;	// 184 = 0xb8
    struct UIEdgeInsets _contentInset;	// 192 = 0xc0
    struct UIEdgeInsets _tableSeparatorInset;	// 224 = 0xe0
}

+ (void)test_setSavedStateCollection:(id)arg1;	// IMP=0x00000001000295ac
+ (id)test_savedStateCollection;	// IMP=0x00000001000295a0
- (void).cxx_destruct;	// IMP=0x000000010002a7bc
@property(nonatomic) _Bool doneButtonHidden; // @synthesize doneButtonHidden=_doneButtonHidden;
@property(retain, nonatomic) SidebarInteractionReporter *sidebarInteractionReporter; // @synthesize sidebarInteractionReporter=_sidebarInteractionReporter;
@property(retain, nonatomic) NSString *currentCollection; // @synthesize currentCollection=_currentCollection;
@property(nonatomic, getter=isContentBorrowed) _Bool contentBorrowed; // @synthesize contentBorrowed=_contentBorrowed;
@property(nonatomic) _Bool isShowingPopover; // @synthesize isShowingPopover=_isShowingPopover;
@property(nonatomic) _Bool hasTranslucentAppearance; // @synthesize hasTranslucentAppearance=_hasTranslucentAppearance;
@property(nonatomic) _Bool adjustedForSidebar; // @synthesize adjustedForSidebar=_adjustedForSidebar;
@property(nonatomic) struct UIEdgeInsets tableSeparatorInset; // @synthesize tableSeparatorInset=_tableSeparatorInset;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) __weak id <BookmarksNavigationControllerDelegate> bookmarksNavigationControllerDelegate; // @synthesize bookmarksNavigationControllerDelegate=_bookmarksNavigationControllerDelegate;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;	// IMP=0x000000010002a674
- (void)readingListViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010002a664
- (void)readingListViewControllerDidBeginEditing:(id)arg1;	// IMP=0x000000010002a654
- (void)readingListViewController:(id)arg1 setBookmark:(id)arg2 asRead:(_Bool)arg3;	// IMP=0x000000010002a5ac
- (void)readingListViewController:(id)arg1 updateUnreadFilterShowingAllBookmarks:(_Bool)arg2;	// IMP=0x000000010002a510
- (id)readingListViewControllerCurrentReadingListItem:(id)arg1;	// IMP=0x000000010002a474
- (void)readingListViewController:(id)arg1 didProduceNavigationIntent:(id)arg2;	// IMP=0x000000010002a3d8
- (void)historyTableViewControllerDidDismissPopover:(id)arg1;	// IMP=0x000000010002a3c8
- (void)historyTableViewControllerDidPresentPopover:(id)arg1;	// IMP=0x000000010002a3b4
- (void)historyTableViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010002a3a4
- (void)historyTableViewControllerDidBeginEditing:(id)arg1;	// IMP=0x000000010002a394
- (void)historyTableViewController:(id)arg1 didProduceNavigationIntent:(id)arg2;	// IMP=0x000000010002a2f8
- (void)bookmarksTableViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010002a2e8
- (void)bookmarksTableViewControllerDidBeginEditing:(id)arg1;	// IMP=0x000000010002a2d8
- (struct UIEdgeInsets)contentInsetForBookmarksTableViewController:(id)arg1;	// IMP=0x000000010002a2c0
- (struct UIEdgeInsets)separatorInsetForBookmarksTableViewController:(id)arg1;	// IMP=0x000000010002a288
- (void)bookmarksTableViewController:(id)arg1 didProduceNavigationIntent:(id)arg2;	// IMP=0x000000010002a1d8
- (void)bookmarkFavoritesViewControllerWillDismissLinkPreview:(id)arg1;	// IMP=0x000000010002a068
- (void)bookmarkFavoritesViewController:(id)arg1 commitPreviewedViewController:(id)arg2;	// IMP=0x0000000100029fd0
- (id)bookmarkFavoritesViewController:(id)arg1 previewViewControllerForNavigationIntent:(id)arg2;	// IMP=0x0000000100029f1c
- (struct UIEdgeInsets)contentInsetForFavoritesViewController:(id)arg1;	// IMP=0x0000000100029f04
- (void)bookmarkFavoritesViewController:(id)arg1 provideContextResponseWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029e58
- (void)didTapOutsideBookmarkFavoritesViewController:(id)arg1;	// IMP=0x0000000100029dc4
- (void)bookmarkFavoritesViewControllerContentDidBecomeDirty:(id)arg1;	// IMP=0x0000000100029db8
- (_Bool)bookmarkFavoritesViewControllerIsPresentedInsideBlankTab:(id)arg1;	// IMP=0x0000000100029d24
- (long long)bookmarkFavoritesViewControllerFavoritesGridViewLayoutType:(id)arg1;	// IMP=0x0000000100029c68
- (void)bookmarkFavoritesViewController:(id)arg1 editBookmark:(id)arg2;	// IMP=0x0000000100029bd0
- (void)bookmarkFavoritesViewController:(id)arg1 didSelectFolder:(id)arg2;	// IMP=0x0000000100029ae0
- (void)bookmarkFavoritesViewController:(id)arg1 didProduceNavigationIntent:(id)arg2;	// IMP=0x0000000100029a78
- (void)dealloc;	// IMP=0x000000010000a7bc
- (void)_setContentsDirty;	// IMP=0x0000000100029a18
- (void)_clearBookmarkSyncTimer;	// IMP=0x000000010000a4b4
- (void)_bookmarkSyncTimerDidFire:(id)arg1;	// IMP=0x000000010000a474
- (void)_updateDoneButtonItemForViewController:(id)arg1;	// IMP=0x0000000100029674
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100029668
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000981c
- (_Bool)_createSavedPanelStateForTesting;	// IMP=0x00000001000295bc
- (void)_restoreCurrentCollectionState;	// IMP=0x000000010000930c
- (void)_restorePanelState;	// IMP=0x0000000100008d14
- (void)_savePanelState;	// IMP=0x000000010000a550
- (void)_loadSavedPanelState;	// IMP=0x0000000100008c3c
- (id)newRootViewControllerForCollection:(id)arg1;	// IMP=0x0000000100008fbc
- (id)newBookmarksTableViewControllerWithFolder:(id)arg1 skipOffset:(unsigned int)arg2;	// IMP=0x00000001000294e0
- (void)_selectedCollectionChanged:(id)arg1;	// IMP=0x00000001000293e8
- (struct CGSize)_segmentedControlItemOffsetForCollection:(id)arg1;	// IMP=0x0000000100029334
- (id)_segmentedControlItemForCollection:(id)arg1;	// IMP=0x000000010002926c
- (void)_doneButtonPressed;	// IMP=0x00000001000291d8
- (void)_setupCollectionSegmentedControlIfNeeded;	// IMP=0x0000000100028f28
- (void)_setupCollections;	// IMP=0x0000000100008b48
- (_Bool)rebaseOnAncestorBookmark:(id)arg1 skipOffset:(unsigned int)arg2;	// IMP=0x0000000100028b78
- (_Bool)rebaseOnDescendentBookmark:(id)arg1;	// IMP=0x0000000100028970
- (void)reloadBookmarksForFolder:(id)arg1;	// IMP=0x00000001000287b8
- (void)_didPressNewFolderButton;	// IMP=0x00000001000286c4
- (void)toggleEditBookmarks;	// IMP=0x00000001000286a4
- (void)_didPressEditButton;	// IMP=0x0000000100028694
- (void)_didPressEditingDoneButton;	// IMP=0x0000000100028684
- (void)_setEditingFromToolbarButton:(_Bool)arg1;	// IMP=0x00000001000284e8
- (void)updateToolbarItemsAnimated:(_Bool)arg1;	// IMP=0x000000010002848c
- (void)_updateToolbarItemsForViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000283e0
- (id)_toolbarItemsForViewController:(id)arg1;	// IMP=0x00000001000281cc
- (void)_createToolbarItemsIfNecessary;	// IMP=0x0000000100028060
- (_Bool)_shouldShowPaletteForViewController:(id)arg1;	// IMP=0x0000000100027f60
- (void)bookmarkSourceContentsChanged:(id)arg1;	// IMP=0x0000000100027ed0
- (void)_updateClearHistoryButton;	// IMP=0x0000000100027e90
- (void)showLockedBookmarksDatabaseAlertForBookmarkAddition:(_Bool)arg1;	// IMP=0x0000000100027df4
- (void)_clearBookmarkLockTimer;	// IMP=0x0000000100027db8
- (void)_unlockBookmarksNow;	// IMP=0x0000000100027d70
- (void)unlockBookmarksSoon;	// IMP=0x0000000100027d0c
- (_Bool)lockBookmarks;	// IMP=0x0000000100027cb4
@property(readonly, nonatomic) _Bool hasBookmarksLock;
- (id)_pathForBookmark:(id)arg1 startingFromAncestor:(id)arg2;	// IMP=0x0000000100027ab8
- (id)_lastExistingBookmarkWithUUIDs:(id)arg1;	// IMP=0x0000000100027960
- (void)_reloadSucceeded;	// IMP=0x00000001000278cc
- (void)_reloadFailed;	// IMP=0x0000000100027838
- (void)reloadViewControllers;	// IMP=0x0000000100026e98
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100026e48
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010000a69c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000a4f0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100009c98
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000093c0
- (void)setPinnedPaletteForViewController:(id)arg1;	// IMP=0x0000000100026cd0
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000100026c8c
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100026b48
- (void)viewDidLoad;	// IMP=0x0000000100026ac0
- (void)setRootBookmark:(id)arg1 skipOffset:(unsigned int)arg2;	// IMP=0x0000000100026a08
- (id)rootBookmark;	// IMP=0x000000010002698c
@property(readonly, nonatomic) BookmarkFavoritesViewController *topFavoritesViewController;
@property(readonly, nonatomic) BookmarkFavoritesViewController *rootFavoritesViewController;
- (id)topReadingListViewController;	// IMP=0x0000000100026828
- (id)topmostBookmarksTableViewController;	// IMP=0x00000001000266c4
- (id)topBookmarksTableViewController;	// IMP=0x0000000100026658
- (id)topHistoryTableViewController;	// IMP=0x00000001000265ec
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100026400
- (_Bool)_isVisibleFolderID:(int)arg1;	// IMP=0x0000000100026278
- (void)_folderContentsDidChange:(id)arg1;	// IMP=0x0000000100026018
- (void)_webBookmarksDidReload:(id)arg1;	// IMP=0x000000010002600c
- (void)_applicationSuspended:(id)arg1;	// IMP=0x0000000100025fec
- (void)_updateBookmarkCollection;	// IMP=0x0000000100025d1c
- (void)_bookmarkCollectionHasBecomeAvailable:(id)arg1;	// IMP=0x0000000100025d10
- (id)_initWithBookmarksDelegate:(id)arg1 linkPreviewProvider:(id)arg2 topBookmark:(id)arg3 skipOffset:(unsigned int)arg4 showOnlyFavorites:(_Bool)arg5;	// IMP=0x0000000100025880
- (id)initWithBookmarksDelegate:(id)arg1 linkPreviewProvider:(id)arg2 topBookmark:(id)arg3 skipOffset:(unsigned int)arg4;	// IMP=0x00000001000257f4
- (id)initWithBookmarksDelegate:(id)arg1 linkPreviewProvider:(id)arg2;	// IMP=0x000000010002578c
- (id)initShowingOnlyFavoritesWithBookmarksDelegate:(id)arg1 linkPreviewProvider:(id)arg2;	// IMP=0x0000000100025724

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

