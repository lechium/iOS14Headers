/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class RBSProcessExitContext, NSError, FBSProcessTerminationRequest, FBProcessWatchdogEventContext, FBProcessState, NSString;

@interface FBProcessExitContext : NSObject <BSDescriptionProviding> {

	unsigned long long _exitReason;
	RBSProcessExitContext* _underlyingContext;
	NSError* _launchError;
	FBSProcessTerminationRequest* _terminationRequest;
	FBProcessWatchdogEventContext* _watchdogContext;
	FBProcessState* _stateBeforeExiting;
	long long _terminationReason;

}

@property (nonatomic,retain) FBSProcessTerminationRequest * terminationRequest;              //@synthesize terminationRequest=_terminationRequest - In the implementation block
@property (nonatomic,retain) FBProcessWatchdogEventContext * watchdogContext;                //@synthesize watchdogContext=_watchdogContext - In the implementation block
@property (nonatomic,copy) FBProcessState * stateBeforeExiting;                              //@synthesize stateBeforeExiting=_stateBeforeExiting - In the implementation block
@property (assign,nonatomic) long long terminationReason;                                    //@synthesize terminationReason=_terminationReason - In the implementation block
@property (nonatomic,readonly) unsigned long long exitReason;                                //@synthesize exitReason=_exitReason - In the implementation block
@property (nonatomic,readonly) NSError * launchError;                                        //@synthesize launchError=_launchError - In the implementation block
@property (nonatomic,readonly) RBSProcessExitContext * underlyingContext;                    //@synthesize underlyingContext=_underlyingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForExitReason:(unsigned long long)arg1 ;
-(int)exitCode;
-(NSString *)debugDescription;
-(long long)exitStatus;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setTerminationRequest:(FBSProcessTerminationRequest *)arg1 ;
-(NSError *)launchError;
-(int)terminationSignal;
-(id)createError;
-(BOOL)fairPlayFailure;
-(FBProcessWatchdogEventContext *)watchdogContext;
-(FBSProcessTerminationRequest *)terminationRequest;
-(BOOL)exitedNormally;
-(FBProcessState *)stateBeforeExiting;
-(long long)terminationReason;
-(unsigned long long)exitReason;
-(void)setWatchdogContext:(FBProcessWatchdogEventContext *)arg1 ;
-(void)setTerminationReason:(long long)arg1 ;
-(void)setStateBeforeExiting:(FBProcessState *)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithLaunchError:(id)arg1 underlyingContext:(id)arg2 ;
-(id)succinctDescription;
-(id)initWithUnderlyingContext:(id)arg1 ;
-(RBSProcessExitContext *)underlyingContext;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(BOOL)consideredJetsam;
@end
