/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVDelegateStorage.h>

@protocol OS_dispatch_queue;
@class NSObject, AVWeakReference, NSString;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage> {

	NSObject*<OS_dispatch_queue> _delegateReadWriteQueue;
	OpaqueConcurrentAccessDetectorRef _detectorForWeakReferenceToDelegate;
	AVWeakReference* _weakReferenceToDelegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) id delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)_delegate;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)delegate;
-(void)getRetainedDelegate:(id*)arg1 retainedDelegateQueue:(id*)arg2 ;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 synchronouslyIfDelegateQueueIsQueue:(id)arg2 ;
-(void)_collectUncollectables;
-(void)_setDelegateViaWeakReference:(id)arg1 ;
@end
