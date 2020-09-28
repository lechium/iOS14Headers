/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <libobjc.A.dylib/PHAJobCoalescerDelegate.h>
#import <libobjc.A.dylib/PHAJobConstraintsObserverDelegate.h>
#import <libobjc.A.dylib/PHAWorkerJobDelegate.h>
#import <libobjc.A.dylib/PHADirtyChangeCoalescerDelegate.h>
#import <libobjc.A.dylib/PHAActivityGovernorDelegate.h>
#import <libobjc.A.dylib/PHAGraphManagerClientMessagesReceiver.h>

@protocol PHAJobCoordinatorDelegate, OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class NSDictionary, PHAJobConstraints, PHAWorkerWarmer, PHAJobCoalescer, PHADirtyChangeCoalescer, PHAJobConstraintsObserver, NSObject, PHAWorkerHealthMonitor, PHAActivityGovernor, PHAJobGenerator, PHAManager, PHAWorkerJob, NSMutableArray, NSMutableSet, NSString;

@interface PHAJobCoordinator : NSObject <PHAJobCoalescerDelegate, PHAJobConstraintsObserverDelegate, PHAWorkerJobDelegate, PHADirtyChangeCoalescerDelegate, PHAActivityGovernorDelegate, PHAGraphManagerClientMessagesReceiver> {

	Ai _pendingAsyncTasksCount;
	AQ _processingQOS;
	BOOL _graphUpdateNeeded;
	NSDictionary* _cachedWorkersByType;
	os_unfair_lock_s _workersByTypeLock;
	BOOL _newConstraintsPending;
	BOOL _shouldIgnoreConstraintChanges;
	PHAJobConstraints* _currentConstraints;
	PHAWorkerWarmer* _warmer;
	PHAJobCoalescer* _jobCoalescer;
	PHADirtyChangeCoalescer* _dirtyCoalescer;
	PHAJobConstraintsObserver* _constraintsObserver;
	double _maxIntervalSinceLastJobReport;
	id<PHAJobCoordinatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _maintenanceTimer;
	PHAWorkerHealthMonitor* _healthMonitor;
	PHAActivityGovernor* _activityGovernor;
	PHAJobGenerator* _jobGenerator;
	PHAManager* _manager;
	PHAWorkerJob* _currentForegroundJob;
	NSMutableArray* _waitingForegroundJobs;
	PHAWorkerJob* _currentBackgroundJob;
	NSObject*<OS_os_transaction> _runningJobTransaction;
	NSMutableSet* _workerTypesServicedForUserFG;
	NSObject*<OS_os_transaction> _foregroundTransaction;

}

