//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PSHeaderFooterView-Protocol.h"

@class NSString, UILabel;

@interface ASSettingsNeedsAuthenticationFooterView : UIView <PSHeaderFooterView>
{
    NSString *_verificationMessage;	// 8 = 0x8
    UILabel *_verificationMessageLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001c1cc
- (id)_font;	// IMP=0x000000000001c1b4
- (double)_heightForMessageConstrainedToWidth:(double)arg1;	// IMP=0x000000000001c0b0
- (double)preferredHeightForWidth:(double)arg1;	// IMP=0x000000000001c08c
- (void)layoutSubviews;	// IMP=0x000000000001bfe0
- (void)dealloc;	// IMP=0x000000000001bfac
- (id)initWithSpecifier:(id)arg1;	// IMP=0x000000000001bd28

@end
