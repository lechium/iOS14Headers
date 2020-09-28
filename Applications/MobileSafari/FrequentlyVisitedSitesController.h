//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSFrequentlyVisitedSitesController.h>

@class NSMutableArray, WebBookmarkCollection;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController
{
    WebBookmarkCollection *_bookmarkCollection;	// 16 = 0x10
    _Bool _bookmarksNeedToSave;	// 24 = 0x18
    NSMutableArray *_cachedFrequentlyVisitedBookmarks;	// 32 = 0x20
    _Bool _ignoreBookmarksFolderChangeNotifications;	// 40 = 0x28
}

+ (id)sharedController;	// IMP=0x00000001000b7e00
- (void).cxx_destruct;	// IMP=0x00000001000b9264
- (_Bool)_saveFrequentlyVisitedSites:(id)arg1;	// IMP=0x00000001000b9258
- (_Bool)_updateCachedFrequentlyVisitedSitesWithCandidates:(id)arg1;	// IMP=0x00000001000b8dec
- (id)_existingIconsDataFromBookmarksDB;	// IMP=0x00000001000b8b38
- (void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b88a0
- (id)_canonicalizedFavoritesURLStringSet;	// IMP=0x00000001000b86b8
- (void)_clearFrequentlyVisitedSitesInBookmarksDB;	// IMP=0x00000001000b8628
- (void)_receivedBookmarksFolderContentChangedNotification:(id)arg1;	// IMP=0x00000001000b8514
- (void)banFrequentlyVisitedSite:(id)arg1 inMemoryBookmarkChangeTrackingAvailable:(_Bool)arg2;	// IMP=0x00000001000b83c8
- (void)promoteFrequentlyVisitedSite:(id)arg1 toFavoriteAtIndex:(unsigned long long)arg2;	// IMP=0x00000001000b81c0
- (void)clearFrequentlyVisitedSites;	// IMP=0x00000001000b815c
- (id)frequentlyVisitedSites;	// IMP=0x00000001000b8070
- (void)dealloc;	// IMP=0x00000001000b7ff8
- (id)initWithBookmarkCollection:(id)arg1;	// IMP=0x00000001000b7eb4

@end
