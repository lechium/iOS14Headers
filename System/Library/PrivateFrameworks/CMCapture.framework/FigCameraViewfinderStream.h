/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:20 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class FigDelegateStorage, FigStateMachine;

@interface FigCameraViewfinderStream : NSObject {

	FigDelegateStorage* _delegateStorage;
	FigStateMachine* _stateMachine;
	OpaqueFigEndpointRef _endpoint;
	OpaqueFigEndpointStreamRef _stream;
	OpaqueFigVirtualDisplaySourceRef _displaySource;
	id _endpointsChangedNotificationToken;
	id _streamsChangedNotificationToken;

}
+(void)initialize;
-(void)close;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(int)enqueueVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(void)openWithDestination:(id)arg1 ;
-(void)_setupStateMachine;
-(id)init;
-(void)_handleEndpointsChanged:(id)arg1 ;
-(void)_handleStreamsChanged:(id)arg1 ;
-(void)_setEndpoint:(OpaqueFigEndpointRef)arg1 ;
@end

