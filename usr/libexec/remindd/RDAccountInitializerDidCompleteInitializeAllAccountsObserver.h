//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP7remindd28RDAccountInitializerObserver_-Protocol.h"

@class MISSING_TYPE;

@interface RDAccountInitializerDidCompleteInitializeAllAccountsObserver : NSObject <_TtP7remindd28RDAccountInitializerObserver_>
{
    MISSING_TYPE *handler;	// 8 = 0x8
    MISSING_TYPE *queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001d8ccc
- (id)init;	// IMP=0x00000001001d8d08
- (void)didCompleteInitializeAllAccounts:(id)arg1;	// IMP=0x00000001001d8bcc
- (void)unobserve;	// IMP=0x00000001001d88bc
- (void)observe;	// IMP=0x00000001001d87fc
- (id)initWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00000001001d8760

@end

