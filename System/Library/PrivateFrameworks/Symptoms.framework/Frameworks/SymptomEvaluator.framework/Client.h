/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableSet;

@interface Client : NSObject {

	long long _activeMessageCount;
	long long _barrierMessageCount;
	long long _droppedMessageCount;
	BOOL _shouldSendMessages;
	BOOL _forceUpdateOnWake;
	NSXPCConnection* _connection;
	NSMutableSet* _subscribedNOIs;

}

@property (nonatomic,retain) NSXPCConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableSet * subscribedNOIs;              //@synthesize subscribedNOIs=_subscribedNOIs - In the implementation block
-(void)_incrementMessageCounter:(long long)arg1 ;
-(NSXPCConnection *)connection;
-(void)_sendBarrierIfNecessaryWithBlock:(/*^block*/id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSMutableSet *)subscribedNOIs;
-(void)_decrementMessageCounter:(long long)arg1 ;
-(BOOL)_shouldSendMessages;
-(void)setSubscribedNOIs:(NSMutableSet *)arg1 ;
-(id)initWithConn:(id)arg1 ;
-(id)description;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end
