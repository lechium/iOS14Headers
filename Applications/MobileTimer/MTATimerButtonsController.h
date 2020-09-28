//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTACircleButton;
@protocol TimerControlsTarget;

@interface MTATimerButtonsController : NSObject
{
    _Bool _shouldEnableStartButton;	// 8 = 0x8
    id <TimerControlsTarget> _target;	// 16 = 0x10
    MTACircleButton *_startStopButton;	// 24 = 0x18
    MTACircleButton *_cancelButton;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    unsigned long long _buttonSize;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000699bc
@property(nonatomic) _Bool shouldEnableStartButton; // @synthesize shouldEnableStartButton=_shouldEnableStartButton;
@property(nonatomic) unsigned long long buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) MTACircleButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) MTACircleButton *startStopButton; // @synthesize startStopButton=_startStopButton;
@property(readonly, nonatomic) __weak id <TimerControlsTarget> target; // @synthesize target=_target;
- (void)_cancelButtonTapped:(id)arg1;	// IMP=0x00000001000691d8
- (void)_startStopButtonTapped:(id)arg1;	// IMP=0x0000000100069090
- (void)handleContentSizeChange;	// IMP=0x0000000100068fd4
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000100068e60

@end
