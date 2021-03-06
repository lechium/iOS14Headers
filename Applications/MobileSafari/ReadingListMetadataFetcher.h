//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WebBookmarkCollection;
@protocol OS_dispatch_queue, ReadingListMetadataProvider;

@interface ReadingListMetadataFetcher : NSObject
{
    WebBookmarkCollection *_collection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_metadataSynchronizationQueue;	// 16 = 0x10
    NSMutableArray *_bookmarksPendingMetadata;	// 24 = 0x18
    _Bool _isFetchingMetadata;	// 32 = 0x20
    NSMutableArray *_bookmarksPendingThumbnail;	// 40 = 0x28
    id <ReadingListMetadataProvider> _defaultThumbnailProvider;	// 48 = 0x30
    _Bool _isFetchingThumbnail;	// 56 = 0x38
}

+ (_Bool)shouldFetchThumbnailForBookmark:(id)arg1;	// IMP=0x000000010007a740
+ (_Bool)shouldFetchMetadataForBookmark:(id)arg1;	// IMP=0x000000010007a628
+ (id)sharedMetadataFetcher;	// IMP=0x000000010007a448
- (void).cxx_destruct;	// IMP=0x000000010007c5e8
- (_Bool)_queue:(id)arg1 containsBookmark:(id)arg2;	// IMP=0x000000010007c460
- (void)_didFinishFetchingThumbnailForItem:(id)arg1;	// IMP=0x000000010007c424
- (void)_fetchNextItemThumbnail;	// IMP=0x000000010007c3b4
- (void)_didFinishFetchingMetadataForItem:(id)arg1;	// IMP=0x000000010007c378
- (void)_fetchNextItemMetadata;	// IMP=0x000000010007c308
- (_Bool)_lockAndSaveBookmark:(id)arg1 postNotification:(_Bool)arg2;	// IMP=0x000000010007c094
- (void)_didFailMetadataFetchForBookmarkWithID:(int)arg1;	// IMP=0x000000010007bff4
- (void)_setThumbnailImage:(id)arg1 fromURL:(id)arg2 forBookmarkWithID:(int)arg3;	// IMP=0x000000010007bf30
- (void)_setTitle:(id)arg1 previewText:(id)arg2 thumbnailURLString:(id)arg3 thumbnailImage:(id)arg4 forItem:(id)arg5;	// IMP=0x000000010007bcc8
- (void)_fetchThumbnailWithDefaultProviderForPendingItem:(id)arg1;	// IMP=0x000000010007b930
- (void)_fetchThumbnailForPendingItem:(id)arg1;	// IMP=0x000000010007b460
- (void)_fetchMetadataWithDefaultProviderForPendingItem:(id)arg1;	// IMP=0x000000010007b00c
- (void)_fetchMetadataForPendingItem:(id)arg1;	// IMP=0x000000010007aadc
- (void)fetchThumbnailForReadingListBookmark:(id)arg1 withProvider:(id)arg2;	// IMP=0x000000010007a954
- (void)fetchMetadataForReadingListBookmark:(id)arg1 withProvider:(id)arg2;	// IMP=0x000000010007a7e4
- (id)_initWithBookmarkCollection:(id)arg1;	// IMP=0x000000010007a52c

@end

