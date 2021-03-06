/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BannerKit/BNBannerAnimator.h>

@interface BNBannerTransitionAnimator : BNBannerAnimator {

	BOOL _presenting;

}

@property (getter=isPresenting,nonatomic,readonly) BOOL presenting;              //@synthesize presenting=_presenting - In the implementation block
+(void)animateInteractive:(BOOL)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isPresenting;
-(id)initForPresenting:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)actionsForTransition:(id)arg1 ;
@end

