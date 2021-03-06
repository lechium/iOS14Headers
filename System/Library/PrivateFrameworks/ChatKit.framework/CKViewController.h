/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@interface CKViewController : UIViewController {

	BOOL _appeared;
	BOOL _deferredAppeared;
	BOOL _appearing;
	BOOL _dissapearing;

}

@property (assign,nonatomic) BOOL appeared;                      //@synthesize appeared=_appeared - In the implementation block
@property (assign,nonatomic) BOOL deferredAppeared;              //@synthesize deferredAppeared=_deferredAppeared - In the implementation block
@property (assign,nonatomic) BOOL appearing;                     //@synthesize appearing=_appearing - In the implementation block
@property (assign,nonatomic) BOOL dissapearing;                  //@synthesize dissapearing=_dissapearing - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)appearing;
-(void)significantTimeChange;
-(BOOL)appeared;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)parentControllerDidBecomeActive;
-(void)performResumeDeferredSetup;
-(void)systemApplicationWillEnterForeground;
-(BOOL)deferredAppeared;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(BOOL)dissapearing;
-(void)setAppeared:(BOOL)arg1 ;
-(void)setDissapearing:(BOOL)arg1 ;
-(void)setDeferredAppeared:(BOOL)arg1 ;
-(void)childViewControllersPerform:(SEL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setAppearing:(BOOL)arg1 ;
@end

