//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface ServiceProviderMgr : NSObject
{
    NSDictionary *_accountTypeToServiceProviderType;	// 8 = 0x8
    NSMutableDictionary *_accountUUIDToServiceProvider;	// 16 = 0x10
    id _buddyCompletionObserverToken;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010000ae30
- (void).cxx_destruct;	// IMP=0x000000010000be3c
@property(retain, nonatomic) id buddyCompletionObserverToken; // @synthesize buddyCompletionObserverToken=_buddyCompletionObserverToken;
@property(retain, nonatomic) NSMutableDictionary *accountUUIDToServiceProvider; // @synthesize accountUUIDToServiceProvider=_accountUUIDToServiceProvider;
@property(readonly, nonatomic) NSDictionary *accountTypeToServiceProviderType; // @synthesize accountTypeToServiceProviderType=_accountTypeToServiceProviderType;
- (id)serviceProviderForAccount:(id)arg1;	// IMP=0x000000010000bd64
- (void)accountListDidChange;	// IMP=0x000000010000b6d0
- (void)stopGlobalManagers;	// IMP=0x000000010000b688
- (void)startGlobalManagers;	// IMP=0x000000010000b60c
- (void)stop;	// IMP=0x000000010000b51c
- (void)start;	// IMP=0x000000010000b15c
- (id)initSingleton;	// IMP=0x000000010000afa0
- (id)init;	// IMP=0x000000010000af48
- (void)dealloc;	// IMP=0x000000010000adac

@end
