//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIContextMenuInteractionDelegate-Protocol.h"
#import "UIDragInteractionDelegate-Protocol.h"
#import "UIDragInteractionDelegate_Private-Protocol.h"
#import "UIDropInteractionDelegate-Protocol.h"
#import "UIDropInteractionDelegate_Private-Protocol.h"

@class NSMapTable, NSString, TabDocumentDropHandler;
@protocol TabDocumentDragDropDataSource, UIDragSession;

@interface TabDragDropInteractionController : NSObject <UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, UIDragInteractionDelegate, UIDropInteractionDelegate, UIContextMenuInteractionDelegate>
{
    NSMapTable *_placeholderDocumentsForSessions;	// 8 = 0x8
    NSMapTable *_insertedTabsForDragItems;	// 16 = 0x10
    unsigned long long _dropAnimationCount;	// 24 = 0x18
    NSMapTable *_hasHiddenDocumentsForDragSessions;	// 32 = 0x20
    id <UIDragSession> _pendingDragSession;	// 40 = 0x28
    id <TabDocumentDragDropDataSource> _dataSource;	// 48 = 0x30
    TabDocumentDropHandler *_dropHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100135458
@property(readonly, nonatomic) TabDocumentDropHandler *dropHandler; // @synthesize dropHandler=_dropHandler;
@property(readonly, nonatomic) __weak id <TabDocumentDragDropDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000100135298
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x00000001001350c4
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x0000000100134ec4
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000001001342d8
- (id)_autoscroller;	// IMP=0x0000000100134250
- (void)_transitionToDragState:(long long)arg1 fromDragState:(long long)arg2 forTabCollectionItemsInSession:(id)arg3;	// IMP=0x0000000100133fbc
- (id)_insertPlaceholderTabIfNeededForSession:(id)arg1;	// IMP=0x0000000100133cbc
- (id)_viewForTransitionToItem:(id)arg1 withTabCollectionView:(id)arg2;	// IMP=0x0000000100133c20
- (void)_unhideTabDocumentsForLocalDragSession:(id)arg1;	// IMP=0x0000000100133b40
- (id)_tabCollectionItemAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000100133ab8
- (id)_newDragItemsAtPoint:(struct CGPoint)arg1 excludingTabDocuments:(id)arg2;	// IMP=0x00000001001338c0
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x00000001001338b8
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x00000001001338b0
- (void)_cleanUpDragPreviewForSesssion:(id)arg1;	// IMP=0x0000000100133714
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;	// IMP=0x000000010013370c
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;	// IMP=0x00000001001336d8
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;	// IMP=0x00000001001335dc
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;	// IMP=0x0000000100133560
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x00000001001333ec
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x0000000100133284
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x00000001001331b4
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;	// IMP=0x0000000100133154
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x000000010013314c
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;	// IMP=0x0000000100132c38
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x00000001001327b8
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;	// IMP=0x000000010013263c
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x0000000100132030
- (void)_cleanUpDropPlaceholderForSession:(id)arg1;	// IMP=0x0000000100131f2c
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;	// IMP=0x0000000100131f1c
- (_Bool)_tabViewIsFilteringTabs:(id)arg1;	// IMP=0x0000000100131e68
- (_Bool)_shouldMovePlaceholderItem:(id)arg1 overTargetItem:(id)arg2 withDropLocation:(struct CGPoint)arg3;	// IMP=0x0000000100131b10
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x0000000100131604
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;	// IMP=0x0000000100131578
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x0000000100131560
- (id)initWithDataSource:(id)arg1 dropHandler:(id)arg2;	// IMP=0x0000000100131438

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
