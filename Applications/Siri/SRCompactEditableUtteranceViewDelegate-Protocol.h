//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SRCompactEditableUtteranceView;

@protocol SRCompactEditableUtteranceViewDelegate
- (void)editableUtteranceView:(SRCompactEditableUtteranceView *)arg1 didFinishEditingWithText:(NSString *)arg2;
- (void)didResignFirstResponderFromUtteranceView:(SRCompactEditableUtteranceView *)arg1;
- (void)willBeginEditingFromUtteranceView:(SRCompactEditableUtteranceView *)arg1;
- (void)editableUtteranceView:(SRCompactEditableUtteranceView *)arg1 requestsKeyboardWithCompletion:(void (^)(_Bool))arg2;
@end