@property (nonatomic,readonly) PHAJobCoalescer * jobCoalescer;                                //@synthesize jobCoalescer=_jobCoalescer - In the implementation block
@property (nonatomic,readonly) PHADirtyChangeCoalescer * dirtyCoalescer;                      //@synthesize dirtyCoalescer=_dirtyCoalescer - In the implementation block
@property (nonatomic,readonly) PHAJobConstraintsObserver * constraintsObserver;               //@synthesize constraintsObserver=_constraintsObserver - In the implementation block
@property (assign,nonatomic) double maxIntervalSinceLastJobReport;                            //@synthesize maxIntervalSinceLastJobReport=_maxIntervalSinceLastJobReport - In the implementation block
@property (assign,nonatomic,__weak) id<PHAJobCoordinatorDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> maintenanceTimer;                //@synthesize maintenanceTimer=_maintenanceTimer - In the implementation block
@property (assign,nonatomic) BOOL newConstraintsPending;                                      //@synthesize newConstraintsPending=_newConstraintsPending - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreConstraintChanges;                              //@synthesize shouldIgnoreConstraintChanges=_shouldIgnoreConstraintChanges - In the implementation block
@property (nonatomic,readonly) PHAWorkerHealthMonitor * healthMonitor;                        //@synthesize healthMonitor=_healthMonitor - In the implementation block
@property (nonatomic,readonly) PHAActivityGovernor * activityGovernor;                        //@synthesize activityGovernor=_activityGovernor - In the implementation block
@property (assign,nonatomic) BOOL activityGovernorOverride; 
@property (nonatomic,readonly) PHAJobGenerator * jobGenerator;                                //@synthesize jobGenerator=_jobGenerator - In the implementation block
@property (assign,nonatomic,__weak) PHAManager * manager;                                     //@synthesize manager=_manager - In the implementation block
@property (copy) PHAJobConstraints * currentConstraints;                                      //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (nonatomic,retain) PHAWorkerJob * currentForegroundJob;                             //@synthesize currentForegroundJob=_currentForegroundJob - In the implementation block
@property (nonatomic,readonly) NSMutableArray * waitingForegroundJobs;                        //@synthesize waitingForegroundJobs=_waitingForegroundJobs - In the implementation block
@property (nonatomic,retain) PHAWorkerJob * currentBackgroundJob;                             //@synthesize currentBackgroundJob=_currentBackgroundJob - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> runningJobTransaction;              //@synthesize runningJobTransaction=_runningJobTransaction - In the implementation block
@property (nonatomic,retain) NSMutableSet * workerTypesServicedForUserFG;                     //@synthesize workerTypesServicedForUserFG=_workerTypesServicedForUserFG - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> foregroundTransaction;              //@synthesize foregroundTransaction=_foregroundTransaction - In the implementation block
@property (getter=isQuiescent,nonatomic,readonly) BOOL quiescent; 
@property (nonatomic,readonly) PHAWorkerWarmer * warmer;                                      //@synthesize warmer=_warmer - In the implementation block
@property (readonly) BOOL graphUpdateNeeded;                                                  //@synthesize graphUpdateNeeded=_graphUpdateNeeded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)statusAsDictionary;
-(void)_inq_reconsiderWantsFGActivityBasedOnConstraints:(id)arg1 ;
-(id)photoLibrary;
-(void)setCurrentBackgroundJob:(PHAWorkerJob *)arg1 ;
-(void)governorDidGrantForegroundAccess:(id)arg1 ;
-(id)_nextAdditionalJobForWorkerTypeObj:(id)arg1 scenario:(unsigned long long)arg2 ;
-(void)addWorker:(id)arg1 ;
-(void)_inq_launchJob:(id)arg1 ;
-(void)_inq_stopJobsAfterConstraintOrActivityChange;
-(void)enqueueForegroundJob:(id)arg1 ;
-(PHADirtyChangeCoalescer *)dirtyCoalescer;
-(void)_inq_enforceTimeoutForJob:(id)arg1 ;
-(void)_scheduleNextJob;
-(id)_defaultWorkersByType;
-(void)jobCoalescer:(id)arg1 didProduceJob:(id)arg2 ;
-(void)dealloc;
-(void)setManager:(PHAManager *)arg1 ;
-(void)didFinishJob:(id)arg1 ;
-(PHAWorkerWarmer *)warmer;
-(NSObject*<OS_os_transaction>)runningJobTransaction;
-(void)setActivityGovernorOverride:(BOOL)arg1 ;
-(PHAJobCoalescer *)jobCoalescer;
-(BOOL)isQuiescent;
-(id)initWithManager:(id)arg1 initialConstraints:(id)arg2 additionalWorkersByType:(id)arg3 ;
-(PHAManager *)manager;
-(NSMutableArray *)waitingForegroundJobs;
-(void)setForegroundTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(id)workersByType;
-(void)jobConstraintsObserver:(id)arg1 constraintsDidChange:(id)arg2 mask:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_source>)maintenanceTimer;
-(void)setCurrentForegroundJob:(PHAWorkerJob *)arg1 ;
-(id)_workerForJob:(id)arg1 ;
-(NSObject*<OS_os_transaction>)foregroundTransaction;
-(void)setMaxIntervalSinceLastJobReport:(double)arg1 ;
-(void)coalescer:(id)arg1 didCoalesce:(id)arg2 ;
-(void)operationDidFinish:(id)arg1 ;
-(void)enforceTimeouts;
-(PHAActivityGovernor *)activityGovernor;
-(void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)handleOperation:(id)arg1 ;
-(void)setDelegate:(id<PHAJobCoordinatorDelegate>)arg1 ;
-(void)_installMaintenanceTimer;
-(NSMutableSet *)workerTypesServicedForUserFG;
-(void)_dispatchTransactionAsyncWithName:(const char*)arg1 block:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(PHAJobGenerator *)jobGenerator;
-(double)maxIntervalSinceLastJobReport;
-(id)_inq_nextForegroundJobCanRunAutomatic:(BOOL)arg1 canRunUserFG:(BOOL)arg2 canRunImmediate:(BOOL)arg3 ;
-(BOOL)shouldIgnoreConstraintChanges;
-(void)graphManagerDidUnloadGraph:(id)arg1 ;
-(void)governorDidRevokeBackgroundAccess:(id)arg1 ;
-(void)governorDidRevokeForegroundAccess:(id)arg1 ;
-(void)_inq_handleJobFinished:(id)arg1 ;
-(id<PHAJobCoordinatorDelegate>)delegate;
-(PHAJobConstraints *)currentConstraints;
-(BOOL)activityGovernorOverride;
-(PHAWorkerJob *)currentForegroundJob;
-(PHAWorkerJob *)currentBackgroundJob;
-(PHAWorkerHealthMonitor *)healthMonitor;
-(void)graphManagerWillLoadGraph:(id)arg1 ;
-(void)shutdown;
-(BOOL)_inq_isQuiescent;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRunningJobTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_inq_handleNoMoreJobsExpected;
-(void)setWorkerTypesServicedForUserFG:(NSMutableSet *)arg1 ;
-(id)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 ;
-(void)_inq_enqueueForegroundJob:(id)arg1 ;
-(void)_inq_stopJobDueToConstraintOrActivityChange:(id)arg1 ;
-(void)setCurrentConstraints:(PHAJobConstraints *)arg1 ;
-(void)processJobs;
-(void)setNewConstraintsPending:(BOOL)arg1 ;
-(void)_inq_timeoutJob:(id)arg1 ;
-(void)governorDidGrantBackgroundAccess:(id)arg1 ;
-(void)setShouldIgnoreConstraintChanges:(BOOL)arg1 ;
-(BOOL)newConstraintsPending;
-(PHAJobConstraintsObserver *)constraintsObserver;
-(id)initWithManager:(id)arg1 ;
-(NSString *)description;
-(BOOL)graphUpdateNeeded;
-(id)_inq_runningJobs;
@end
