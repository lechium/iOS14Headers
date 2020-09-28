//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EPResourceManager.h"

@class EPActiveDeviceAssertionFactory, NRRegistry, NSUUID;

@interface EPActiveDeviceAssertionManager : EPResourceManager
{
    NSUUID *_pairingID;	// 8 = 0x8
    EPActiveDeviceAssertionFactory *_factory;	// 16 = 0x10
    id _registryChangeHandle;	// 24 = 0x18
}

+ (Class)resourceClass;	// IMP=0x000000010008d8a0
- (void).cxx_destruct;	// IMP=0x000000010008da88
@property(readonly, nonatomic) id registryChangeHandle; // @synthesize registryChangeHandle=_registryChangeHandle;
@property(readonly, nonatomic) EPActiveDeviceAssertionFactory *factory; // @synthesize factory=_factory;
@property(readonly, nonatomic) NSUUID *pairingID; // @synthesize pairingID=_pairingID;
- (void)updateWithPairingID:(id)arg1;	// IMP=0x000000010008d908
- (void)destroyResource;	// IMP=0x000000010008d8ac
@property(readonly, nonatomic) NRRegistry *registry;
- (id)initWithFactory:(id)arg1 pairingID:(id)arg2;	// IMP=0x000000010008d738

@end
