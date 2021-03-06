/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDocCamImageQuadEditOverlayDelegate <NSObject>
@required
-(id)quadForOverlay:(id)arg1;
-(CGRect*)unitImageRectForOverlayRect:(CGRect)arg1;
-(CGRect*)imageFrameInOverlayCoordinates;
-(void)selectedKnobDidPanToRect:(CGRect)arg1;
-(void)selectedKnobDidChange:(id)arg1;
-(double)currentZoomFactorForOverlay;
-(void)overlayDidLayout:(id)arg1;

@end

