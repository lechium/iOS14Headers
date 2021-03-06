/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:36 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandQueueSPI.h>

@class MTLToolsPerfCounterMailbox, NSString;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {

	MTLToolsPerfCounterMailbox* _perfSampleMailbox;
	os_unfair_lock_s _perfHandlerLock;
	/*^block*/id _perfSampleHandlerBlock;

}

@property (assign) int backgroundTrackingPID; 
@property (readonly) unsigned long long maxCommandBufferCount; 
@property (readonly) unsigned long long qosLevel; 
@property (readonly) NSObject*<OS_dispatch_queue> commitQueue; 
@property (readonly) BOOL commitSynchronously; 
@property (readonly) NSObject*<OS_dispatch_queue> completionQueue; 
@property (readonly) BOOL disableCrossQueueHazardTracking; 
@property (assign) BOOL skipRender; 
@property (assign) BOOL executionEnabled; 
@property (readonly) BOOL isOpenGLQueue; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) BOOL StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStatEnabled:(BOOL)arg1 ;
-(BOOL)isStatEnabled;
-(BOOL)skipRender;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(BOOL)isProfilingEnabled;
-(id)subdivideCounterList:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setStatOptions:(unsigned long long)arg1 ;
-(id)commandBuffer;
-(void)insertDebugCaptureBoundary;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(void)finish;
-(id)availableCounters;
-(BOOL)isOpenGLQueue;
-(void)dealloc;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)getBackgroundGPUPriority;
-(unsigned long long)maxCommandBufferCount;
-(void)addPerfSampleHandler:(/*^block*/id)arg1 ;
-(BOOL)commitSynchronously;
-(unsigned long long)getStatLocations;
-(BOOL)disableCrossQueueHazardTracking;
-(void)setSkipRender:(BOOL)arg1 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(unsigned long long)getStatOptions;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)commitQueue;
-(void)setExecutionEnabled:(BOOL)arg1 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(BOOL)executionEnabled;
-(id)getSPIStats;
-(unsigned long long)qosLevel;
-(int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(void)setSubmissionQueue:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(int)backgroundTrackingPID;
-(id)getRequestedCounters;
-(id)commandBufferWithUnretainedReferences;
-(NSString *)label;
-(id)counterInfo;
-(unsigned long long)getGPUPriority;
-(int)requestCounters:(id)arg1 ;
-(void)setStatLocations:(unsigned long long)arg1 ;
-(id)commandBufferWithDescriptor:(id)arg1 ;
-(void)setBackgroundTrackingPID:(int)arg1 ;
-(/*^block*/id)snapshotPerfSampleHandlerAndStatEnabled:(BOOL*)arg1 forCommandBuffer:(id)arg2 ;
@end

