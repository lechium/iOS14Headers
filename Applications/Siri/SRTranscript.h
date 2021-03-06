//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFQueueDelegate-Protocol.h"
#import "NSFastEnumeration-Protocol.h"
#import "SRTranscriptItemGroupDelegate-Protocol.h"

@class AFQueue, NSMutableArray, NSMutableDictionary, NSString;
@protocol SRTranscriptDataSource, SRTranscriptDelegate;

@interface SRTranscript : NSObject <AFQueueDelegate, SRTranscriptItemGroupDelegate, NSFastEnumeration>
{
    id <SRTranscriptDataSource> _dataSource;	// 8 = 0x8
    id <SRTranscriptDelegate> _delegate;	// 16 = 0x10
    NSMutableArray *_allTranscriptItems;	// 24 = 0x18
    NSMutableArray *_exposedTranscriptItems;	// 32 = 0x20
    NSMutableArray *_waitingTranscriptItems;	// 40 = 0x28
    NSMutableDictionary *_exposedIdToWaitingIdMap;	// 48 = 0x30
    NSMutableDictionary *_waitingIdToExposedIdMap;	// 56 = 0x38
    AFQueue *_loadingTranscriptItemGroupQueue;	// 64 = 0x40
    long long _discardedItemCount;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010002492c
@property(readonly, nonatomic) long long discardedItemCount; // @synthesize discardedItemCount=_discardedItemCount;
@property(readonly, nonatomic, getter=_loadingTranscriptItemGroupQueue) AFQueue *loadingTranscriptItemGroupQueue; // @synthesize loadingTranscriptItemGroupQueue=_loadingTranscriptItemGroupQueue;
@property(retain, nonatomic) NSMutableDictionary *waitingIdToExposedIdMap; // @synthesize waitingIdToExposedIdMap=_waitingIdToExposedIdMap;
@property(retain, nonatomic) NSMutableDictionary *exposedIdToWaitingIdMap; // @synthesize exposedIdToWaitingIdMap=_exposedIdToWaitingIdMap;
@property(retain, nonatomic) NSMutableArray *waitingTranscriptItems; // @synthesize waitingTranscriptItems=_waitingTranscriptItems;
@property(readonly, nonatomic, getter=_exposedTranscriptItems) NSMutableArray *exposedTranscriptItems; // @synthesize exposedTranscriptItems=_exposedTranscriptItems;
@property(readonly, nonatomic, getter=_allTranscriptItems) NSMutableArray *allTranscriptItems; // @synthesize allTranscriptItems=_allTranscriptItems;
@property(nonatomic) __weak id <SRTranscriptDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SRTranscriptDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)_transcriptHasProvisionalItems;	// IMP=0x0000000100024734
- (id)_aceObjectForItemAtIndex:(long long)arg1;	// IMP=0x00000001000246c8
- (id)_transcriptItemsForDataSourceItemsAtIndexes:(id)arg1;	// IMP=0x0000000100024648
- (id)_transcriptItemForDataSourceItemAtIndex:(long long)arg1;	// IMP=0x0000000100024558
- (long long)conversationIndexForTranscriptLevelModelItemAtIndex:(long long)arg1;	// IMP=0x00000001000244d4
- (unsigned long long)_waitingIndexOfTranscriptItemWithAceObjectAceId:(id)arg1;	// IMP=0x000000010002431c
- (unsigned long long)_conversationIndexOfTranscriptItemWithAceObjectAceId:(id)arg1;	// IMP=0x000000010002413c
- (unsigned long long)_conversationIndexForTranscriptItem:(id)arg1;	// IMP=0x00000001000240c4
- (id)conversationIndexesForTranscriptLevelModelItemsAtIndexes:(id)arg1;	// IMP=0x0000000100023f34
- (long long)_conversationIndexForWaitingTranscriptItem:(id)arg1;	// IMP=0x0000000100023e68
- (void)_clearViewControllerDelegateForTranscriptItem:(id)arg1;	// IMP=0x0000000100023de4
- (void)_notifyThatViewControllerWillBeRemoved:(id)arg1;	// IMP=0x0000000100023d58
- (void)clearTranscriptItemViewControllerDelegates;	// IMP=0x0000000100023c2c
- (id)transcriptItemForViewController:(id)arg1;	// IMP=0x0000000100023aa0
- (id)_createTranscriptItemForAceObject:(id)arg1 itemIndex:(long long)arg2;	// IMP=0x00000001000238e8
- (id)_createErrorSnippetViewControllerWithAceObject:(id)arg1 itemIndex:(long long)arg2;	// IMP=0x000000010002381c
- (void)_configureViewController:(id)arg1 withAceObject:(id)arg2 itemIndex:(long long)arg3;	// IMP=0x00000001000235c4
- (void)enumerateTranscriptItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000235b0
- (void)enumerateTranscriptItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010002353c
- (unsigned long long)_indexOfTranscriptItemWithAceObjectAceId:(id)arg1;	// IMP=0x000000010002335c
- (unsigned long long)indexOfTranscriptItem:(id)arg1;	// IMP=0x00000001000232e4
- (id)lastItem;	// IMP=0x0000000100023290
- (id)transcriptItemForConversationItemWithIdentifier:(id)arg1;	// IMP=0x00000001000230cc
- (id)transcriptItemsAtIndexes:(id)arg1;	// IMP=0x000000010002304c
- (id)transcriptItemAtIndex:(long long)arg1;	// IMP=0x0000000100022f8c
@property(readonly, nonatomic) long long transcriptItemCount;
- (id)conversationItemIdentifierForViewController:(id)arg1;	// IMP=0x0000000100022d74
- (void)transcriptItemDidBecomeReadyToAppear:(id)arg1;	// IMP=0x0000000100022d68
- (void)_processLoadingTranscriptItemGroupQueue;	// IMP=0x0000000100021914
- (void)setErrorViewControllerForTranscriptItem:(id)arg1;	// IMP=0x0000000100021868
- (void)presentationStateDidChangeForItemsAtIndexes:(id)arg1;	// IMP=0x00000001000216b8
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2;	// IMP=0x0000000100020fcc
- (void)reloadItemsAtIndexes:(id)arg1;	// IMP=0x00000001000206b4
- (void)reloadViewControllerAtIndex:(long long)arg1;	// IMP=0x00000001000204c0
- (void)unloadViewControllerAtIndex:(long long)arg1;	// IMP=0x0000000100020450
- (void)insertItemsAtIndexes:(id)arg1;	// IMP=0x000000010001fc3c
- (void)reloadData;	// IMP=0x000000010001f674
- (void)transcriptItemGroupPresentationEligibilityDidChange:(id)arg1;	// IMP=0x000000010001f634
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;	// IMP=0x000000010001f628
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000010001f5bc
- (void)dealloc;	// IMP=0x000000010001f4ec
- (id)init;	// IMP=0x000000010001f39c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

