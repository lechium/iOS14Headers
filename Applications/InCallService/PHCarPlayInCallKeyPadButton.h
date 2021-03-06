//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface PHCarPlayInCallKeyPadButton : UIButton
{
    _Bool _usingSmallFont;	// 8 = 0x8
    unsigned long long _keyPadButtonType;	// 16 = 0x10
}

+ (id)colorForKeyPadButtonType:(unsigned long long)arg1;	// IMP=0x0000000100082b50
+ (long long)symbolTypeForKeyPadButtonType:(unsigned long long)arg1;	// IMP=0x0000000100082b3c
+ (long long)alignmentForKeyPadButtonType:(unsigned long long)arg1;	// IMP=0x0000000100082b2c
+ (id)titleForKeyPadButtonType:(unsigned long long)arg1;	// IMP=0x0000000100082a74
@property(nonatomic, getter=isUsingSmallFont) _Bool usingSmallFont; // @synthesize usingSmallFont=_usingSmallFont;
@property(readonly, nonatomic) unsigned long long keyPadButtonType; // @synthesize keyPadButtonType=_keyPadButtonType;
- (void)setTitle:(id)arg1 alignment:(long long)arg2 symbolType:(long long)arg3 normalStateColor:(id)arg4 usingSmallFont:(_Bool)arg5;	// IMP=0x00000001000828a0
- (id)initWithKeyPadButtonType:(unsigned long long)arg1 usingSmallFont:(_Bool)arg2;	// IMP=0x0000000100082584

@end

