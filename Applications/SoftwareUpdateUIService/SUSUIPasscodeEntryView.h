//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class _UIBackdropView;
@protocol SBUIPasscodeLockView;

@interface SUSUIPasscodeEntryView : UIView
{
    UIView *_containerView;	// 8 = 0x8
    UIView<SBUIPasscodeLockView> *_passcodeView;	// 16 = 0x10
    _UIBackdropView *_blurView;	// 24 = 0x18
    _Bool _dismissing;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100005964
@property(readonly, nonatomic) UIView<SBUIPasscodeLockView> *passcodeLockView; // @synthesize passcodeLockView=_passcodeView;
- (id)createPasscodeView;	// IMP=0x0000000100005940
- (void)layoutSubviews;	// IMP=0x00000001000058bc
- (void)updateStatusText;	// IMP=0x00000001000058b8
- (void)setPasscodeViewsToVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005720
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000054a0

@end

