//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString;

@interface DNDWDSettingsAutoreplyMessageController : PSListController <UITextViewDelegate>
{
}

- (id)_autoreplyText:(id)arg1;	// IMP=0x0000000000009f30
- (void)_setAutoreplyText:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x0000000000009e80
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0000000000009e2c
- (void)textViewDidChange:(id)arg1;	// IMP=0x0000000000009d60
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000009bf8
- (double)_insetHeightForTextView:(id)arg1;	// IMP=0x0000000000009b44
- (id)_messageCell;	// IMP=0x0000000000009a88
- (void)suspend;	// IMP=0x00000000000099c8
- (id)specifiers;	// IMP=0x0000000000009858

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
