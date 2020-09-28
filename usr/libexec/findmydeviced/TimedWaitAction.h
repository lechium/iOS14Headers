//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "Action-Protocol.h"

@class FMDispatchTimer, NSDate, NSString;
@protocol Action;

@interface TimedWaitAction : NSObject <Action>
{
    id <Action> _embeddedAction;	// 8 = 0x8
    NSDate *_executionDate;	// 16 = 0x10
    FMDispatchTimer *_timer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100073dec
@property(retain, nonatomic) FMDispatchTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *executionDate; // @synthesize executionDate=_executionDate;
@property(retain, nonatomic) id <Action> embeddedAction; // @synthesize embeddedAction=_embeddedAction;
- (void)willCancelAction;	// IMP=0x0000000100073ccc
- (_Bool)shouldWaitForAction:(id)arg1;	// IMP=0x0000000100073c10
- (_Bool)shouldCancelAction:(id)arg1;	// IMP=0x0000000100073b54
- (id)actionType;	// IMP=0x0000000100073b48
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100073840
@property(readonly, copy) NSString *description;
- (id)initWithAction:(id)arg1 executeAt:(id)arg2;	// IMP=0x00000001000736a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
