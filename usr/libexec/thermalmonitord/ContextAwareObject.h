//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ContextAwareObject : NSObject
{
    _Bool _infoOnlySensorsActive;	// 8 = 0x8
    int ctxType;	// 12 = 0xc
}

@property(readonly, nonatomic) int ctxType; // @synthesize ctxType;
- (void)setInfoOnlySensorsActive:(_Bool)arg1;	// IMP=0x000000010000a3a0
- (void)updateSystemPowerState:(_Bool)arg1;	// IMP=0x000000010000a39c
- (_Bool)synchContext;	// IMP=0x000000010000a358
- (_Bool)isContextTriggered;	// IMP=0x000000010000a314
- (int)getContextState;	// IMP=0x000000010000a2d0
- (id)initCTXBase;	// IMP=0x000000010000a294

@end
