//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BFFFlowItem-Protocol.h"
#import "ICQUpgradeFlowManagerDelegate-Protocol.h"

@class ICQUpgradeFlowManager, NSString, UIViewController;
@protocol BFFFlowItemDelegate;

@interface BuddyiCloudQuotaController : NSObject <ICQUpgradeFlowManagerDelegate, BFFFlowItem>
{
    UIViewController *_viewController;	// 8 = 0x8
    ICQUpgradeFlowManager *_flowManager;	// 16 = 0x10
    CDUnknownBlockType _pushCompletion;	// 24 = 0x18
    id <BFFFlowItemDelegate> _delegate;	// 32 = 0x20
}

+ (id)cloudConfigSkipKey;	// IMP=0x000000010001e598
+ (_Bool)controllerNeedsToRun;	// IMP=0x000000010001e53c
- (void).cxx_destruct;	// IMP=0x000000010001eee0
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)upgradeFlowManagerDidComplete:(id)arg1;	// IMP=0x000000010001edd4
- (void)upgradeFlowManagerDidCancel:(id)arg1;	// IMP=0x000000010001ecec
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;	// IMP=0x000000010001ec08
- (void)upgradeFlowManager:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x000000010001eba0
- (void)controllerWasPopped;	// IMP=0x000000010001eb50
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x000000010001eb48
- (id)viewController;	// IMP=0x000000010001eb40
- (void)cancelHostedPresentation;	// IMP=0x000000010001ea80
- (void)presentHostedViewControllerOnNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e870
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001e5a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
