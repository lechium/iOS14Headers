//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewPropertyAnimator;
@protocol UIDragAnimating;

@interface SSSAnimator : NSObject
{
    UIViewPropertyAnimator *_propertyAnimator;	// 8 = 0x8
    id <UIDragAnimating> _dragAnimating;	// 16 = 0x10
}

+ (id)animatorWithDragAnimating:(id)arg1;	// IMP=0x0000000100049e80
+ (id)animatorWithPropertyAnimator:(id)arg1;	// IMP=0x0000000100049e2c
- (void).cxx_destruct;	// IMP=0x000000010004a05c
@property(nonatomic) __weak id <UIDragAnimating> dragAnimating; // @synthesize dragAnimating=_dragAnimating;
@property(nonatomic) __weak UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100049f74
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x0000000100049ed4

@end
