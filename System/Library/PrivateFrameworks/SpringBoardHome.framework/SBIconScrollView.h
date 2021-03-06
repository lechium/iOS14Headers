/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <BaseBoardUI/BSUIScrollView.h>

@interface SBIconScrollView : BSUIScrollView {

	CGPoint _lastAnimatedScrollContentOffset;

}

@property (assign,nonatomic) CGPoint lastAnimatedScrollContentOffset;                   //@synthesize lastAnimatedScrollContentOffset=_lastAnimatedScrollContentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconScrollViewDelegate> delegate; 
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)handlePan:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)_autoScrollAssistantUpdateContentOffset:(CGPoint)arg1 ;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(void)setLastAnimatedScrollContentOffset:(CGPoint)arg1 ;
-(BOOL)cancelTouchTracking;
-(CGPoint)_roundedProposedContentOffset:(CGPoint)arg1 ;
-(CGPoint)lastAnimatedScrollContentOffset;
@end

