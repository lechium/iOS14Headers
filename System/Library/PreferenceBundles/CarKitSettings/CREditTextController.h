//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString;

@interface CREditTextController : PSListController <UITextViewDelegate>
{
}

- (id)_text:(id)arg1;	// IMP=0x000000000000c31c
- (void)_setText:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x000000000000c2b0
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x000000000000c25c
- (void)textViewDidChange:(id)arg1;	// IMP=0x000000000000c190
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000c028
- (double)_insetHeightForTextView:(id)arg1;	// IMP=0x000000000000bf74
- (id)_textCell;	// IMP=0x000000000000beb8
- (void)suspend;	// IMP=0x000000000000bdf8
- (id)specifiers;	// IMP=0x000000000000bc88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

