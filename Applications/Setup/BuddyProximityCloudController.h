//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFSpinnerController.h>

@interface BuddyProximityCloudController : BFFSpinnerController
{
    _Bool _hasInitiatedLogin;	// 8 = 0x8
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x000000010008bf1c
+ (id)cloudConfigSkipKey;	// IMP=0x000000010008bf0c
@property _Bool hasInitiatedLogin; // @synthesize hasInitiatedLogin=_hasInitiatedLogin;
- (_Bool)isEphemeral;	// IMP=0x000000010008ca88
- (_Bool)shouldAllowStartOver;	// IMP=0x000000010008ca80
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010008c194
- (id)init;	// IMP=0x000000010008bde4

@end

