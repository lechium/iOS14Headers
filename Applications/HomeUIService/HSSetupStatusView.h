//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HSCameraInstructionsView, HSSetupCodeGlyphView, HSTitleAndDescriptionView, NSArray, NSError, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HSSetupStatusView : UIView
{
    _Bool _automaticallyAddsTopMargin;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    NSString *_accessoryName;	// 24 = 0x18
    NSString *_pairingStatusTitle;	// 32 = 0x20
    NSString *_pairingStatusDescription;	// 40 = 0x28
    NSError *_pairingError;	// 48 = 0x30
    double _bottomInset;	// 56 = 0x38
    HSSetupCodeGlyphView *_glyphView;	// 64 = 0x40
    HSTitleAndDescriptionView *_titleAndDescriptionView;	// 72 = 0x48
    HSCameraInstructionsView *_cameraInstructionsView;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_updateStateSerialQueue;	// 88 = 0x58
    NSObject<OS_dispatch_semaphore> *_updateStateSemaphore;	// 96 = 0x60
    NSArray *_constraints;	// 104 = 0x68
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000100015284
- (void).cxx_destruct;	// IMP=0x000000010001707c
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *updateStateSemaphore; // @synthesize updateStateSemaphore=_updateStateSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateStateSerialQueue; // @synthesize updateStateSerialQueue=_updateStateSerialQueue;
@property(retain, nonatomic) HSCameraInstructionsView *cameraInstructionsView; // @synthesize cameraInstructionsView=_cameraInstructionsView;
@property(retain, nonatomic) HSTitleAndDescriptionView *titleAndDescriptionView; // @synthesize titleAndDescriptionView=_titleAndDescriptionView;
@property(retain, nonatomic) HSSetupCodeGlyphView *glyphView; // @synthesize glyphView=_glyphView;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) _Bool automaticallyAddsTopMargin; // @synthesize automaticallyAddsTopMargin=_automaticallyAddsTopMargin;
@property(retain, nonatomic) NSError *pairingError; // @synthesize pairingError=_pairingError;
@property(copy, nonatomic) NSString *pairingStatusDescription; // @synthesize pairingStatusDescription=_pairingStatusDescription;
@property(copy, nonatomic) NSString *pairingStatusTitle; // @synthesize pairingStatusTitle=_pairingStatusTitle;
@property(retain, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)_updateText;	// IMP=0x0000000100016a7c
- (void)_updateGlyphAnimated:(_Bool)arg1;	// IMP=0x0000000100016998
- (void)_showViews;	// IMP=0x0000000100016874
- (void)_hideViews;	// IMP=0x00000001000167f0
- (void)updateConstraints;	// IMP=0x0000000100015e98
- (id)viewForLastBaselineLayout;	// IMP=0x0000000100015e44
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000100015df0
- (void)updateStateAnimated:(unsigned long long)arg1 accessoryName:(id)arg2 pairingStatusTitle:(id)arg3 pairingStatusDescription:(id)arg4 pairingError:(id)arg5;	// IMP=0x00000001000157a8
@property(readonly, nonatomic) _Bool requiresScrolling;
- (id)initWithInitialViewState:(unsigned long long)arg1 nfcStartFuture:(id)arg2;	// IMP=0x000000010001528c

@end

