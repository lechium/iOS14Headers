//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC9Magnifier26EditControlsViewController.h"

#import "UIAdaptivePresentationControllerDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@interface _TtC9Magnifier26EditControlsViewController (Magnifier) <UIAdaptivePresentationControllerDelegate, UITableViewDelegate>
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x000000010008b42c
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010008bbe4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010008bb04
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000010008b8b0
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000010008b5fc
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000010008b57c
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000010008b478
@end
