/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray, NSURL;

@interface AVCapturePhotoSettingsInternal : NSObject {

	NSDictionary* format;
	NSString* processedFileType;
	unsigned rawPhotoPixelFormatType;
	NSString* rawFileType;
	long long uniqueID;
	long long flashMode;
	BOOL autoRedEyeReductionEnabled;
	long long digitalFlashMode;
	long long HDRMode;
	BOOL EV0PhotoDeliveryEnabled;
	long long photoQualityPrioritization;
	BOOL photoQualityPrioritizationIsSetByClient;
	BOOL autoVirtualDeviceFusionEnabled;
	NSArray* virtualDeviceConstituentPhotoDeliveryEnabledDevices;
	BOOL highResolutionPhotoEnabled;
	BOOL depthDataDeliveryEnabled;
	BOOL embedsDepthDataInPhoto;
	BOOL depthDataFiltered;
	BOOL cameraCalibrationDataDeliveryEnabled;
	BOOL portraitEffectsMatteDeliveryEnabled;
	BOOL embedsPortraitEffectsMatteInPhoto;
	NSArray* enabledSemanticSegmentationMatteTypes;
	BOOL embedsSemanticSegmentationMattesInPhoto;
	NSDictionary* metadata;
	NSURL* livePhotoMovieFileURL;
	NSURL* livePhotoMovieFileURLForOriginalPhoto;
	NSString* livePhotoVideoCodecType;
	NSArray* livePhotoMovieMetadata;
	NSArray* livePhotoMovieMetadataForOriginalPhoto;
	NSDictionary* previewPhotoFormat;
	NSDictionary* embeddedThumbnailPhotoFormat;
	NSDictionary* rawEmbeddedThumbnailPhotoFormat;
	BOOL squareCropEnabled;
	BOOL turboModeEnabled;
	BOOL burstQualityCaptureEnabled;
	NSArray* photoFilters;
	NSArray* adjustedPhotoFilters;
	unsigned shutterSound;
	unsigned long long userInitiatedPhotoRequestTime;
	BOOL autoDeferredProcessingEnabled;
	NSURL* HEICSFileURL;
	NSURL* videoFileURL;
	NSDictionary* videoFormat;
	NSArray* videoFileMetadata;
	BOOL autoSpatialOverCaptureEnabled;
	NSDictionary* spatialOverCaptureMetadata;
	NSURL* spatialOverCaptureLivePhotoMovieFileURL;
	NSArray* spatialOverCaptureLivePhotoMovieMetadata;
	NSString* spatialOverCaptureLivePhotoContentIdentifier;
	NSString* spatialOverCaptureGroupIdentifier;
	NSDictionary* spatialOverCaptureMetadataForOriginalPhoto;
	NSURL* spatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto;
	NSArray* spatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto;
	NSString* spatialOverCaptureLivePhotoContentIdentifierForOriginalPhoto;
	NSString* spatialOverCaptureGroupIdentifierForOriginalPhoto;
	BOOL processedPhotoZoomWithoutUpscalingEnabled;
	NSString* livePhotoContentIdentifier;
	NSString* livePhotoContentIdentifierForOriginalPhoto;

}
@end

