/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSProgress, WFWorkflowProgressView;

@interface WFCompactStopButton : UIButton {

	NSProgress* _progress;
	WFWorkflowProgressView* _progressView;

}

@property (nonatomic,readonly) WFWorkflowProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                //@synthesize progress=_progress - In the implementation block
-(WFWorkflowProgressView *)progressView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)transitionToCompleted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)popCompletedCheckmark;
-(void)handleTouchUpInside;
@end
