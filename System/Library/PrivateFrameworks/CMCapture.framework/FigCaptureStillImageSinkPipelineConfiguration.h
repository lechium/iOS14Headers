/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:23 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/FigCaptureBaseStillImageSinkPipelineConfiguration.h>

@class NSNumber, NSDictionary;

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {

	NSNumber* _clientPID;
	NSDictionary* _stillImageColorInfoForFramesOriginatingFromVideoStream;
	BOOL _stillImageISPChromaNoiseReductionEnabled;
	BOOL _stereoFusionSupported;
	BOOL _isIrisSupported;
	BOOL _hdrSupported;
	BOOL _gnrHDRSupported;

}

@property (nonatomic,retain) NSNumber * clientPID;                                                               //@synthesize clientPID=_clientPID - In the implementation block
@property (nonatomic,retain) NSDictionary * stillImageColorInfoForFramesOriginatingFromVideoStream;              //@synthesize stillImageColorInfoForFramesOriginatingFromVideoStream=_stillImageColorInfoForFramesOriginatingFromVideoStream - In the implementation block
@property (assign,nonatomic) BOOL stillImageISPChromaNoiseReductionEnabled;                                      //@synthesize stillImageISPChromaNoiseReductionEnabled=_stillImageISPChromaNoiseReductionEnabled - In the implementation block
@property (assign,nonatomic) BOOL stereoFusionSupported;                                                         //@synthesize stereoFusionSupported=_stereoFusionSupported - In the implementation block
@property (assign,nonatomic) BOOL isIrisSupported;                                                               //@synthesize isIrisSupported=_isIrisSupported - In the implementation block
@property (assign,nonatomic) BOOL hdrSupported;                                                                  //@synthesize hdrSupported=_hdrSupported - In the implementation block
@property (assign,nonatomic) BOOL gnrHDRSupported;                                                               //@synthesize gnrHDRSupported=_gnrHDRSupported - In the implementation block
-(void)setGnrHDRSupported:(BOOL)arg1 ;
-(BOOL)gnrHDRSupported;
-(BOOL)stillImageISPChromaNoiseReductionEnabled;
-(void)dealloc;
-(BOOL)stereoFusionSupported;
-(void)setIsIrisSupported:(BOOL)arg1 ;
-(void)setClientPID:(NSNumber *)arg1 ;
-(BOOL)hdrSupported;
-(void)setHdrSupported:(BOOL)arg1 ;
-(void)setStereoFusionSupported:(BOOL)arg1 ;
-(BOOL)isIrisSupported;
-(void)setStillImageISPChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(NSNumber *)clientPID;
-(void)setStillImageColorInfoForFramesOriginatingFromVideoStream:(NSDictionary *)arg1 ;
-(NSDictionary *)stillImageColorInfoForFramesOriginatingFromVideoStream;
@end

