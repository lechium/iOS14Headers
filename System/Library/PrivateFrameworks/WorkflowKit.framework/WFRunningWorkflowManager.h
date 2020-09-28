/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@class NSMutableOrderedSet, NSHashTable, NSArray;

@interface WFRunningWorkflowManager : NSObject <WFApplicationStateObserver> {

	/*^block*/id _demoResetBlock;
	NSMutableOrderedSet* _runningWorkflowControllerSet;
	NSHashTable* _workflowControllerAssertionTable;

}

@property (nonatomic,readonly) NSMutableOrderedSet * runningWorkflowControllerSet;              //@synthesize runningWorkflowControllerSet=_runningWorkflowControllerSet - In the implementation block
@property (nonatomic,readonly) NSHashTable * workflowControllerAssertionTable;                  //@synthesize workflowControllerAssertionTable=_workflowControllerAssertionTable - In the implementation block
@property (nonatomic,readonly) NSArray * runningWorkflows; 
@property (nonatomic,readonly) NSArray * runningWorkflowControllers; 
@property (nonatomic,copy) id demoResetBlock;                                                   //@synthesize demoResetBlock=_demoResetBlock - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(NSArray *)runningWorkflowControllers;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)workflowControllerDidStart:(id)arg1 ;
-(void)workflowControllerDidStop:(id)arg1 ;
-(void)updateRunningWorkflowCount;
-(void)updateAssertions;
-(NSArray *)runningWorkflows;
-(id)demoResetBlock;
-(void)setDemoResetBlock:(id)arg1 ;
-(NSMutableOrderedSet *)runningWorkflowControllerSet;
-(NSHashTable *)workflowControllerAssertionTable;
@end
