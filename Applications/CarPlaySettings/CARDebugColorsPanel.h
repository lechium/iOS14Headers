//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSettingsCollectionPanel.h"

#import "DebugColorViewDelegate-Protocol.h"

@class CARSettingsCellSpecifier, NSArray, NSString, UIView;

@interface CARDebugColorsPanel : CARSettingsCollectionPanel <DebugColorViewDelegate>
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    UIView *_phoneView;	// 16 = 0x10
    NSArray *_cellSpecifiers;	// 24 = 0x18
    NSArray *_colorModels;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100007c3c
@property(readonly) NSArray *colorModels; // @synthesize colorModels=_colorModels;
- (void)colorViewWasTapped:(id)arg1;	// IMP=0x0000000100007bb4
- (unsigned long long)numberOfColumns;	// IMP=0x0000000100007bac
- (id)cellSpecifiers;	// IMP=0x0000000100007880
- (void)viewDidLoad;	// IMP=0x000000010000784c
- (id)initWithPanelController:(id)arg1;	// IMP=0x0000000100007084
- (void)_phoneButtonPressed:(id)arg1;	// IMP=0x0000000100006f98
- (id)phoneView;	// IMP=0x0000000100006940
- (id)cellSpecifier;	// IMP=0x00000001000067e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
