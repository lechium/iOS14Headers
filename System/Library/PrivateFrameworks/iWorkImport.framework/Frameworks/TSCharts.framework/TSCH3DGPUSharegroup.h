/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DSharegroup.h>

@class TSCH3DContext, NSRecursiveLock;

@interface TSCH3DGPUSharegroup : TSCH3DSharegroup {

	TSCH3DContext* mGPUContext;
	long long mLockLevel;
	NSRecursiveLock* mLock;

}
+(id)sharegroupForToken:(id)arg1 ;
+(BOOL)hasInterestForSharegroupToken:(id)arg1 ;
+(void)addInterestForSharegroupTokens:(id)arg1 ;
+(void)removeInterestForSharegroupTokens:(id)arg1 ;
+(void)flushSharegroupForToken:(id)arg1 ;
+(void)deleteSharegroupForToken:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(id)description;
-(id)GPUContext;
-(void)garbageCollectAllUnretainedResources;
-(void)garbageCollectResources:(id)arg1 ;
-(id)initWithOwningThread:(id)arg1 token:(id)arg2 ;
-(void)p_owningThreadWillChange;
-(void)p_flushCache;
-(void)p_flushPurgeableResourceSet;
-(void)p_forceFlushResourceSet:(id)arg1 ;
-(id)targetThreadForFlushing;
-(BOOL)debug_isInteractive;
-(id)initWithOwningThread:(id)arg1 token:(id)arg2 context:(id)arg3 ;
-(void)p_clearContextInCurrentThread;
-(void)updateSharegroupMapToken:(id)arg1 ;
@end
