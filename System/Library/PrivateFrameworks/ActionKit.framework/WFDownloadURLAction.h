/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFDownloadURLAction : WFAction
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)configureRuntimeResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getContentsOfURLItem:(id)arg1 expectedByteCountHandler:(/*^block*/id)arg2 writtenByteCountHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)configureHTTPBodyForRequest:(id)arg1 withMethod:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
