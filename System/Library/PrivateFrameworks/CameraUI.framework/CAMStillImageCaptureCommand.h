/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMStillImageCaptureRequest;

@interface CAMStillImageCaptureCommand : CAMCaptureCommand {

	CAMStillImageCaptureRequest* __request;

}

@property (nonatomic,readonly) CAMStillImageCaptureRequest * _request;              //@synthesize _request=__request - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_sanitizeCapturePhotoSettings:(id)arg1 withContext:(id)arg2 ;
-(id)initWithRequest:(id)arg1 ;
-(long long)_videoOrientationForCaptureOrientation:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CAMStillImageCaptureRequest *)_request;
-(void)executeWithContext:(id)arg1 ;
@end

