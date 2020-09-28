/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PETAggregateStateStorage : NSObject
+(id)storageInMemory;
+(id)storageOnDisk:(id)arg1 ;
-(void)saveCorruptState;
-(void)runWithLock:(/*^block*/id)arg1 ;
-(BOOL)resetLocked;
-(void)expand:(unsigned long long)arg1 andRunWithLock:(/*^block*/id)arg2 ;
-(void)reset;
@end
