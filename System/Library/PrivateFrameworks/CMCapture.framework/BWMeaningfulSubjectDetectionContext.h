/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:22 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface BWMeaningfulSubjectDetectionContext : NSObject {

	AcDetContextRef handle;
	SCD_Struct_BW102 state;
	SCD_Struct_BW104 params;
	SCD_Struct_BW105 control;
	void* detectionPlan;
	SCD_Struct_BW30* detectionNetwork;
	SCD_Struct_BW106* detectionOutputs[24];

}

@property (nonatomic,readonly) void* detectionPlan; 
+(void)initialize;
-(void)dealloc;
-(void*)detectionPlan;
-(id)initWithDetectionNetworkURL:(id)arg1 context:(void*)arg2 priority:(int)arg3 ;
@end

