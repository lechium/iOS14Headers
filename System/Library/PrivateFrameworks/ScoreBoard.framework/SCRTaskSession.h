/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCRStateTransitionable.h>
#import <libobjc.A.dylib/SCRSchedulable.h>

@class SCRSchedulingConfiguration, NSError, SCRTask, SCRStateMachine, SCRApprovalCoordinator, NSString;

@interface SCRTaskSession : NSObject <SCRStateTransitionable, SCRSchedulable> {

	id _context;
	NSError* _error;
	SCRTask* _task;
	SCRStateMachine* _stateMachine;
	SCRApprovalCoordinator* _approvalCoordinator;

}

@property (nonatomic,readonly) SCRTask * task;                                               //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) SCRStateMachine * stateMachine;                               //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) SCRApprovalCoordinator * approvalCoordinator;                 //@synthesize approvalCoordinator=_approvalCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) SCRSchedulingConfiguration * schedulingConfiguration; 
+(id)descriptionForState:(unsigned long long)arg1 ;
+(id)validStateTransitions;
-(SCRTask *)task;
-(SCRSchedulingConfiguration *)schedulingConfiguration;
-(void)_completeTask;
-(SCRStateMachine *)stateMachine;
-(void)perform;
-(void)_start;
-(void)_teardownSharedContext;
-(void)_requestApproval;
-(void)_setupSharedContext;
-(void)handleStateTransition:(id)arg1 ;
-(void)_performTask;
-(id)initWithTask:(id)arg1 approvalCoordinator:(id)arg2 ;
-(void)_complete;
-(SCRApprovalCoordinator *)approvalCoordinator;
@end
