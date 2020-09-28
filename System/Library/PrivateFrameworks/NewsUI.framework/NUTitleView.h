/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUTitleViewStyler, NUTitleViewDelegate, OS_dispatch_semaphore;
@class NUCrossFadeTitleView, NUSlideViewAnimator, NUFadeViewAnimator, NUAnimationQueue, NSObject;

@interface NUTitleView : UIView {

	id<NUTitleViewStyler> _styler;
	id<NUTitleViewDelegate> _delegate;
	NUCrossFadeTitleView* _titleView;
	NUCrossFadeTitleView* _incomingTitleView;
	NUSlideViewAnimator* _slideAnimator;
	NUFadeViewAnimator* _fadeAnimator;
	NUAnimationQueue* _animationQueue;
	NSObject*<OS_dispatch_semaphore> _lingerSemaphore;
	CGRect _lastLayoutBounds;

}

@property (nonatomic,retain) NUCrossFadeTitleView * titleView;                              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NUCrossFadeTitleView * incomingTitleView;                      //@synthesize incomingTitleView=_incomingTitleView - In the implementation block
@property (nonatomic,readonly) NUSlideViewAnimator * slideAnimator;                         //@synthesize slideAnimator=_slideAnimator - In the implementation block
@property (nonatomic,readonly) NUFadeViewAnimator * fadeAnimator;                           //@synthesize fadeAnimator=_fadeAnimator - In the implementation block
@property (nonatomic,readonly) NUAnimationQueue * animationQueue;                           //@synthesize animationQueue=_animationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> lingerSemaphore;              //@synthesize lingerSemaphore=_lingerSemaphore - In the implementation block
@property (assign,nonatomic) CGRect lastLayoutBounds;                                       //@synthesize lastLayoutBounds=_lastLayoutBounds - In the implementation block
@property (nonatomic,retain) id<NUTitleViewStyler> styler;                                  //@synthesize styler=_styler - In the implementation block
@property (assign,nonatomic,__weak) id<NUTitleViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(id<NUTitleViewStyler>)styler;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitleView:(NUCrossFadeTitleView *)arg1 ;
-(void)setIncomingTitleView:(NUCrossFadeTitleView *)arg1 ;
-(void)applyTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(void)finishDisplayingTitleViewUpdate:(id)arg1 finished:(/*^block*/id)arg2 ;
-(CGRect)lastLayoutBounds;
-(NUCrossFadeTitleView *)titleView;
-(NUFadeViewAnimator *)fadeAnimator;
-(void)setStyler:(id<NUTitleViewStyler>)arg1 ;
-(void)setDelegate:(id<NUTitleViewDelegate>)arg1 ;
-(void)relayoutWithAnimation:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyler:(id)arg1 ;
-(id)createMaskingLayerForTranslation;
-(id<NUTitleViewDelegate>)delegate;
-(NSObject*<OS_dispatch_semaphore>)lingerSemaphore;
-(void)setLastLayoutBounds:(CGRect)arg1 ;
-(void)titleViewHandleTapGuesture;
-(void)setLingerSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NUSlideViewAnimator *)slideAnimator;
-(NUCrossFadeTitleView *)incomingTitleView;
-(NUAnimationQueue *)animationQueue;
@end
