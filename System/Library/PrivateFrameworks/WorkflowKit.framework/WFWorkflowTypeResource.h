/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/WFWorkflowReferencing.h>

@class WFWorkflow, NSString;

@interface WFWorkflowTypeResource : WFResource <WFWorkflowReferencing> {

	WFWorkflow* _workflow;

}

@property (assign,nonatomic,__weak) WFWorkflow * workflow;              //@synthesize workflow=_workflow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)mustBeAvailableForDisplay;
-(WFWorkflow *)workflow;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)refreshAvailability;
-(BOOL)workflowTypesAreValid;
@end
