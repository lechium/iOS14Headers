//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol REMXPCIndexingPerformer
- (void)deleteAllSearchableItemsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)reindexSearchableItemsWithIdentifiers:(NSArray *)arg1 acknowledgementHandler:(void (^)(void))arg2;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg1;
- (void)testIndexDummyItemWithCompletion:(void (^)(NSError *))arg1;
@end
