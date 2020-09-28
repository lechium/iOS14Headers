//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import "BFFFlowItem-Protocol.h"
#import "BuddyChooseable-Protocol.h"

@class BuddyChoice, BuddyTableChoiceManager, NSLayoutConstraint, NSMutableDictionary, NSString, OBAnimationController, UITableView;
@protocol BFFFlowItemDelegate;

@interface DeviceRestoreChoiceController : OBTableWelcomeController <BFFFlowItem, BuddyChooseable>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
    BuddyChoice *_cloudRestoreChoice;	// 16 = 0x10
    BuddyChoice *_iTunesRestoreChoice;	// 24 = 0x18
    BuddyChoice *_setUpAsNewChoice;	// 32 = 0x20
    BuddyChoice *_migrateFromAndroidChoice;	// 40 = 0x28
    BuddyChoice *_migrateFromiOSChoice;	// 48 = 0x30
    BuddyTableChoiceManager *_choiceManager;	// 56 = 0x38
    NSLayoutConstraint *_tableHeightAnchor;	// 64 = 0x40
    UITableView *_choiceTable;	// 72 = 0x48
    NSMutableDictionary *_choiceMap;	// 80 = 0x50
    OBAnimationController *_animationController;	// 88 = 0x58
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000632d8
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000631e0
- (void).cxx_destruct;	// IMP=0x00000001000652d4
@property(retain, nonatomic) OBAnimationController *animationController; // @synthesize animationController=_animationController;
@property(retain, nonatomic) NSMutableDictionary *choiceMap; // @synthesize choiceMap=_choiceMap;
@property(retain, nonatomic) UITableView *choiceTable; // @synthesize choiceTable=_choiceTable;
@property(retain, nonatomic) NSLayoutConstraint *tableHeightAnchor; // @synthesize tableHeightAnchor=_tableHeightAnchor;
@property(retain, nonatomic) BuddyTableChoiceManager *choiceManager; // @synthesize choiceManager=_choiceManager;
@property(retain, nonatomic) BuddyChoice *migrateFromiOSChoice; // @synthesize migrateFromiOSChoice=_migrateFromiOSChoice;
@property(retain, nonatomic) BuddyChoice *migrateFromAndroidChoice; // @synthesize migrateFromAndroidChoice=_migrateFromAndroidChoice;
@property(retain, nonatomic) BuddyChoice *setUpAsNewChoice; // @synthesize setUpAsNewChoice=_setUpAsNewChoice;
@property(retain, nonatomic) BuddyChoice *iTunesRestoreChoice; // @synthesize iTunesRestoreChoice=_iTunesRestoreChoice;
@property(retain, nonatomic) BuddyChoice *cloudRestoreChoice; // @synthesize cloudRestoreChoice=_cloudRestoreChoice;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100065090
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100064fd4
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100064f18
- (void)flowItemDidAppear:(_Bool)arg1;	// IMP=0x0000000100064ec0
- (void)_migrateFromiOSSelected;	// IMP=0x0000000100064bbc
- (void)selectChoiceForIdentifier:(id)arg1;	// IMP=0x0000000100064a44
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010006495c
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100064848
- (void)viewDidLoad;	// IMP=0x0000000100064520
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100064498
- (void)didSelectChoice:(id)arg1;	// IMP=0x00000001000642cc
- (void)_populateRestoreChoices;	// IMP=0x00000001000632e8
- (id)init;	// IMP=0x0000000100062d04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
