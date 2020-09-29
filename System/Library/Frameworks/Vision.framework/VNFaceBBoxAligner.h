/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:20 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@protocol VNModelFile;
@interface VNFaceBBoxAligner : VNDetector {

	shared_ptr<vision::mod::FaceBoxPoseAligner<signed char> >* mFaceBoxPoseAlignerImpl;
	BOOL _modelFilesWereMemmapped;
	id<VNModelFile> mFaceBoxAlignerModelFileHandle;

}
-(void)dealloc;
-(id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id*)arg3 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
@end
