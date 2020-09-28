//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable;
@protocol OS_dispatch_queue, SRTCCStore;

@interface SRAuthorizationStore : NSObject
{
    int _notifyToken;	// 8 = 0x8
    _Bool _sensorKitActive;	// 12 = 0xc
    NSDictionary *_authorizationValues;	// 16 = 0x10
    NSDictionary *_lastModifiedAuthorizationTimes;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_updateQueue;	// 32 = 0x20
    NSHashTable *_delegates;	// 40 = 0x28
    id <SRTCCStore> _tccStore;	// 48 = 0x30
}

+ (void)setAuthStore:(id)arg1;	// IMP=0x000000010001102c
+ (id)authStore;	// IMP=0x0000000100011020
+ (void)initialize;	// IMP=0x0000000100010f60
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
- (void)updateAuthorizations;	// IMP=0x0000000100011598
- (void)dealloc;	// IMP=0x0000000100011458
- (id)initWithTCCStore:(id)arg1;	// IMP=0x00000001000110b8
- (id)init;	// IMP=0x0000000100011068

@end
