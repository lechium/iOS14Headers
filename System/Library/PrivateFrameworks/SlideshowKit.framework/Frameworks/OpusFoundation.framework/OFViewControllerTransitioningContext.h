/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFViewControllerTransitioningContext <NSObject>
@property (assign,nonatomic) double progressVelocity; 
@required
-(void)updateInteractiveTransition:(double)arg1;
-(void)startInteractiveTransition;
-(BOOL)initiallyInteractive;
-(id)containerView;
-(id)toViewController;
-(BOOL)isCompleting;
-(BOOL)isInteractive;
-(BOOL)wasCancelled;
-(double)progress;
-(id)fromViewController;
-(void)completeTransition:(BOOL)arg1;
-(BOOL)isRubberBanding;
-(void)finishInteractiveTransitionWithVelocity:(double)arg1;
-(void)cancelInteractiveTransitionWithVelocity:(double)arg1;
-(void)setProgressVelocity:(double)arg1;
-(double)progressVelocity;
-(void)updateNonInteractiveTransitionWithProgress:(double)arg1;
-(BOOL)doEaseIn;
-(BOOL)doEaseOut;
-(void)makeTransitionInteractiveWithInteractor:(id)arg1 andProgress:(double)arg2;

@end
