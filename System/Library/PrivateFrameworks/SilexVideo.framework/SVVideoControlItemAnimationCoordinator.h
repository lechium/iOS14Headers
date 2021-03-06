/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoControlItemAnimating.h>

@protocol AVPlayerViewControllerAnimationCoordinator;
@class NSMutableArray, NSString;

@interface SVVideoControlItemAnimationCoordinator : NSObject <SVVideoControlItemAnimating> {

	id<AVPlayerViewControllerAnimationCoordinator> _coordinator;
	NSMutableArray* _animationBlocks;
	NSMutableArray* _completionBlocks;

}

@property (nonatomic,readonly) id<AVPlayerViewControllerAnimationCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) NSMutableArray * animationBlocks;                                        //@synthesize animationBlocks=_animationBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;                                       //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)completionBlocks;
-(id<AVPlayerViewControllerAnimationCoordinator>)coordinator;
-(NSMutableArray *)animationBlocks;
-(void)animateWithAnimationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithAnimationCoordinator:(id)arg1 ;
@end

