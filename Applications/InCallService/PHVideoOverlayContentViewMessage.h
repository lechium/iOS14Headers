//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHVideoOverlayContentView.h"

@class UILabel;

@interface PHVideoOverlayContentViewMessage : PHVideoOverlayContentView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010009c070
@property(retain) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)resetView;	// IMP=0x000000010009bf54
- (void)updateConstraints;	// IMP=0x000000010009bb9c
- (void)setupViewWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000010009b714
- (id)initWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000010009b668

@end

