//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AXCaptionStyleChooserController.h"

__attribute__((visibility("hidden")))
@interface AXCaptionTextFontController : AXCaptionStyleChooserController
{
    struct CGFont *selectedFont;	// 232 = 0xe8
}

@property(retain, nonatomic) struct CGFont *selectedFont; // @synthesize selectedFont;
- (id)_videoOverrideText;	// IMP=0x00000000000cc93c
- (void)_setVideoOverridesStyle:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000cc8a4
- (id)_videoOverridesStyle:(id)arg1;	// IMP=0x00000000000cc85c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000cc5e8
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000cc444
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000cc2c8
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000000cc1bc
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000cc124
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000000000cc08c
- (id)specifiers;	// IMP=0x00000000000cba14
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000cb960
- (void)_manageEditButton;	// IMP=0x00000000000cb87c
- (void)_donePressed;	// IMP=0x00000000000cb840
- (void)_editPressed:(id)arg1;	// IMP=0x00000000000cb7ac
- (long long)textCategory;	// IMP=0x00000000000cb734

@end
