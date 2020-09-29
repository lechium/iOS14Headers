/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:24 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol OS_dispatch_group;
@class BWFigVideoCaptureStream, NSObject, NSArray;

@interface BWStreamStartStopState : NSObject {

	BWFigVideoCaptureStream* _stream;
	NSObject*<OS_dispatch_group> _hasStartedGroup;
	BOOL _hasEnteredStartedGroup;
	NSObject*<OS_dispatch_group> _dependentsHaveStoppedGroup;
	BWStreamStartStopState* _blockingMasterState;
	NSArray* _blockingSlaveStates;
	float _timeoutInSeconds;
	BOOL _waitForMasterAEToSettle;

}

@property (nonatomic,readonly) BWFigVideoCaptureStream * stream;              //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) NSArray * blockingSlaveStates;                   //@synthesize blockingSlaveStates=_blockingSlaveStates - In the implementation block
@property (assign,nonatomic) BOOL waitForMasterAEToSettle;                    //@synthesize waitForMasterAEToSettle=_waitForMasterAEToSettle - In the implementation block
-(BWFigVideoCaptureStream *)stream;
-(void)dealloc;
-(BOOL)dependentWillStart;
-(void)dependentDidStop;
-(id)initWithStream:(id)arg1 masterState:(id)arg2 timeoutInSeconds:(float)arg3 ;
-(BOOL)streamWillStart;
-(void)streamDidStart;
-(BOOL)streamWillStop;
-(void)streamDidStop;
-(NSArray *)blockingSlaveStates;
-(void)setBlockingSlaveStates:(NSArray *)arg1 ;
-(BOOL)waitForMasterAEToSettle;
-(void)setWaitForMasterAEToSettle:(BOOL)arg1 ;
-(id)description;
@end
