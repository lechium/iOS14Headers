/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol PHAPersonBuildingJobOperationDelegate;
@class PHAVisionServiceFaceProcessingWorker, PVCanceler, NSProgress;

@interface PHAPersonBuildingJobOperation : NSOperation {

	id<PHAPersonBuildingJobOperationDelegate> _delegate;
	PHAVisionServiceFaceProcessingWorker* _faceProcessingWorker;
	PVCanceler* _canceler;
	NSProgress* _progress;
	float _percentComplete;

}
-(void)cancel;
-(float)percentComplete;
-(void)setDelegate:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)delegate;
-(void)main;
-(id)initWithFaceProcessingWorker:(id)arg1 ;
@end

