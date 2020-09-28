/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKCancelObservable.h>

@class NSMutableArray, NSString;

@interface PKAsyncOperationState : NSObject <PKCancelObservable> {

	os_unfair_lock_s _actionLock;
	NSMutableArray* _cancelActions;
	os_unfair_lock_s _lock;
	BOOL _canceled;
	BOOL _invalidated;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancel;
-(void)addCancelAction:(/*^block*/id)arg1 ;
-(void)_invalidate;
-(id)_init;
-(id)init;
-(BOOL)isCanceled;
-(void)performAction:(/*^block*/id)arg1 ;
@end
