//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSilo, NSString, PCPersistentTimer;

@interface CLPersistentTimerInternal : NSObject
{
    PCPersistentTimer *_pcTimer;	// 8 = 0x8
    struct CLPersistentTimer *_clTimer;	// 16 = 0x10
    CLSilo *_silo;	// 24 = 0x18
    basic_string_90719d97 _strIdentifier;	// 32 = 0x20
    NSString *_serviceIdentifier;	// 56 = 0x38
    _Bool _wakeDevice;	// 64 = 0x40
    double _timeInterval;	// 72 = 0x48
    double _minimumEarlyFireProportion;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x00000001004daa24
- (void).cxx_destruct;	// IMP=0x00000001004daa10
- (void)invalidate;	// IMP=0x00000001004da600
- (void)timerFired:(id)arg1;	// IMP=0x00000001004da314
- (void)bounce_timerFired:(id)arg1;	// IMP=0x00000001004da2a0
- (void)dealloc;	// IMP=0x00000001004da230
- (void)setTimerWithInterval:(double)arg1;	// IMP=0x00000001004d9da4
- (void)setNextFireTime:(double)arg1;	// IMP=0x00000001004d9d58
- (id)initWithFireTime:(double)arg1 timeInterval:(double)arg2 serviceIdentifier:(const char *)arg3 wakeDevice:(_Bool)arg4 clTimer:(struct CLPersistentTimer *)arg5 silo:(id)arg6 minimumEarlyFireProportion:(double)arg7;	// IMP=0x00000001004d9c4c

@end
