//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFPopoverSizingTableViewController.h>

#import "BookmarksFolderViewController-Protocol.h"
#import "BookmarksPanelStateRestoring-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDragDelegate-Protocol.h"
#import "UITableViewDropDelegate-Protocol.h"
#import "_SFBookmarkInfoViewControllerDelegate-Protocol.h"
#import "_SFWebBookmarkActionHandler-Protocol.h"

@class NSString, UISearchBar, WebBookmark, WebBookmarkCollection, WebBookmarkList;
@protocol BookmarksTableViewControllerDelegate, LinkPreviewProvider;

@interface BookmarksTableViewController : _SFPopoverSizingTableViewController <UISearchBarDelegate, UITableViewDragDelegate, UITableViewDropDelegate, _SFBookmarkInfoViewControllerDelegate, _SFWebBookmarkActionHandler, BookmarksFolderViewController, BookmarksPanelStateRestoring>
{
    WebBookmarkCollection *_collection;	// 8 = 0x8
    WebBookmarkList *_bookmarkList;	// 16 = 0x10
    WebBookmark *_favoritesFolder;	// 24 = 0x18
    UISearchBar *_searchBar;	// 32 = 0x20
    NSString *_userTypedFilter;	// 40 = 0x28
    unsigned long long _skipOffset;	// 48 = 0x30
    _Bool _needsInitialContentOffsetUpdateForTableHeaderView;	// 56 = 0x38
    _Bool _needsContentOffsetUpdate;	// 57 = 0x39
    _Bool _shouldDeferReload;	// 58 = 0x3a
    _Bool _previewing;	// 59 = 0x3b
    WebBookmark *_folder;	// 64 = 0x40
    id <BookmarksTableViewControllerDelegate> _delegate;	// 72 = 0x48
    id <LinkPreviewProvider> _linkPreviewProvider;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010002ec98
@property(nonatomic, getter=isPreviewing) _Bool previewing; // @synthesize previewing=_previewing;
@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) __weak id <BookmarksTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WebBookmark *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
- (void)updateUserActivityState:(id)arg1;	// IMP=0x000000010002eb84
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;	// IMP=0x000000010002eb38
- (long long)_tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000010002eb30
- (void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x000000010002e6f4
- (void)_moveBookmarks:(id)arg1 toFolderID:(int)arg2 toIndex:(unsigned int)arg3 shouldReorder:(_Bool)arg4;	// IMP=0x000000010002e37c
- (id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000010002e210
- (_Bool)tableView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x000000010002e188
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010002e180
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x000000010002e16c
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010002e158
- (id)_dragItemsAtIndexPath:(id)arg1 includingFolders:(_Bool)arg2;	// IMP=0x000000010002e01c
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x000000010002e00c
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x000000010002df80
- (void)bookmark:(id)arg1 didProduceNavigationIntent:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000010002df1c
- (void)editBookmark:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010002dedc
- (void)deleteBookmark:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010002de8c
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;	// IMP=0x000000010002de80
- (_Bool)hasTranslucentAppearance;	// IMP=0x000000010002ddfc
- (id)safari_tableViewScrollPositionSaveIdentifier;	// IMP=0x000000010002dda0
- (id)selectedBookmarks;	// IMP=0x000000010002dbf8
- (_Bool)restoreStateWithDictionary:(id)arg1;	// IMP=0x000000010002d8c4
- (id)currentStateDictionary;	// IMP=0x000000010002d768
- (void)setScrollViewScrollsToTop:(_Bool)arg1;	// IMP=0x000000010002d720
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000010002d5ac
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000010002d34c
- (void)_deleteBookmark:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010002cf08
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010002ce84
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x000000010002ce14
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000010002cd10
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000096cc
- (void)_updateTableViewCellsTextStyleForEditing:(_Bool)arg1;	// IMP=0x000000010002cb4c
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000010002cb08
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000010002c8e0
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000010002c838
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x000000010002c54c
- (_Bool)tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x000000010002c4dc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100009df8
- (void)_pushInfoViewControllerForBookmark:(id)arg1;	// IMP=0x000000010002c3d0
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100009d54
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100009b70
- (id)_tableViewCellForBookmark:(id)arg1;	// IMP=0x000000010002bef8
- (id)_fontForCurrentTraitCollection;	// IMP=0x000000010002be5c
- (id)bookmarksTableViewCellWithReuseIdentifier:(id)arg1;	// IMP=0x000000010002bc78
- (id)_bookmarkAtIndexPath:(id)arg1;	// IMP=0x0000000100009bd4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100009ab4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000096c4
- (_Bool)safari_wantsDoneButtonInModalBookmarksPanel;	// IMP=0x000000010002bc70
- (void)viewDidLayoutSubviews;	// IMP=0x000000010002bc20
- (void)_updateContentOffsetIfNeeded;	// IMP=0x000000010002bb34
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010002bac4
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x000000010002ba50
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010002b928
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100009674
- (void)viewDidLoad;	// IMP=0x00000001000094b4
- (void)updateSeparatorInset;	// IMP=0x000000010002b7e8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010002b4f8
- (void)loadView;	// IMP=0x000000010002b440
- (id)bookmarksNavigationController;	// IMP=0x0000000100009658
- (long long)minimumNumberOfRows;	// IMP=0x000000010002b3f4
@property(readonly, nonatomic) int folderID;
- (void)reloadBookmarks;	// IMP=0x000000010002b260
- (void)_recreateBookmarkLists;	// IMP=0x000000010002b0a4
- (_Bool)_inRootFolder;	// IMP=0x0000000100009b40
- (void)_updateTitle;	// IMP=0x000000010002afbc
- (id)initWithFolder:(id)arg1 inCollection:(id)arg2 skipOffset:(unsigned int)arg3;	// IMP=0x0000000100009184
- (id)initWithFolder:(id)arg1 inCollection:(id)arg2;	// IMP=0x0000000100009124

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

