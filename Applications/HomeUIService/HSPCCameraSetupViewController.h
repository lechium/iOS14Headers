//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HSPCMVVMShellViewController.h"

#import "HSProxCardConfigurable-Protocol.h"

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString;

@interface HSPCCameraSetupViewController : HSPCMVVMShellViewController <HSProxCardConfigurable>
{
    HSSetupStateMachineConfiguration *config;	// 8 = 0x8
    HSProxCardCoordinator *coordinator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001f990
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config;
- (id)commitConfiguration;	// IMP=0x000000010001f93c
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x000000010001f5c4

// Remaining properties
@property(retain, nonatomic) NSString *subtitle;

@end
