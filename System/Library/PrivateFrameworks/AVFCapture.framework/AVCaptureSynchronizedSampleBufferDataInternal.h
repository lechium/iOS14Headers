/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@interface AVCaptureSynchronizedSampleBufferDataInternal : NSObject {

	opaqueCMSampleBufferRef sampleBuffer;
	BOOL sampleBufferWasDropped;
	long long droppedReason;
	BOOL hasCorrespondingDepthData;
	BOOL hasCorrespondingVisionData;
	int constituentDeviceCaptureID;

}
@end

