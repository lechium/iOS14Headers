//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSForYouRecommendationMediatorDataSource.h>

@class NSObject, ReadingListLeadImageCache;
@protocol OS_dispatch_queue, WBBookmarkProvider;

@interface ReadingListForYouDataSource : WBSForYouRecommendationMediatorDataSource
{
    id <WBBookmarkProvider> _bookmarkProvider;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_bookmarkProviderAccessQueue;	// 16 = 0x10
    ReadingListLeadImageCache *_leadImageCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100078c88
- (void)_readingListContentsDidChange:(id)arg1;	// IMP=0x0000000100078c78
- (void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100078534
- (void)dealloc;	// IMP=0x00000001000784bc
- (id)initWithBookmarkProvider:(id)arg1 accessQueue:(id)arg2 imageCache:(id)arg3;	// IMP=0x0000000100078300

@end
