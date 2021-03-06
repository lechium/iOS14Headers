/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDProtectedDataReconciliationHookResponder.h>
#import <libobjc.A.dylib/EDDatabaseChangeHookResponder.h>

@protocol EFScheduler, EDReconciliationQueryProvider, MFAccountsProvider;
@class EDPersistenceHookRegistry, MFLibraryMessageReconciler, MFLibraryThreadReconciler, NSString;

@interface MFLibraryReconciler : NSObject <EDProtectedDataReconciliationHookResponder, EDDatabaseChangeHookResponder> {

	EDPersistenceHookRegistry* _hookRegistry;
	id<EFScheduler> _reconciliationCleanupScheduler;
	id<EDReconciliationQueryProvider> _queryProvider;
	id<MFAccountsProvider> _accountsProvider;
	MFLibraryMessageReconciler* _messageReconciler;
	MFLibraryThreadReconciler* _threadReconciler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)persistenceDidReconcileProtectedData;
-(id)initWithLibrary:(id)arg1 queryProvider:(id)arg2 accountsProvider:(id)arg3 ;
@end

