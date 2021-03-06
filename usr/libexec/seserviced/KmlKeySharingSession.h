//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "KmlSession.h"

#import "KmlFriendSharingManagerDelegate-Protocol.h"
#import "KmlKeySharingProtocol-Protocol.h"
#import "KmlOwnerSharingManagerDelegate-Protocol.h"

@class KmlFriendSharingManager, KmlOwnerSharingManager, NSString;

@interface KmlKeySharingSession : KmlSession <KmlOwnerSharingManagerDelegate, KmlFriendSharingManagerDelegate, KmlKeySharingProtocol>
{
    CDUnknownBlockType _cancelOwnerPairingHandler;	// 8 = 0x8
    KmlOwnerSharingManager *_oksManager;	// 16 = 0x10
    KmlFriendSharingManager *_fsManager;	// 24 = 0x18
    CDUnknownBlockType _friendSideSharingCallback;	// 32 = 0x20
    CDUnknownBlockType _ownerSideSharingInvitationCallback;	// 40 = 0x28
    CDUnknownBlockType _sharingCancelCallback;	// 48 = 0x30
    CDUnknownBlockType _ownerSideSilentSharingCallback;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010005f748
- (void)handleFriendSideKeySharingCancelStatus:(id)arg1;	// IMP=0x000000010005f668
- (void)handleExchangeStartedWithFriendKey:(id)arg1 status:(id)arg2;	// IMP=0x000000010005f550
- (void)handleFriendSideSharingCompletionWithStatus:(id)arg1;	// IMP=0x000000010005f46c
- (void)handleOwnerKeySharingInvitations:(id)arg1 withError:(id)arg2;	// IMP=0x000000010005f29c
- (void)handleOwnerKeySharingCancelStatus:(id)arg1;	// IMP=0x000000010005f230
- (oneway void)setBindingAttestation:(id)arg1 forKeyWithIdentifier:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000010005ed90
- (oneway void)requestBindingAttestationDataForKeyWithIdentifier:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000010005eac4
- (oneway void)requestInviteWithConfig:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005e920
- (oneway void)startKeyExchangeWithInvitationIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005e7a0
- (oneway void)cancelSharingInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005e610
- (oneway void)authorizeSharingInvitationIdentifier:(id)arg1 auth:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010005e528
- (oneway void)sendSilentSharingInviteForKeyIdentifier:(id)arg1 config:(id)arg2 groupIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010005e1f8
- (oneway void)sendSharingInviteForKeyIdentifier:(id)arg1 toIdsIdentifier:(id)arg2 auth:(id)arg3 config:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010005de58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

