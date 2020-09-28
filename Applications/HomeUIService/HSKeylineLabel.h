//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSAttributedString, NSString, UILabel;

@interface HSKeylineLabel : UIView
{
    CALayer *_leadingKeylineLayer;	// 8 = 0x8
    CALayer *_trailingKeylineLayer;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    double _margin;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100040458
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) CALayer *trailingKeylineLayer; // @synthesize trailingKeylineLayer=_trailingKeylineLayer;
@property(retain, nonatomic) CALayer *leadingKeylineLayer; // @synthesize leadingKeylineLayer=_leadingKeylineLayer;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (id)lastBaselineAnchor;	// IMP=0x000000010004019c
- (id)firstBaselineAnchor;	// IMP=0x0000000100040148
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000010003ff3c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010003fed0
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010003fe74
- (void)layoutSubviews;	// IMP=0x000000010003fc38
- (id)init;	// IMP=0x000000010003f798

@end
