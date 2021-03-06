//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSXPCConnection, TKTokenAccessUserPromptInfo;

@interface TKUITokenAccessPromptVC : SBUIRemoteAlertServiceViewController
{
    TKTokenAccessUserPromptInfo *_info;	// 8 = 0x8
    NSXPCConnection *_uiServerConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100005c40
- (void)_invalidate;	// IMP=0x0000000100005b98
- (void)_finishWithPermissionGranted:(_Bool)arg1;	// IMP=0x000000010000590c
- (void)_grantTokenAccess;	// IMP=0x00000001000058fc
- (void)_denyTokenAccess;	// IMP=0x00000001000058ec
- (void)_connectToHostWithEndpoint:(id)arg1;	// IMP=0x00000001000057a0
- (void)_presentAlertWithClientName:(id)arg1 providerName:(id)arg2;	// IMP=0x00000001000052fc
- (void)_presentAlert;	// IMP=0x0000000100005254
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005030
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004f18
- (long long)preferredStatusBarStyle;	// IMP=0x0000000100004e88
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100004e38

@end

