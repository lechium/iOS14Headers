/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMFMapViewDelegateInternalDelegate <NSObject>
@required
-(UIEdgeInsets*)edgeInsets;
-(BOOL)canSelectAnnotation:(id)arg1;
-(void)setShouldZoomToFitNewLocations:(BOOL)arg1;
-(BOOL)shouldZoomToFitMeAndLocations;
-(BOOL)viewWillAppearCalled;
-(id)_internalAnnotationTintColor;
-(void)didSelectLocation:(id)arg1;
-(void)didDeselectLocation:(id)arg1;
-(void)regionWillChangeAnimated:(BOOL)arg1;
-(void)regionDidChangeAnimated:(BOOL)arg1;
-(void)reZoomToFit;
-(void)didUpdateUserLocation:(id)arg1;
-(void)mapViewDidFinishRenderingMap;
-(BOOL)alwaysShowAccuracy;
-(id)annotationImageForAnnotation:(id)arg1 andHandle:(id)arg2;

@end
