//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSString, NSURLSession;

@interface ASAutodiscoverKillSwitch : NSObject <NSURLSessionDelegate>
{
    NSURLSession *_autoDV2RedirectSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000dd18
@property(retain, nonatomic) NSURLSession *autoDV2RedirectSession; // @synthesize autoDV2RedirectSession=_autoDV2RedirectSession;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000dc14
- (void)sendRequestForRedirectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d8c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
