/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>
#import <libobjc.A.dylib/NTKFaceViewComplicationFactory.h>

@class NTKFaceView, NSString;

@interface NTKFullscreenSubdialComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory> {

	NTKFaceView* _faceView;
	CGPoint _circularComplicationDistanceFromCenter;

}

@property (assign,nonatomic) CGPoint circularComplicationDistanceFromCenter;              //@synthesize circularComplicationDistanceFromCenter=_circularComplicationDistanceFromCenter - In the implementation block
@property (assign,nonatomic,__weak) NTKFaceView * faceView;                               //@synthesize faceView=_faceView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initForDevice:(id)arg1 ;
-(long long)complicationPickerStyleForSlot:(id)arg1 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(id)pickerMaskForSlot:(id)arg1 ;
-(id)customEditOptionContainerViewForSlot:(id)arg1 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(id)keylineViewForComplicationSlot:(id)arg1 ;
-(long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(void)loadLayoutRules;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)setFaceView:(NTKFaceView *)arg1 ;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRulesForFaceView:(id)arg1 ;
-(NTKFaceView *)faceView;
-(BOOL)_convertCircularSlot:(id)arg1 toPosition:(long long*)arg2 ;
-(void)setAlpha:(double)arg1 faceView:(id)arg2 ;
-(void)setCircularComplicationDistanceFromCenter:(CGPoint)arg1 ;
-(CGPoint)_circularComplicationCenterForSlot:(id)arg1 inFaceBounds:(CGRect)arg2 ;
-(CGPoint)circularComplicationDistanceFromCenter;
@end
