/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:26 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Foundation/NSOperation.h>

@class HMCameraClip;

@interface HFCameraClipFeedbackPreparationOperation : NSOperation {

	HMCameraClip* _cameraClip;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) HMCameraClip * cameraClip;              //@synthesize cameraClip=_cameraClip - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)initWithCameraClip:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(HMCameraClip *)cameraClip;
-(void)main;
-(id)completionHandler;
@end
