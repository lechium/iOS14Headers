/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:23 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol BWStillImageCaptureStatusDelegate <NSObject>
@required
-(void)stillImageCoordinator:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW8)arg2 transform:(id)arg3 forSettings:(id)arg4;
-(void)stillImageCoordinator:(id)arg1 didCancelMomentCaptureForSettingsID:(long long)arg2 streamingDisruptionEndPTS:(SCD_Struct_BW8)arg3;
-(void)stillImageCoordinator:(id)arg1 willBeginCaptureBeforeResolvingSettingsForID:(long long)arg2;
-(void)stillImageCoordinator:(id)arg1 willPrepareStillImageCaptureWithSettings:(id)arg2 clientInitiated:(BOOL)arg3;
-(void)stillImageCoordinator:(id)arg1 didResolveStillImagePTS:(SCD_Struct_BW8)arg2 forSettings:(id)arg3 resolvedCaptureSettings:(id)arg4 isPreBracketedEV0:(BOOL)arg5;
-(void)stillImageCoordinator:(id)arg1 willBeginCaptureForSettings:(id)arg2;
-(void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettings:(id)arg2;
-(void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettings:(id)arg2 sisActive:(BOOL)arg3 error:(int)arg4;

@end

