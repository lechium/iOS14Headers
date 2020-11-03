//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import "EFLoggable-Protocol.h"

@class NSArray, NSNumber, NSString, PSSpecifier;

@interface BlockedSenderSettingsPane : PSListController <EFLoggable>
{
    _Bool _blockSenderEnabled;	// 192 = 0xc0
    PSListController *_parentListController;	// 200 = 0xc8
    NSNumber *_blockSenderOptionState;	// 208 = 0xd0
    NSArray *_actionOptionsSpecifiers;	// 216 = 0xd8
    PSSpecifier *_blockSenderSwitch;	// 224 = 0xe0
}

+ (id)log;	// IMP=0x0000000000003e8c
- (void).cxx_destruct;	// IMP=0x00000000000050b8
@property(retain, nonatomic) PSSpecifier *blockSenderSwitch; // @synthesize blockSenderSwitch=_blockSenderSwitch;
@property(retain, nonatomic) NSArray *actionOptionsSpecifiers; // @synthesize actionOptionsSpecifiers=_actionOptionsSpecifiers;
@property(retain, nonatomic) NSNumber *blockSenderOptionState; // @synthesize blockSenderOptionState=_blockSenderOptionState;
@property(nonatomic) _Bool blockSenderEnabled; // @synthesize blockSenderEnabled=_blockSenderEnabled;
@property(nonatomic) __weak PSListController *parentListController; // @synthesize parentListController=_parentListController;
- (id)_blockedSenderActionOptionsSpecifier;	// IMP=0x0000000000004a8c
- (void)_writeBlockSenderEnabled:(_Bool)arg1 optionValue:(long long)arg2;	// IMP=0x0000000000004864
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000004640
- (void)setBlockSenderState:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x000000000000446c
- (id)blockSenderStateWithSpecifier:(id)arg1;	// IMP=0x0000000000004424
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000043d0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000004340
- (id)specifiers;	// IMP=0x0000000000003f84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
