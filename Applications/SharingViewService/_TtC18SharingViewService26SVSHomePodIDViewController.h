//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC18SharingViewService26SVSHomePodIDViewController : UIViewController
{
    MISSING_TYPE *engine;	// 8 = 0x8
    MISSING_TYPE *preView;	// 16 = 0x10
    MISSING_TYPE *setupSucceeded;	// 24 = 0x18
    MISSING_TYPE *session;	// 32 = 0x20
    MISSING_TYPE *feedbackGenerator;	// 40 = 0x28
    MISSING_TYPE *output;	// 48 = 0x30
    MISSING_TYPE *videoDeviceInput;	// 56 = 0x38
    MISSING_TYPE *_videoDevice;	// 64 = 0x40
    MISSING_TYPE *startIngesting;	// 72 = 0x48
    MISSING_TYPE *deviceModel;	// 73 = 0x49
    MISSING_TYPE *handler;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100008d58
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100008e9c
- (void)dealloc;	// IMP=0x0000000100008d34
- (void)preheatEngine;	// IMP=0x000000010000871c
- (void)configureEngine;	// IMP=0x00000001000086c0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100008270
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100007ef4
- (void)viewDidLoad;	// IMP=0x0000000100007a44
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000077f0
- (id)initWithDeviceModel:(unsigned char)arg1;	// IMP=0x00000001000077cc
- (id)init;	// IMP=0x0000000100007664
@property(nonatomic, copy) CDUnknownBlockType handler;

@end
