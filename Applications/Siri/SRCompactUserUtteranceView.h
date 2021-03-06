//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SUICStreamingTextView, UIVisualEffectView;
@protocol SRCompactUserUtteranceViewDelegate;

@interface SRCompactUserUtteranceView : UIView
{
    struct UIEdgeInsets _contentInsets;	// 8 = 0x8
    id <SRCompactUserUtteranceViewDelegate> _delegate;	// 40 = 0x28
    SUICStreamingTextView *_streamingTextView;	// 48 = 0x30
    UIVisualEffectView *_backgroundView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100046a34
@property(retain, nonatomic, getter=_backgroundView, setter=_setBackgroundView:) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic, getter=_streamingTextView, setter=_setStreamingTextView:) SUICStreamingTextView *streamingTextView; // @synthesize streamingTextView=_streamingTextView;
@property(nonatomic) __weak id <SRCompactUserUtteranceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setStreamingText:(id)arg1;	// IMP=0x000000010004646c
- (void)_handleTap:(id)arg1;	// IMP=0x0000000100046378
- (void)layoutSubviews;	// IMP=0x0000000100046228
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010004610c
- (void)setSpeechRecognitionHypothesis:(id)arg1;	// IMP=0x0000000100046030
- (id)initWithContentInsets:(struct UIEdgeInsets)arg1 cornerRadius:(double)arg2;	// IMP=0x0000000100045c5c

@end

