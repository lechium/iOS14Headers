//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel;

@interface HPdetector_SmartCam_B238 : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)urlOfModelInThisBundle;	// IMP=0x0000000100092a94
- (void).cxx_destruct;	// IMP=0x0000000100092a88
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000010009286c
- (id)predictionFromImageDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000927dc
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000926f4
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100092670
- (id)initWithModelCollectionEntry:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100092560
- (id)initWithModelCollectionEntry:(id)arg1 error:(id *)arg2;	// IMP=0x000000010009246c
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000010009238c
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100092304
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100092240
- (id)init;	// IMP=0x00000001000921e0

@end

