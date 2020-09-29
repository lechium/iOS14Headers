/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:22 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWObjectDetector.h>

@class NSMutableArray, NSString;

@interface BWDetectedObjectsInfoRingBuffer : NSObject <BWObjectDetector> {

	NSMutableArray* _ringBuffer;
	OpaqueFigSimpleMutexRef _mutex;
	int _depth;
	int _numConsecutiveFramesWithObjects;
	SCD_Struct_BW8 _lastUpdatePTS;
	SCD_Struct_BW8 _lastStableObjectPTS;

}

@property (readonly) id<BWObjectDetector> objectDetector; 
@property (readonly) float secondsSinceLastObjectDetected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flush;
-(void)dealloc;
-(id)objectsForPTS:(SCD_Struct_BW8)arg1 ;
-(float)secondsSinceLastObjectDetected;
-(id)initWithRingBufferDepth:(int)arg1 ;
-(void)addObjectsFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)transferObjectsToSampleBuffer:(opaqueCMSampleBufferRef)arg1 totalSensorCropRect:(CGRect)arg2 ;
-(id<BWObjectDetector>)objectDetector;
@end
