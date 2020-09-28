/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OFUIPagingViewDelegate.h>

@class OFUIPagingView, NSString;

@interface OFUIPagingViewController : OFUIViewController <OFUIPagingViewDelegate> {

	OFUIPagingView* _pagingView;

}

@property (nonatomic,retain) OFUIPagingView * pagingView;              //@synthesize pagingView=_pagingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)pagingViewClass;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidUnload;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillUnload;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning;
-(OFUIPagingView *)pagingView;
-(long long)numberOfPagesInPagingView:(id)arg1 ;
-(id)viewForPageInPagingView:(id)arg1 atIndex:(long long)arg2 ;
-(void)setPagingView:(OFUIPagingView *)arg1 ;
@end
