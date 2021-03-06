//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "Action-Protocol.h"

@class FMDAccount, FMDCommandContext, FMDNetworkAction, FMDRequestQueueCheck, FMDServerInteractionController, NSString, NSUUID;
@protocol FMDRequestDecorator;

@interface QCAction : NSObject <Action>
{
    _Bool _shutdownActivityPending;	// 8 = 0x8
    FMDCommandContext *_commandContext;	// 16 = 0x10
    NSObject<FMDRequestDecorator> *_requestDecorator;	// 24 = 0x18
    FMDRequestQueueCheck *_request;	// 32 = 0x20
    FMDNetworkAction *_networkAction;	// 40 = 0x28
    FMDAccount *_account;	// 48 = 0x30
    FMDServerInteractionController *_serverInteractionController;	// 56 = 0x38
    NSUUID *_commandContextUUID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010005c1ac
@property(retain, nonatomic) NSUUID *commandContextUUID; // @synthesize commandContextUUID=_commandContextUUID;
@property(nonatomic) __weak FMDServerInteractionController *serverInteractionController; // @synthesize serverInteractionController=_serverInteractionController;
@property(nonatomic) _Bool shutdownActivityPending; // @synthesize shutdownActivityPending=_shutdownActivityPending;
@property(retain, nonatomic) FMDAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) FMDNetworkAction *networkAction; // @synthesize networkAction=_networkAction;
@property(retain, nonatomic) FMDRequestQueueCheck *request; // @synthesize request=_request;
@property(retain, nonatomic) NSObject<FMDRequestDecorator> *requestDecorator; // @synthesize requestDecorator=_requestDecorator;
@property(retain, nonatomic) FMDCommandContext *commandContext; // @synthesize commandContext=_commandContext;
- (id)_commandHandlers;	// IMP=0x000000010005be4c
- (id)_copyHandlerForCommand:(id)arg1 params:(id)arg2;	// IMP=0x000000010005bc60
- (void)_handleQueueCheckResponseWithStatus:(long long)arg1 andBody:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010005b5d8
- (void)_didCompleteQueueCheckRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005b2a0
@property(readonly, copy) NSString *description;
- (_Bool)shouldWaitForAction:(id)arg1;	// IMP=0x000000010005b25c
- (_Bool)shouldCancelAction:(id)arg1;	// IMP=0x000000010005b1b8
- (void)willCancelAction;	// IMP=0x000000010005af8c
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005ab98
- (id)actionType;	// IMP=0x000000010005ab8c
- (id)initWithAccount:(id)arg1 shutdownActivityPending:(_Bool)arg2 serverInteractionController:(id)arg3;	// IMP=0x000000010005aacc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

