/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRITaskPersisting
@required
-(id)tasks;
-(BOOL)enumerateTasksWithTagsIntersectingTagSet:(id)arg1 block:(/*^block*/id)arg2;
-(id)idForTask:(id)arg1;
-(id)addTask:(id)arg1 startTime:(id)arg2 tags:(id)arg3 dependencies:(id)arg4 error:(id*)arg5;
-(BOOL)removeTaskWithId:(id)arg1 cleanupBlock:(/*^block*/id)arg2;
-(BOOL)updateTaskWithTaskId:(id)arg1 startDate:(id)arg2 task:(id)arg3;
-(id)taskIdsWithTag:(id)arg1;
-(id)directDependenciesOfTaskWithId:(id)arg1;
-(id)tasksDependentOnTask:(id)arg1;

@end
