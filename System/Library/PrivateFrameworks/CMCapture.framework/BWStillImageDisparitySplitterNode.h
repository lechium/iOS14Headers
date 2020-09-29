/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:21 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWNodeOutput;

@interface BWStillImageDisparitySplitterNode : BWNode {

	id* _outputs;
	unsigned long long _numberOfOutputs;

}

@property (nonatomic,readonly) BWNodeOutput * disparityOutput; 
@property (nonatomic,readonly) BWNodeOutput * processedOutput; 
+(void)initialize;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BWNodeOutput *)disparityOutput;
-(BWNodeOutput *)processedOutput;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
@end
