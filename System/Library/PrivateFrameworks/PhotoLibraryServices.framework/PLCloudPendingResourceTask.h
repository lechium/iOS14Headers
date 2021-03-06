/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLResourceTransferTask, NSDate, NSMutableDictionary;

@interface PLCloudPendingResourceTask : NSObject {

	CPLResourceTransferTask* _transferTask;
	NSDate* _lastUpdated;
	BOOL _completed;
	BOOL _transferTaskRemoved;
	NSMutableDictionary* _taskIdentifierToProgressBlock;
	NSMutableDictionary* _taskIdentifierToCompletionHandler;

}
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(void)reportProgress:(float)arg1 ;
-(id)taskIDs;
-(void)reportCompletionWithError:(id)arg1 ;
-(void)setTransferTask:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forTaskIdentifier:(id)arg3 ;
-(void)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withTaskIdentifier:(id)arg3 ;
-(id)lastUpdated;
-(void)keepAlive;
@end

