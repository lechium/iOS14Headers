//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPPairerDelegate-Protocol.h"

@class EPDeviceInfo, EPPairer, NSString;
@protocol EPPairerListDelegate;

@interface EPPairerList : NSObject <EPPairerDelegate>
{
    EPPairerList *me;	// 8 = 0x8
    _Bool _hasPairer;	// 16 = 0x10
    id <EPPairerListDelegate> _delegate;	// 24 = 0x18
    id <EPPairerListDelegate> _strongDelegate;	// 32 = 0x20
    EPDeviceInfo *_info;	// 40 = 0x28
    EPPairer *_pairer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010005a358
@property(readonly, nonatomic) _Bool hasPairer; // @synthesize hasPairer=_hasPairer;
@property(nonatomic) __weak EPPairer *pairer; // @synthesize pairer=_pairer;
@property(retain, nonatomic) EPDeviceInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) id <EPPairerListDelegate> strongDelegate; // @synthesize strongDelegate=_strongDelegate;
@property(nonatomic) __weak id <EPPairerListDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pairerDidBeginToPair:(id)arg1;	// IMP=0x000000010005a2a8
- (void)pairer:(id)arg1 completedWithError:(id)arg2;	// IMP=0x000000010005a238
- (void)pairer:(id)arg1 requestWithType:(long long)arg2 passkey:(id)arg3;	// IMP=0x000000010005a1d4
- (id)pairer:(id)arg1 newEndpointWithDelegate:(id)arg2;	// IMP=0x000000010005a164
- (void)reset;	// IMP=0x000000010005a11c
- (void)update;	// IMP=0x000000010005a03c
- (_Bool)_hasPairer;	// IMP=0x000000010005a00c
- (void)removePairer:(id)arg1;	// IMP=0x000000010005a000
- (id)newPairerWithDelegate:(id)arg1 withParameters:(id)arg2;	// IMP=0x0000000100059f04
- (id)initWithDeviceInfo:(id)arg1 withDelegate:(id)arg2;	// IMP=0x0000000100059e7c
- (void)dealloc;	// IMP=0x0000000100059e48
- (id)initBase;	// IMP=0x0000000100059e14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

