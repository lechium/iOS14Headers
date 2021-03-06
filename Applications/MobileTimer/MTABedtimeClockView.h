//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, NSDateComponents, NSLayoutConstraint, NSNumberFormatter, NSString, UILabel, UILongPressGestureRecognizer, UISelectionFeedbackGenerator;

@interface MTABedtimeClockView : UIControl <UIGestureRecognizerDelegate>
{
    _Bool _draggingSleep;	// 8 = 0x8
    _Bool _draggingWake;	// 9 = 0x9
    _Bool _draggingArc;	// 10 = 0xa
    UILongPressGestureRecognizer *_dragRecognizer;	// 16 = 0x10
    unsigned long long _style;	// 24 = 0x18
    NSDateComponents *_sleepTime;	// 32 = 0x20
    NSDateComponents *_wakeTime;	// 40 = 0x28
    double _zoomedHourSize;	// 48 = 0x30
    UILabel *_sleepHoursLabel;	// 56 = 0x38
    long long _zoomedHour;	// 64 = 0x40
    double _zoomStartAngle;	// 72 = 0x48
    unsigned long long _dragAndHoldCounter;	// 80 = 0x50
    double _lastDragAngle;	// 88 = 0x58
    double _lastDragTime;	// 96 = 0x60
    double _dragSleepAngleOffset;	// 104 = 0x68
    double _dragWakeAngleOffset;	// 112 = 0x70
    CADisplayLink *_displayLink;	// 120 = 0x78
    NSNumberFormatter *_hourNumberFormatter;	// 128 = 0x80
    NSLayoutConstraint *_sleepLabelLeadingConstraint;	// 136 = 0x88
    NSLayoutConstraint *_sleepLabelTrailingConstraint;	// 144 = 0x90
    UISelectionFeedbackGenerator *_majorFeedbackGenerator;	// 152 = 0x98
    UISelectionFeedbackGenerator *_minorFeedbackGenerator;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000010005814c
@property(retain, nonatomic) UISelectionFeedbackGenerator *minorFeedbackGenerator; // @synthesize minorFeedbackGenerator=_minorFeedbackGenerator;
@property(retain, nonatomic) UISelectionFeedbackGenerator *majorFeedbackGenerator; // @synthesize majorFeedbackGenerator=_majorFeedbackGenerator;
@property(retain, nonatomic) NSLayoutConstraint *sleepLabelTrailingConstraint; // @synthesize sleepLabelTrailingConstraint=_sleepLabelTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *sleepLabelLeadingConstraint; // @synthesize sleepLabelLeadingConstraint=_sleepLabelLeadingConstraint;
@property(retain, nonatomic) NSNumberFormatter *hourNumberFormatter; // @synthesize hourNumberFormatter=_hourNumberFormatter;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double dragWakeAngleOffset; // @synthesize dragWakeAngleOffset=_dragWakeAngleOffset;
@property(nonatomic) double dragSleepAngleOffset; // @synthesize dragSleepAngleOffset=_dragSleepAngleOffset;
@property(nonatomic) double lastDragTime; // @synthesize lastDragTime=_lastDragTime;
@property(nonatomic) double lastDragAngle; // @synthesize lastDragAngle=_lastDragAngle;
@property(nonatomic) unsigned long long dragAndHoldCounter; // @synthesize dragAndHoldCounter=_dragAndHoldCounter;
@property(nonatomic) double zoomStartAngle; // @synthesize zoomStartAngle=_zoomStartAngle;
@property(nonatomic) long long zoomedHour; // @synthesize zoomedHour=_zoomedHour;
@property(retain, nonatomic) UILabel *sleepHoursLabel; // @synthesize sleepHoursLabel=_sleepHoursLabel;
@property(nonatomic, getter=isDraggingArc) _Bool draggingArc; // @synthesize draggingArc=_draggingArc;
@property(nonatomic, getter=isDraggingWake) _Bool draggingWake; // @synthesize draggingWake=_draggingWake;
@property(nonatomic, getter=isDraggingSleep) _Bool draggingSleep; // @synthesize draggingSleep=_draggingSleep;
@property(nonatomic) double zoomedHourSize; // @synthesize zoomedHourSize=_zoomedHourSize;
@property(copy, nonatomic) NSDateComponents *wakeTime; // @synthesize wakeTime=_wakeTime;
@property(copy, nonatomic) NSDateComponents *sleepTime; // @synthesize sleepTime=_sleepTime;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UILongPressGestureRecognizer *dragRecognizer; // @synthesize dragRecognizer=_dragRecognizer;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000100056ef4
- (CDStruct_d83abbfb)_currentDrawingProperties;	// IMP=0x0000000100056e34
- (void)displayLinkTick:(id)arg1;	// IMP=0x0000000100056bd0
- (void)_endDragging;	// IMP=0x00000001000569dc
- (void)dragCancelled:(id)arg1;	// IMP=0x00000001000569d0
- (void)dragEnded:(id)arg1;	// IMP=0x00000001000569c4
- (id)_newTimeForAngle:(double)arg1 isWake:(_Bool)arg2;	// IMP=0x00000001000567cc
- (void)dragMoved:(id)arg1;	// IMP=0x0000000100055db0
- (void)dragStarted:(id)arg1;	// IMP=0x0000000100055bb0
- (void)dragRecognizerChanged:(id)arg1;	// IMP=0x0000000100055b50
- (_Bool)_sleepArcContainsPoint:(struct CGPoint)arg1;	// IMP=0x0000000100055a28
- (_Bool)_endCircleContainsPoint:(struct CGPoint)arg1;	// IMP=0x00000001000559d4
- (_Bool)_startCircleContainsPoint:(struct CGPoint)arg1;	// IMP=0x0000000100055980
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000001000558e8
- (double)ringWidth;	// IMP=0x0000000100055878
- (struct CGPoint)_centerPointAtAngle:(double)arg1;	// IMP=0x0000000100055774
- (struct CGPoint)wakeCenter;	// IMP=0x0000000100055740
- (struct CGPoint)sleepCenter;	// IMP=0x000000010005570c
- (double)sleepLength;	// IMP=0x0000000100055688
- (id)clampTimeToZoomedHour:(id)arg1;	// IMP=0x00000001000553d4
- (_Bool)angleIsDuringSleep:(double)arg1;	// IMP=0x0000000100055328
- (id)timeForAngle:(double)arg1;	// IMP=0x0000000100054e48
- (id)standardTimeForAngle:(double)arg1;	// IMP=0x0000000100054d04
- (double)angleForHour:(long long)arg1 minute:(long long)arg2;	// IMP=0x0000000100054aec
- (double)standardAngleForHour:(long long)arg1 minute:(long long)arg2;	// IMP=0x0000000100054a14
@property(readonly, nonatomic) double nonzoomedHourSize;
@property(readonly, nonatomic) double wakeAngle;
@property(readonly, nonatomic) double sleepAngle;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000100054704
- (void)handleLocaleChange;	// IMP=0x00000001000546d0
- (void)updateCenterLabels;	// IMP=0x0000000100053f24
- (void)updateConstraints;	// IMP=0x0000000100053cb4
- (void)setupConstraints;	// IMP=0x000000010005392c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000533ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

