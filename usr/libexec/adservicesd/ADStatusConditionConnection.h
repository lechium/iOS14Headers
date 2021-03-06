//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADStatusConditions_XPC-Protocol.h"

@class NSString, NSXPCConnection;

@interface ADStatusConditionConnection : NSObject <ADStatusConditions_XPC>
{
    NSString *_bundle;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
}

+ (_Bool)validateWhitelistingForRead:(id)arg1;	// IMP=0x00000001000256f0
+ (_Bool)validateWhitelistingForCondition:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000100025368
- (void).cxx_destruct;	// IMP=0x0000000100026b10
@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) _Bool hasWriteEntitlement;
@property(readonly, nonatomic) _Bool hasReadEntitlement;
- (void)_isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000268cc
- (void)isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000263e4
- (void)clearStatusCondition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100025e8c
- (void)setStatusCondition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100025934
- (id)initWithBundleID:(id)arg1 andConnection:(id)arg2;	// IMP=0x0000000100025814

@end

