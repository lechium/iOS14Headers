//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMUserIdentityCacheObserver-Protocol.h"

@class NSMutableDictionary;

@interface MCMContainerClassPathCache : NSObject <MCMUserIdentityCacheObserver>
{
    NSMutableDictionary *_lookup;	// 8 = 0x8
    struct os_unfair_lock_s _lookupLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100049d20
- (void)_lock_flush;	// IMP=0x0000000100049cd0
- (id)_lock_containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 typeClass:(Class)arg3;	// IMP=0x0000000100049988
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;	// IMP=0x000000010004997c
- (void)flush;	// IMP=0x0000000100049940
- (id)containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 typeClass:(Class)arg3;	// IMP=0x00000001000498b8
- (id)containerClassPathForContainerIdentity:(id)arg1 typeClass:(Class)arg2;	// IMP=0x0000000100049810
- (id)init;	// IMP=0x000000010004975c

@end

