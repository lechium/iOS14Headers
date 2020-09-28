/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSMutableArray, AVCaptureDevice, AVWeakReference, AVCaptureInputPort, NSArray, NSString;

@interface AVCaptureConnectionInternal : NSObject {

	NSMutableArray* inputPorts;
	AVCaptureDevice* sourceDevice;
	AVWeakReference* outputWeakReference;
	AVWeakReference* videoPreviewLayerWeakReference;
	BOOL hasActiveObservers;
	BOOL active;
	BOOL enabled;
	int changeSeed;
	AVCaptureInputPort* audioInputPort;
	NSMutableArray* audioChannels;
	NSArray* audioChannelLevels;
	long long lastGetAudioLevelsTime;
	AVCaptureInputPort* videoInputPort;
	AVCaptureInputPort* metadataInputPort;
	AVCaptureInputPort* metadataItemInputPort;
	AVCaptureInputPort* depthDataInputPort;
	AVCaptureInputPort* visionDataInputPort;
	AVCaptureInputPort* pointCloudDataInputPort;
	AVCaptureInputPort* cameraCalibrationDataInputPort;
	BOOL videoMirroringSupported;
	BOOL automaticallyAdjustsVideoMirroring;
	BOOL videoMirrored;
	BOOL videoOrientationSupported;
	long long videoOrientation;
	SCD_Struct_AV0 videoMinFrameDuration;
	SCD_Struct_AV0 videoMaxFrameDuration;
	double videoMaxScaleAndCropFactor;
	double videoScaleAndCropFactor;
	int videoRetainedBufferCountHint;
	long long preferredVideoStabilizationMode;
	BOOL videoStabilizationEnabled;
	long long activeVideoStabilizationMode;
	BOOL hasVideoMinFrameDurationObserver;
	NSString* connectionID;
	BOOL cameraIntrinsicMatrixDeliverySupported;
	BOOL cameraIntrinsicMatrixDeliveryEnabled;
	BOOL livePhotoMetadataWritingEnabled;
	BOOL debugMetadataSidecarFileEnabled;
	NSArray* supportedVideoMirroringMethodsForMovieRecording;
	long long videoMirroringMethodForMovieRecording;

}
@end
