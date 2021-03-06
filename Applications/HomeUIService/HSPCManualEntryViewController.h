//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HSPCPrePairingShellViewController.h"

#import "HSManualEntryViewControllerDelegate-Protocol.h"

@class NSString, PRXAction;

@interface HSPCManualEntryViewController : HSPCPrePairingShellViewController <HSManualEntryViewControllerDelegate>
{
    NSString *_setupCode;	// 8 = 0x8
    PRXAction *_continueAction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004c474
@property(retain, nonatomic) PRXAction *continueAction; // @synthesize continueAction=_continueAction;
@property(retain, nonatomic) NSString *setupCode; // @synthesize setupCode=_setupCode;
- (void)didManuallyInvalidateSetupCode;	// IMP=0x000000010004c3d0
- (void)didManuallyEnterSetupCode:(id)arg1;	// IMP=0x000000010004c378
- (id)initWithCoordinator:(id)arg1;	// IMP=0x000000010004bef8

@end

