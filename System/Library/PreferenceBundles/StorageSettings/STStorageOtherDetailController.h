//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSDictionary;

@interface STStorageOtherDetailController : PSListController
{
    _Bool _isInternal;	// 192 = 0xc0
    long long _vmUsage;	// 200 = 0xc8
    NSDictionary *_logSizes;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000001921c
@property(retain) NSDictionary *logSizes; // @synthesize logSizes=_logSizes;
- (id)specifiers;	// IMP=0x0000000000018a1c
- (id)valueForSpecifier:(id)arg1;	// IMP=0x00000000000189b4
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000001895c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000018440

@end

