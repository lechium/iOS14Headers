//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MapsTheme;

@interface UIView (MapsTheming)
+ (_Bool)_maps_shouldAdoptImplicitAnimationParameters;	// IMP=0x000000000000eb88
@property(readonly, nonatomic) MapsTheme *theme;
- (double)_maps_maxConstraintConstantForAxis:(long long)arg1;	// IMP=0x000000000000f97c
- (struct CGAffineTransform)_maps_transformScaledToTopAndTrailingAtScale:(double)arg1;	// IMP=0x000000000000f830
- (struct CGAffineTransform)_maps_transformScaledToTopAndLeadingAtScale:(double)arg1;	// IMP=0x000000000000f6e4
- (struct CGAffineTransform)_maps_transformScaledToTopAtScale:(double)arg1;	// IMP=0x000000000000f640
- (struct CGAffineTransform)_maps_transformScaledToLeadingAtScale:(double)arg1;	// IMP=0x000000000000f528
- (id)_maps_constraintsEqualToEdgesOfLayoutGuide:(id)arg1 insets:(struct UIEdgeInsets)arg2 priority:(float)arg3;	// IMP=0x000000000000f278
- (id)_maps_constraintsEqualToEdgesOfLayoutGuide:(id)arg1 priority:(float)arg2;	// IMP=0x000000000000f258
- (id)_maps_constraintsEqualToEdgesOfView:(id)arg1 insets:(struct UIEdgeInsets)arg2 priority:(float)arg3;	// IMP=0x000000000000efa8
- (id)_maps_constraintsEqualToEdgesOfView:(id)arg1 priority:(float)arg2;	// IMP=0x000000000000ef88
- (id)_maps_constraintsForCenteringInView:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2 priorities:(CDStruct_818bb265)arg3;	// IMP=0x000000000000eca8
- (id)_maps_constraintsForCenteringInView:(id)arg1 priorities:(CDStruct_818bb265)arg2;	// IMP=0x000000000000ec7c
- (id)_maps_constraintsForCenteringInView:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2;	// IMP=0x000000000000ec5c
- (id)_maps_constraintsForCenteringInView:(id)arg1;	// IMP=0x000000000000ec2c
@property(readonly, nonatomic) _Bool _maps_isVisible;
- (struct CGSize)_maps_compressedSizeForWidth:(double)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000eb24
- (struct CGRect)_maps_centeringFrameForView:(id)arg1 size:(struct CGSize)arg2 inRect:(struct CGRect)arg3;	// IMP=0x000000000000ea8c
- (struct CGRect)_maps_centeringFrameForView:(id)arg1 inRect:(struct CGRect)arg2 options:(long long)arg3;	// IMP=0x000000000000e908
- (struct CGRect)_maps_centeringFrameForView:(id)arg1 fit:(_Bool)arg2 constrain:(_Bool)arg3 inRect:(struct CGRect)arg4;	// IMP=0x000000000000e8f0
- (void)_maps_initializeWithAutolayoutCompressedSize;	// IMP=0x000000000000e87c
- (void)_maps_recursivelySetAllowsGroupOpacity:(_Bool)arg1;	// IMP=0x000000000000e718
@end

