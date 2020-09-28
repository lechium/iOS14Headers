//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol _GKStateMachineDelegate;

@interface _GKStateMachine : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _shouldLogStateTransitions;	// 12 = 0xc
    NSDictionary *_validTransitions;	// 16 = 0x10
    id <_GKStateMachineDelegate> _delegate;	// 24 = 0x18
    NSString *_currentState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000f72ec
@property __weak id <_GKStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *validTransitions; // @synthesize validTransitions=_validTransitions;
@property(nonatomic) _Bool shouldLogStateTransitions; // @synthesize shouldLogStateTransitions=_shouldLogStateTransitions;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00000001000f7060
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00000001000f6ce0
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00000001000f6c9c
- (_Bool)_setCurrentState:(id)arg1;	// IMP=0x00000001000f6a84
@property(retain) NSString *currentState; // @synthesize currentState=_currentState;
- (_Bool)applyState:(id)arg1;	// IMP=0x00000001000f6a6c
- (void)dealloc;	// IMP=0x00000001000f69dc
- (id)init;	// IMP=0x00000001000f69a0

@end
