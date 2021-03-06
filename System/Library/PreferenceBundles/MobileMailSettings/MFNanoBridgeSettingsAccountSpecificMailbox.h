//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MFNanoBridgeSettingsMailbox.h"

#import "NSSecureCoding-Protocol.h"

@class MFMailboxUid, NSString, NSURL;

@interface MFNanoBridgeSettingsAccountSpecificMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding>
{
    MFMailboxUid *_mailboxUid;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSURL *_mailboxURL;	// 24 = 0x18
    NSString *_accountUniqueIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011814
- (void).cxx_destruct;	// IMP=0x00000000000122f0
@property(readonly, nonatomic) NSURL *mailboxURL; // @synthesize mailboxURL=_mailboxURL;
@property(readonly, nonatomic) NSString *accountUniqueIdentifier; // @synthesize accountUniqueIdentifier=_accountUniqueIdentifier;
- (id)_mailboxUid;	// IMP=0x0000000000011f7c
@property(readonly, nonatomic) NSString *mailboxId;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011de0
- (unsigned long long)hash;	// IMP=0x0000000000011d7c
- (_Bool)isValid;	// IMP=0x0000000000011d40
- (unsigned long long)level;	// IMP=0x0000000000011cb0
- (id)icon;	// IMP=0x0000000000011b4c
- (id)displayName;	// IMP=0x0000000000011aa0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011908
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001181c
@property(readonly, nonatomic) long long type;
- (void)invalidateCachedData;	// IMP=0x0000000000011798
- (unsigned long long)mailboxFilterType;	// IMP=0x0000000000011790
- (id)initWithAccountUniqueIdentifier:(id)arg1 mailboxURL:(id)arg2;	// IMP=0x000000000001169c
- (id)initWithMailboxUid:(id)arg1 account:(id)arg2;	// IMP=0x00000000000114d8

@end

