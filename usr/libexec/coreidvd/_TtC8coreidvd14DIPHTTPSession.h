//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionTaskDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC8coreidvd14DIPHTTPSession : NSObject <NSURLSessionTaskDelegate>
{
    MISSING_TYPE *urlSession;	// 8 = 0x8
    MISSING_TYPE *configuration;	// 16 = 0x10
    MISSING_TYPE *retrier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010016868c
- (id)init;	// IMP=0x000000010016c034
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010016bf50
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x000000010016bd64
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;	// IMP=0x000000010016bcf0
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010016bad4
- (void)dealloc;	// IMP=0x000000010016861c

@end

