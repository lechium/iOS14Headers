/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMediaDataRequesterConsumer.h>
#import <AVFCore/AVQueuedSampleBufferRenderingInternal.h>
#import <AVFCore/AVQueuedSampleBufferRendering.h>

@class AVSampleBufferAudioRendererInternal, NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering> {

	AVSampleBufferAudioRendererInternal* _audioRendererInternal;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) NSString * audioOutputDeviceUniqueID; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
+(id)sampleBufferAudioRenderer;
-(BOOL)isReadyForMoreMediaData;
-(void)flush;
-(void)setVolume:(float)arg1 ;
-(int)_initializeTimebase;
-(int)_installNotificationHandlers;
-(void)_uninstallNotificationHandlers;
-(void)_transitionToStatus:(long long)arg1 error:(id)arg2 ;
-(void)_transitionToFailedStatusWithOSStatus:(int)arg1 ;
-(void)copyFigSampleBufferAudioRenderer:(OpaqueFigSampleBufferAudioRenderer*)arg1 ;
-(BOOL)setRenderSynchronizer:(id)arg1 error:(id*)arg2 ;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_triggerMediaRequestCallback;
-(void)_wasFlushedAutomaticallyAtTime:(SCD_Struct_AV6)arg1 ;
-(void)flushFromSourceTime:(SCD_Struct_AV6)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)audioTimePitchAlgorithm;
-(float)volume;
-(void)dealloc;
-(void)setMuted:(BOOL)arg1 ;
-(void)setSTSLabel:(id)arg1 ;
-(long long)status;
-(NSError *)error;
-(OpaqueCMTimebaseRef)timebase;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)isMuted;
-(NSString *)audioOutputDeviceUniqueID;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)setAudioOutputDeviceUniqueID:(NSString *)arg1 ;
-(void)stopRequestingMediaData;
@end
