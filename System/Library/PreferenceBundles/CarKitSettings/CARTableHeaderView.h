//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface CARTableHeaderView : UIView
{
    UILabel *_label;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000095d0
- (void)layoutSubviews;	// IMP=0x0000000000009554
- (struct CGRect)_labelFrameForBoundsWidth:(double)arg1;	// IMP=0x00000000000094b4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000009480
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000009314

@end
