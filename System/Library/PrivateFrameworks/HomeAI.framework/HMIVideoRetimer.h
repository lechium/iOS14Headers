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

@protocol HMIVideoRetimerDelegate;
@class NSString;

@interface HMIVideoRetimer : HMIVideoProcessingNode <HMFLogging> {

	opaqueCMSampleBufferRef _lastSample;
	id<HMIVideoRetimerDelegate> _delegate;

}

@property (__weak) id<HMIVideoRetimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)flush;
-(void)dealloc;
-(id)init;
-(void)setDelegate:(id<HMIVideoRetimerDelegate>)arg1 ;
-(id<HMIVideoRetimerDelegate>)delegate;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end
