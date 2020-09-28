/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TIKeyboardInputManager <NSObject>
@required
-(void)smartSelectionForTextInDocument:(id)arg1 inRange:(NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5 completion:(/*^block*/id)arg6;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 requestToken:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3;
-(void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/id)arg3;
-(void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/id)arg3;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(/*^block*/id)arg3;
-(void)skipHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2;
-(void)textAccepted:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setOriginalInput:(id)arg1;
-(void)candidateRejected:(id)arg1;
-(void)lastAcceptedCandidateCorrected;
-(void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)writeTypologyLogWithCompletionHandler:(/*^block*/id)arg1;
-(void)textAccepted:(id)arg1;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
