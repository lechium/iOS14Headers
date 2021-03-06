/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <ProVideo/ProVideo-Structs.h>
@class PVImageBuffer;

@interface PVCMSampleBuffer : NSObject {

	opaqueCMSampleBufferRef _sampleBufferRef;
	PVImageBuffer* _backingPVImageBuffer;

}

@property (nonatomic,readonly) opaqueCMSampleBufferRef sampleBufferRef;              //@synthesize sampleBufferRef=_sampleBufferRef - In the implementation block
@property (nonatomic,readonly) PVImageBuffer * backingPVImageBuffer;                 //@synthesize backingPVImageBuffer=_backingPVImageBuffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV22 presentationTimeStamp; 
+(id)sampleBufferWithPVImageBuffer:(id)arg1 timestamp:(SCD_Struct_PV22)arg2 frameDuration:(SCD_Struct_PV22)arg3 ;
+(id)sampleBufferWithPVImageBuffer:(id)arg1 timestamp:(SCD_Struct_PV22)arg2 frameDuration:(SCD_Struct_PV22)arg3 error:(out id*)arg4 ;
+(opaqueCMSampleBufferRef)createCMSampleBufferForPVImageBuffer:(id)arg1 timingInfo:(SCD_Struct_PV73)arg2 error:(out id*)arg3 ;
-(void)dealloc;
-(SCD_Struct_PV22)presentationTimeStamp;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)sampleBufferRef;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(out id*)arg2 ;
-(PVImageBuffer *)backingPVImageBuffer;
@end

