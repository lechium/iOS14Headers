//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EPResourceManager.h"

#import "CBScalablePipeManagerDelegate-Protocol.h"

@class CBScalablePipeManager, NSString;

@interface EPScalablePipeManagerManager : EPResourceManager <CBScalablePipeManagerDelegate>
{
    NSString *_name;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
    _Bool _didRequestEndpoint;	// 32 = 0x20
    _Bool _endpointIsRegistered;	// 33 = 0x21
    _Bool _isConnected;	// 34 = 0x22
    CBScalablePipeManager *_manager;	// 40 = 0x28
}

+ (Class)resourceClass;	// IMP=0x00000001000ca5d4
- (void).cxx_destruct;	// IMP=0x00000001000cb25c
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) CBScalablePipeManager *manager; // @synthesize manager=_manager;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;	// IMP=0x00000001000cb058
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;	// IMP=0x00000001000caec4
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;	// IMP=0x00000001000cad84
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;	// IMP=0x00000001000cac24
- (void)scalablePipeManagerDidUpdateState:(id)arg1;	// IMP=0x00000001000cab60
- (void)update;	// IMP=0x00000001000ca738
- (id)newResourceWithDelegate:(id)arg1;	// IMP=0x00000001000ca6c0
- (id)newManagerWithDelegate:(id)arg1;	// IMP=0x00000001000ca6b4
- (id)initWithName:(id)arg1 type:(long long)arg2 priority:(long long)arg3;	// IMP=0x00000001000ca5e0
- (void)destroyResource;	// IMP=0x00000001000ca400
- (void)createResource;	// IMP=0x00000001000ca344

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

