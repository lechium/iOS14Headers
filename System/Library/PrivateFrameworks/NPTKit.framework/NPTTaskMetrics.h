/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSessionDataTask, NPTMetricResult, NSURLSessionTaskMetrics;

@interface NPTTaskMetrics : NSObject {

	NSURLSessionDataTask* _task;
	NPTMetricResult* _results;
	NSURLSessionTaskMetrics* _taskMetrics;

}

@property (nonatomic,retain) NSURLSessionDataTask * task;                        //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NPTMetricResult * results;                          //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * taskMetrics;              //@synthesize taskMetrics=_taskMetrics - In the implementation block
-(NSURLSessionTaskMetrics *)taskMetrics;
-(NPTMetricResult *)results;
-(NSURLSessionDataTask *)task;
-(void)setResults:(NPTMetricResult *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(id)init;
-(void)setTaskMetrics:(NSURLSessionTaskMetrics *)arg1 ;
@end
