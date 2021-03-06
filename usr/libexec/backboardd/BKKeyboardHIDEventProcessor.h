//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKDisplayBlankingObserver-Protocol.h"
#import "BKHIDEventProcessor-Protocol.h"
#import "BKIOHIDServiceDisappearanceObserver-Protocol.h"
#import "BKIOHIDServiceMatchObserver-Protocol.h"

@class BKDisplayController, BKIOHIDServiceMatcher, BKKeyboardInfo, BSCompoundAssertion, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol BKHIDEventProcessorRegistering, BKHIDSystemInterfacing, BSInvalidatable;

@interface BKKeyboardHIDEventProcessor : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServiceDisappearanceObserver, BKDisplayBlankingObserver, BKHIDEventProcessor>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_allKeyboardsBySenderID;	// 16 = 0x10
    NSMutableArray *_usableKeyboards;	// 24 = 0x18
    NSMutableArray *_eventRecognizers;	// 32 = 0x20
    NSMutableSet *_keyCommandsToAuthenticate;	// 40 = 0x28
    NSString *_keyboardLayout;	// 48 = 0x30
    BSCompoundAssertion *_keyboardObserverAssertion;	// 56 = 0x38
    long long _globalActiveModifiers;	// 64 = 0x40
    id <BSInvalidatable> _displayBlankingObservationAssertion;	// 72 = 0x48
    long long _countOfKeyboardsRequiringAllSmartCoverHESDisengagedForOpen;	// 80 = 0x50
    NSMutableDictionary *_keyCodesDownPerSenderID;	// 88 = 0x58
    _Bool _systemAppConsumesAllKeyboardEvents;	// 96 = 0x60
    BKIOHIDServiceMatcher *_keyboardServiceMatcher;	// 104 = 0x68
    id <BKHIDSystemInterfacing> _eventSystemInterface;	// 112 = 0x70
    id <BKHIDEventProcessorRegistering> _eventProcessorRegistry;	// 120 = 0x78
    BKDisplayController *_displayController;	// 128 = 0x80
    BKKeyboardInfo *_primaryKeyboardInfo;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000100042a78
@property(nonatomic) _Bool systemAppConsumesAllKeyboardEvents; // @synthesize systemAppConsumesAllKeyboardEvents=_systemAppConsumesAllKeyboardEvents;
@property(retain, nonatomic) BKKeyboardInfo *primaryKeyboardInfo; // @synthesize primaryKeyboardInfo=_primaryKeyboardInfo;
@property(retain, nonatomic) BKDisplayController *displayController; // @synthesize displayController=_displayController;
@property(retain, nonatomic) id <BKHIDEventProcessorRegistering> eventProcessorRegistry; // @synthesize eventProcessorRegistry=_eventProcessorRegistry;
@property(retain, nonatomic) id <BKHIDSystemInterfacing> eventSystemInterface; // @synthesize eventSystemInterface=_eventSystemInterface;
@property(retain, nonatomic) BKIOHIDServiceMatcher *keyboardServiceMatcher; // @synthesize keyboardServiceMatcher=_keyboardServiceMatcher;
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x00000001000429a0
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x00000001000428d4
- (void)display:(id)arg1 didBecomeBlank:(_Bool)arg2;	// IMP=0x0000000100042880
- (void)_smartKeyboardAttachmentStateDidChangeForSenderID:(unsigned long long)arg1;	// IMP=0x00000001000427d4
- (void)_lock_smartKeyboardAttachmentStateDidChange:(id)arg1;	// IMP=0x00000001000426bc
- (void)smartKeyboardAttachmentStateDidChange:(id)arg1;	// IMP=0x0000000100042658
- (void)_lock_stopWatchingForGestures:(id)arg1;	// IMP=0x000000010004258c
- (void)_lock_watchForGestures:(id)arg1;	// IMP=0x000000010004237c
- (void)_lock_handleKeyEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x00000001000419f8
- (void)_lock_applyDeliveryInformation:(id)arg1 eventSource:(int)arg2 toEvent:(struct __IOHIDEvent *)arg3;	// IMP=0x0000000100041738
- (void)_lock_handleUnicodeEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x000000010004139c
- (int)_eventSourceForKeyboardInfo:(id)arg1 sender:(id)arg2;	// IMP=0x000000010004135c
- (id)_lock_destinationsForKeyboardEvent:(struct __IOHIDEvent *)arg1 keyboard:(id)arg2 senderInfo:(id)arg3 dispatcher:(id)arg4;	// IMP=0x000000010004102c
- (id)_lock_keyEventDestinationsFromDeliveryDestinations:(id)arg1 authenticationSpecification:(id)arg2 dispatcher:(id)arg3;	// IMP=0x0000000100040f40
- (void)_lock_cancelKeyDownEvents:(id)arg1;	// IMP=0x0000000100040d80
- (void)_lock_usableKeyboardDetached:(id)arg1;	// IMP=0x0000000100040b74
- (void)_lock_usableKeyboardAttached:(id)arg1;	// IMP=0x00000001000409d0
- (void)_lock_setPrimaryKeyboard:(id)arg1;	// IMP=0x00000001000407cc
- (void)_lock_keyboardRemoved:(id)arg1;	// IMP=0x0000000100040528
- (void)_lock_keyboardsDetected:(id)arg1;	// IMP=0x0000000100040498
- (void)_lock_setKeyboardLightsSuspended:(_Bool)arg1;	// IMP=0x000000010004034c
- (_Bool)_lock_anyKeyboardHasCapsLockActive;	// IMP=0x0000000100040228
- (long long)_lock_activeModifiers;	// IMP=0x00000001000401c8
- (void)_lock_updateGlobalModifierState;	// IMP=0x0000000100040064
@property(copy) NSSet *keyCommandsToAuthenticate;
@property(readonly) _Bool capsLockKeyHasLanguageSwitchLabel;
@property(getter=isCapsLockLightOn) _Bool capsLockLightOn;
- (void)setCapsLockDelayOverride:(double)arg1;	// IMP=0x000000010003fe2c
- (void)setRomanCapsLockSwitchModeActive:(_Bool)arg1;	// IMP=0x000000010003fcec
- (id)primaryHardwareKeyboardLanguage;	// IMP=0x000000010003fc74
- (id)addGlobalKeyboardObserver:(id)arg1;	// IMP=0x000000010003fb14
@property(readonly) long long activeModifiers;
@property(retain) NSString *keyboardLayout;
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x000000010003f710
- (int)eventSourceForSender:(id)arg1;	// IMP=0x000000010003f628
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x000000010003f460
- (id)initWithContext:(id)arg1;	// IMP=0x000000010003f1c8

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

