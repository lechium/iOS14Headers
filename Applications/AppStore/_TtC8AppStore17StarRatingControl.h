//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC8AppStore17StarRatingControl : UIControl
{
    MISSING_TYPE *rating;	// 8 = 0x8
    MISSING_TYPE *lastSentRating;	// 16 = 0x10
    MISSING_TYPE *touchOutsideMargin;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100298954
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002988f8
- (void)accessibilitySetStarRatingFive;	// IMP=0x00000001002988c8
- (void)accessibilitySetStarRatingFour;	// IMP=0x0000000100298898
- (void)accessibilitySetStarRatingThree;	// IMP=0x0000000100298868
- (void)accessibilitySetStarRatingTwo;	// IMP=0x0000000100298838
- (void)accessibilitySetStarRatingOne;	// IMP=0x0000000100298808
- (void)accessibilitySetStarRatingZero;	// IMP=0x00000001002987d8
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) _Bool isAccessibilityElement;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100297ae0
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000100297910
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010029789c
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100298b7c
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010029781c
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000001002977c0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100297238
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002971e0

@end
