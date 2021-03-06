//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSSet, NSString, SRAuthorizationStore;

@protocol SRAuthorizationStoreDelegate <NSObject>

@optional
- (void)authorizationStore:(SRAuthorizationStore *)arg1 resetAuthorizations:(NSSet *)arg2 forBundleId:(NSString *)arg3;
- (void)authorizationStore:(SRAuthorizationStore *)arg1 revokedAuthorizations:(NSSet *)arg2 forBundleId:(NSString *)arg3;
- (void)authorizationStore:(SRAuthorizationStore *)arg1 grantedAuthorizations:(NSSet *)arg2 forBundleId:(NSString *)arg3;
- (void)authorizationStore:(SRAuthorizationStore *)arg1 didDetermineInitialAuthorizationValues:(NSDictionary *)arg2;
@end

