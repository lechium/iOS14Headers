//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKMousePointerAnimationDriver.h"

@interface BKMousePointerScrollAnimationDriver : BKMousePointerAnimationDriver
{
    struct CGPoint _initialVelocity;	// 8 = 0x8
    double _decelerationRate;	// 24 = 0x18
    struct CGPoint _intermediate;	// 32 = 0x20
    struct CGPoint _target;	// 48 = 0x30
    double _elapsedTime;	// 64 = 0x40
    struct CGPoint _currentTranslation;	// 72 = 0x48
}

- (struct CGPoint)currentTranslation;	// IMP=0x0000000100022280
- (_Bool)isComplete;	// IMP=0x0000000100022210
- (void)applyForTime:(double)arg1;	// IMP=0x0000000100022160
- (id)initWithRelativeTranslation:(struct CGPoint)arg1 initialVelocity:(struct CGPoint)arg2 decelerationRate:(double)arg3;	// IMP=0x00000001000220a0

@end

