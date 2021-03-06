/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionTask.h>

@protocol OS_dispatch_queue;
@class NSData, NSMutableArray, CFNetworkTimer, __NSCFURLLocalStreamTaskWorkWrite, __NSCFURLLocalStreamTaskWorkRead, NSObject;

@interface __NSCFTCPIOStreamTask : NSURLSessionTask {

	/*^block*/id _disavow;
	shared_ptr<TCPIO_EstablishBase>* _establish;
	shared_ptr<TransportConnectionObjCPP>* _ios;
	unsigned char _captureStreamsUponCompletion;
	unsigned char _secure;
	NSData* __initialDataPayload;
	shared_ptr<HTTPProtocol>* _httpProtocol;
	NSMutableArray* _pendingWork;
	NSMutableArray* _completedSuspendedWork;
	BOOL _doingWorkOnThisQueue;
	int _connectionState;
	BOOL _goneSecure;
	BOOL _streamsCaptured;
	SCD_Struct_NS25 _readError;
	BOOL _readInProgress;
	BOOL _readClosed;
	SCD_Struct_NS25 _writeError;
	BOOL _writeEOF;
	BOOL _writeInProgress;
	BOOL _writeClosed;
	BOOL _receivedServerTrustChallenge;
	BOOL _receivedEof;
	CFNetworkTimer* _writeTimer;
	CFNetworkTimer* _readTimer;
	__NSCFURLLocalStreamTaskWorkWrite* _currentWriteTask;
	__NSCFURLLocalStreamTaskWorkRead* _currentReadTask;
	NSObject*<OS_dispatch_queue> _workQueueForStreamTask;

}

@property (copy) NSData * _initialDataPayload;              //@synthesize _initialDataPayload=__initialDataPayload - In the implementation block
-(id)_onqueue_errorOrCancelError;
-(void)cancel;
-(void)_onqueue_closeRead;
-(void)_onqueue_needClientCert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)closeWrite;
-(id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(void)_onqueue_suspend;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_task_onqueue_didFinish;
-(void)_onqueue_callbackCompletedWork;
-(void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_onqueue_startSecureConnection;
-(void)_onqueue_connectionEstablishedWithError:(SCD_Struct_NS25)arg1 callbackReferent:(id)arg2 ;
-(void)_onqueue_cancel;
-(void)_onqueue_processReadWork:(id)arg1 ;
-(void)_onqueue_tlsCompletion;
-(BOOL)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)workQueue;
-(void)startSecureConnection;
-(void)_onqueue_closeWrite;
-(void)_onqueue_needServerTrust:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_processWriteWork:(id)arg1 ;
-(void)_onqueue_postConnectConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_onqueue_adjustLoadingPoolPriority;
-(void)_onqueue_addBlockOp:(/*^block*/id)arg1 description:(const char*)arg2 ;
-(void)stopSecureConnection;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)closeRead;
-(void)_onqueue_ioTick;
-(BOOL)shouldDoWorkConsideringTlsState;
-(void)_onqueue_timeoutOccured;
-(void)_onSessionQueue_disavow;
-(void)_onqueue_stopSecureConnection;
-(void)_onqueue_adjustPoolPriority;
-(NSData *)_initialDataPayload;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(void)_onqueue_resume;
-(void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_onqueue_preConnectionConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_onqueue_tlsDisabled;
-(void)copyStreamProperty:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_onqueue_usingProxy;
-(void)_onqueue_addBlockOp:(/*^block*/id)arg1 description:(const char*)arg2 shouldWaitForTls:(BOOL)arg3 ;
-(void)_onqueue_cleanUpConnectionEstablishmentState;
-(id)initWithTask:(id)arg1 connection:(shared_ptr<TransportConnection>*)arg2 extraBytes:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(void)captureStreams;
-(void)_onqueue_setTransportConnection:(shared_ptr<TransportConnection>*)arg1 ;
-(void)_onqueue_captureStreams;
-(void)set_initialDataPayload:(NSData *)arg1 ;
-(void)_onqueue_checkForCompletion;
@end

