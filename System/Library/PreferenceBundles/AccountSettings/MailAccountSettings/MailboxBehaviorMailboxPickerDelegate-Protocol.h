//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MFMailboxUid, MailAccount;

@protocol MailboxBehaviorMailboxPickerDelegate
- (void)pickerDidChooseMailbox:(MFMailboxUid *)arg1 forType:(int)arg2;
- (MFMailboxUid *)mailboxUidForType:(int)arg1;
- (_Bool)storeMailboxTypeOnServer:(int)arg1;
- (MailAccount *)account;
@end
