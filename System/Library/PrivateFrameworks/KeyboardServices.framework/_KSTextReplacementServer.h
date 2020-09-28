/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/_KSTextReplacementSyncProtocol.h>
#import <libobjc.A.dylib/_KSTextReplacementStoreProtocol.h>
#import <libobjc.A.dylib/_KSTextReplacementCancellation.h>

@protocol OS_dispatch_queue;
@class NSObject, _KSTRClient, _KSTextReplacementManager, APSConnection, NSXPCListener, NSString;

@interface _KSTextReplacementServer : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, _KSTextReplacementSyncProtocol, _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation> {

	NSObject*<OS_dispatch_queue> _workQueue;
	_KSTRClient* _daemonClient;
	_KSTextReplacementManager* _textReplacementManager;
	APSConnection* _pushConnection;
	NSXPCListener* _listener;
	NSString* _directoryPath;

}

@property (nonatomic,retain) APSConnection * pushConnection;                                  //@synthesize pushConnection=_pushConnection - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) _KSTextReplacementManager * textReplacementManager;              //@synthesize textReplacementManager=_textReplacementManager - In the implementation block
@property (nonatomic,copy) NSString * directoryPath;                                          //@synthesize directoryPath=_directoryPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textReplacementServer;
+(BOOL)isBlackListed:(unsigned)arg1 ;
-(NSString *)directoryPath;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)cleanup;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(_KSTextReplacementManager *)textReplacementManager;
-(void)registerForPushNotifications;
-(id)textReplacementEntries;
-(void)cancelPendingUpdates;
-(void)scheduleSyncTask;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1 ;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(APSConnection *)pushConnection;
-(void)removeAllEntries;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)dealloc;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(void)start;
-(id)textReplacementEntriesForClient:(id)arg1 ;
-(id)init;
-(void)runMigration;
-(void)requestSync:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)reachabilityDidChange:(id)arg1 ;
-(id)initWithDatabaseDirectoryPath:(id)arg1 ;
-(BOOL)_cancelPendingUpdateForClient:(id)arg1 ;
-(void)setTextReplacementManager:(_KSTextReplacementManager *)arg1 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)shutdown;
-(void)buddySetupDidFinish;
-(NSXPCListener *)listener;
-(BOOL)isSetupAssistantRunning;
-(void)_performCleanup;
@end
