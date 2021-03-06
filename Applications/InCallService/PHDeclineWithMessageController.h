//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSString, TUCall, TUHandle, TUReplyWithMessageStore, UIViewController;

@interface PHDeclineWithMessageController : NSObject <MFMessageComposeViewControllerDelegate>
{
    TUCall *_incomingCall;	// 8 = 0x8
    UIViewController *_customMessagePresentingViewController;	// 16 = 0x10
    TUReplyWithMessageStore *_cachedReplyStore;	// 24 = 0x18
}

+ (id)dismissalAssertionReason;	// IMP=0x00000001000e349c
+ (void)configureButton:(id)arg1 forIncomingCall:(id)arg2 fromCustomMessagePresentingViewController:(id)arg3;	// IMP=0x00000001000e2d6c
- (void).cxx_destruct;	// IMP=0x00000001000e4dec
@property(retain) TUReplyWithMessageStore *cachedReplyStore; // @synthesize cachedReplyStore=_cachedReplyStore;
@property(retain) UIViewController *customMessagePresentingViewController; // @synthesize customMessagePresentingViewController=_customMessagePresentingViewController;
@property(retain) TUCall *incomingCall; // @synthesize incomingCall=_incomingCall;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e4da0
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x00000001000e4d38
- (void)sendDeclineViaIntentWithMessageResponse:(id)arg1 extension:(id)arg2;	// IMP=0x00000001000e4524
- (void)sendDeclineViaChatKitWithMessageResponse:(id)arg1;	// IMP=0x00000001000e41b0
- (void)showCustomReplyWithMessageComposer;	// IMP=0x00000001000e3a44
- (void)sendDeclineWithMessageResponse:(id)arg1;	// IMP=0x00000001000e3760
- (id)replyWithMessageStore;	// IMP=0x00000001000e371c
- (void)declineCall;	// IMP=0x00000001000e36a0
@property(readonly) int addressBookIdentifier;
@property(readonly, copy) NSString *displayName;
@property(readonly, copy) TUHandle *recipientHandle;
- (id)initWithIncomingCall:(id)arg1 customMessagePresentingViewController:(id)arg2;	// IMP=0x00000001000e33f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

