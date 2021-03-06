//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BrowserController, NSString, NSURL;

@interface MemoryAndIOTestRunner : NSObject
{
    BrowserController *_browserController;	// 8 = 0x8
    NSString *_testName;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    unsigned long long _tabsLoadedCount;	// 32 = 0x20
    unsigned long long _liveTabs;	// 40 = 0x28
    unsigned long long _type;	// 48 = 0x30
    int writesAtStart;	// 56 = 0x38
    unsigned long long _totalTabsToLoad;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010008816c
- (void)_collectTestResults;	// IMP=0x0000000100087fa0
- (unsigned long long)_collectCurrentLiveTabs;	// IMP=0x0000000100087df8
- (void)_collectIOUsageInfo:(id)arg1;	// IMP=0x0000000100087d40
- (void)_collectMemoryUsageInfo:(id)arg1;	// IMP=0x0000000100087b50
@property(readonly, nonatomic) NSURL *testPageURL;
- (void)_openNewTabAndLoadTestURL;	// IMP=0x0000000100087830
- (void)runTestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000877f0
- (id)initWithTestName:(id)arg1 browserController:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x0000000100087538

@end

