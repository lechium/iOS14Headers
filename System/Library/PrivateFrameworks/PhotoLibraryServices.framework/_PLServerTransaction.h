/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/_PLClientTransaction.h>

@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject;

@interface _PLServerTransaction : _PLClientTransaction {

	NSCountedSet* _enqueuedChangeScopes;
	NSObject*<OS_dispatch_queue> _changeScopeQueue;

}
-(void)abortTransaction;
-(id)changeScopes;
-(void)pushChangeScopesBatch;
-(void)dealloc;
-(void)completeTransaction;
-(void)_enqueueChangeScopes:(id)arg1 ;
-(BOOL)isClientTransaction;
-(id)initWithPathManager:(id)arg1 ;
-(id)generateChangeScopesDescription;
-(void)completeTransactionScope:(id)arg1 ;
-(void)addChangeScopes:(id)arg1 ;
-(void)popChangeScopesBatch;
@end
