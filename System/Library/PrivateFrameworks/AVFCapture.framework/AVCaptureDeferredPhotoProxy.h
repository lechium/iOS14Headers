/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCapturePhoto.h>

@class NSString;

@interface AVCaptureDeferredPhotoProxy : AVCapturePhoto {

	NSString* _captureRequestIdentifier;
	NSString* _photoIdentifier;

}

@property (copy,readonly) NSString * persistentStorageUUID;              //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
@property (readonly) NSString * deferredPhotoIdentifier; 
-(id)initWithTimestamp:(SCD_Struct_AV0)arg1 captureRequestIdentifier:(id)arg2 photoIdentifier:(id)arg3 expectedPhotoProcessingFlags:(unsigned)arg4 ;
-(id)debugDescription;
-(void)dealloc;
-(id)captureRequestIdentifier;
-(id)initWithTimestamp:(SCD_Struct_AV0)arg1 proxySurface:(IOSurfaceRef)arg2 proxySurfaceSize:(unsigned long long)arg3 proxyFileType:(id)arg4 previewPhotoSurface:(IOSurfaceRef)arg5 metadata:(id)arg6 captureRequest:(id)arg7 sequenceCount:(unsigned long long)arg8 photoCount:(unsigned long long)arg9 captureRequestIdentifier:(id)arg10 photoIdentifier:(id)arg11 expectedPhotoProcessingFlags:(unsigned)arg12 sourceDeviceType:(id)arg13 ;
-(id)initWithDeferredPhotoIdentifier:(id)arg1 ;
-(NSString *)persistentStorageUUID;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)deferredPhotoIdentifier;
-(id)description;
@end
