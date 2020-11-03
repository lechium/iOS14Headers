//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AXNamedItemsListController.h"

#import "AXGestureRecorderMainViewControllerDelegate-Protocol.h"

@class AXGestureRecorderMainViewController, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CustomGestureController : AXNamedItemsListController <AXGestureRecorderMainViewControllerDelegate>
{
    NSMutableArray *_hiddenSpecifiers;	// 192 = 0xc0
    AXGestureRecorderMainViewController *_gestureRecorderMainViewController;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000005ad0c
- (void)gestureRecorder:(id)arg1 saveNamedReplayableGesture:(id)arg2;	// IMP=0x000000000005ac50
- (void)gestureRecorder:(id)arg1 saveGestureWithPropertyListRepresentation:(id)arg2;	// IMP=0x000000000005ab74
- (_Bool)gestureRecorder:(id)arg1 canSaveGestureWithName:(id)arg2;	// IMP=0x000000000005a9c8
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000005a930
@property(readonly, nonatomic) _Bool shouldRecordRealTimeGesture;
@property(readonly, nonatomic) unsigned long long maximumNumberOfCustomGestures;
@property(readonly, nonatomic) NSString *customGesturesExplanatoryText;
@property(readonly, nonatomic) NSString *customGesturesTitle;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000005a6ec
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000005a698
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005a644
- (void)willResignActive;	// IMP=0x000000000005a634
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000005a500
- (void)_createCustomGesture;	// IMP=0x000000000005a41c
- (id)specifiers;	// IMP=0x000000000005a3c0
- (void)_hideSpecifiersDuringEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000059fc8
- (void)_disableCreateNewGestureButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000059ea4
- (_Bool)_shouldDisableCreateNewGestureButton;	// IMP=0x0000000000059de8
- (_Bool)_isGestureNameSpecifier:(id)arg1;	// IMP=0x0000000000059ddc
- (id)_customGestures;	// IMP=0x0000000000059dd0
- (id)specifierForKey:(id)arg1 withSpecifiers:(id)arg2;	// IMP=0x0000000000059c34
@property(readonly, nonatomic) NSArray *customGestureSpecifiers;
- (void)handleExternalSettingsChange;	// IMP=0x00000000000598a4
- (id)setName:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000059840
- (id)nameForItem:(id)arg1;	// IMP=0x000000000005976c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
