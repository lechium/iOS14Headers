//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

@class HSSetupBridgedAccessoryItemManager;

@interface HSSetupBridgedAccessoryController : HUItemTableViewController
{
    _Bool _titlesHidden;	// 8 = 0x8
    HSSetupBridgedAccessoryItemManager *_setupBridgedAccessoryItemManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000510a0
@property(readonly) HSSetupBridgedAccessoryItemManager *setupBridgedAccessoryItemManager; // @synthesize setupBridgedAccessoryItemManager=_setupBridgedAccessoryItemManager;
@property(readonly, nonatomic) _Bool titlesHidden; // @synthesize titlesHidden=_titlesHidden;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000100051078
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x0000000100050f84
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000100050e7c
- (void)viewDidLoad;	// IMP=0x0000000100050dcc
- (id)initWithTitlesHidden:(_Bool)arg1;	// IMP=0x0000000100050d20
- (id)init;	// IMP=0x0000000100050d10

@end

