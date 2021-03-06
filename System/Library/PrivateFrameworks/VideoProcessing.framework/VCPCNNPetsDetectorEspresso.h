/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPCNNPetsDetector.h>

@class VCPCNNModelEspresso, NSString;

@interface VCPCNNPetsDetectorEspresso : VCPCNNPetsDetector {

	int _maxNumRegions;
	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;
	NSString* _resConfig;
	int _srcWidth;
	int _srcHeight;

}
+(id)sharedModel:(id)arg1 ;
-(id)initWithMaxNumRegions:(int)arg1 ;
-(int)createModel:(int)arg1 srcWidth:(int)arg2 ;
-(int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(void)dealloc;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
@end

