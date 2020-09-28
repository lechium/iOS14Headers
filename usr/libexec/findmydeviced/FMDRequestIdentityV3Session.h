//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMDRequest.h"

@class FMDServiceProvider, NSString, NSUUID;

@interface FMDRequestIdentityV3Session : FMDRequest
{
    _Bool _requiresAuthentication;	// 8 = 0x8
    NSString *_cause;	// 16 = 0x10
    FMDServiceProvider *_provider;	// 24 = 0x18
    NSString *_pscHelloMsg;	// 32 = 0x20
    NSUUID *_activationLockRequestUUID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010009312c
@property(retain, nonatomic) NSUUID *activationLockRequestUUID; // @synthesize activationLockRequestUUID=_activationLockRequestUUID;
@property(retain, nonatomic) NSString *pscHelloMsg; // @synthesize pscHelloMsg=_pscHelloMsg;
@property(nonatomic) __weak FMDServiceProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(retain, nonatomic) NSString *cause; // @synthesize cause=_cause;
- (_Bool)canReplace:(id)arg1;	// IMP=0x0000000100093064
- (_Bool)canRequestBeRetriedNow;	// IMP=0x000000010009305c
- (id)requestBody;	// IMP=0x0000000100092c90
- (id)requestHeaders;	// IMP=0x0000000100092bd8
- (id)requestUrl;	// IMP=0x0000000100092aa0
- (unsigned long long)type;	// IMP=0x0000000100092a78
- (id)requestId;	// IMP=0x0000000100092a6c
- (id)initWithProvider:(id)arg1 activationLockRequestUUID:(id)arg2 pscHelloMsg:(id)arg3;	// IMP=0x0000000100092954

@end
