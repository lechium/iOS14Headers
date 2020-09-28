//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, RBSAssertion;

@protocol RBSAssertionObserving <NSObject>

@optional
- (void)assertionWillInvalidate:(RBSAssertion *)arg1;
- (void)assertion:(RBSAssertion *)arg1 didInvalidateWithError:(NSError *)arg2;
@end
