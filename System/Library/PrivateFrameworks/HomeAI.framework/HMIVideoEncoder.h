/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIVideoEncoderDelegate;
@class NSString;

@interface HMIVideoEncoder : HMIVideoProcessingNode <HMFLogging> {

	OpaqueVTCompressionSessionRef _session;
	BOOL _forceKeyFrameOnNextEncodedFrame;
	SCD_Struct_HM19 _dimensions;
	unsigned _codecType;
	BOOL _realTime;
	long long _maxKeyFrameIntervalDuration;
	long long _averageBitRate;
	id<HMIVideoEncoderDelegate> _delegate;
	unsigned long long _numberOfDroppedFrames;

}

@property (__weak) id<HMIVideoEncoderDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long averageBitRate; 
@property (assign) long long maxKeyFrameIntervalDuration; 
@property (readonly) unsigned long long numberOfDroppedFrames;              //@synthesize numberOfDroppedFrames=_numberOfDroppedFrames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)flush;
-(void)dealloc;
-(void)setDelegate:(id<HMIVideoEncoderDelegate>)arg1 ;
-(id<HMIVideoEncoderDelegate>)delegate;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithDimensions:(SCD_Struct_HM19)arg1 codecType:(unsigned)arg2 realTime:(BOOL)arg3 error:(id*)arg4 ;
-(long long)averageBitRate;
-(BOOL)_initSessionWithError:(id*)arg1 ;
-(void)setMaxKeyFrameIntervalDuration:(long long)arg1 ;
-(void)setAverageBitRate:(long long)arg1 ;
-(void)_invalidateSession;
-(BOOL)_encodeSampleBuffer:(opaqueCMSampleBufferRef)arg1 attemptRecovery:(BOOL)arg2 ;
-(long long)maxKeyFrameIntervalDuration;
-(unsigned long long)numberOfDroppedFrames;
@end
