//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

__attribute__((visibility("hidden")))
@interface VoiceOverBrailleInputOutputController : AXUISettingsBaseListController
{
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000005d160
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000005cedc
- (void)setShouldReverseDotsEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000005ce5c
- (id)shouldReverseDotsEnabled:(id)arg1;	// IMP=0x000000000005cde4
- (void)setGradeTwoAutoTransateEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000005cd74
- (id)gradeTwoAutoTranslatedEnabled:(id)arg1;	// IMP=0x000000000005ccfc
- (_Bool)_shouldShowAutoTranslate;	// IMP=0x000000000005cc88
- (id)specifiers;	// IMP=0x000000000005c4e4
- (_Bool)_shouldShowEightDotBraille;	// IMP=0x000000000005c4b8
- (_Bool)_isGesturesInput;	// IMP=0x000000000005c430
- (_Bool)_isActivityMode;	// IMP=0x000000000005c3a8
- (_Bool)_isDisplayInput;	// IMP=0x000000000005c320
- (void)viewDidLoad;	// IMP=0x000000000005c0d8

@end
