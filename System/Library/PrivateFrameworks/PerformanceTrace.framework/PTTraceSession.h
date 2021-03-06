/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:56 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PerformanceTrace.framework/PerformanceTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PTTraceSessionDelegate;
@class PTTraceConfig, NSXPCConnection;

@interface PTTraceSession : NSObject {

	BOOL _isValid;
	PTTraceConfig* _config;
	id<PTTraceSessionDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) PTTraceConfig * config;                           //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) id<PTTraceSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isValid;                                   //@synthesize isValid=_isValid - In the implementation block
+(id)initWithConfig:(id)arg1 ;
-(NSXPCConnection *)connection;
-(PTTraceConfig *)config;
-(id)init;
-(void)setConfig:(PTTraceConfig *)arg1 ;
-(void)_ping:(id)arg1 ;
-(void)setDelegate:(id<PTTraceSessionDelegate>)arg1 ;
-(id<PTTraceSessionDelegate>)delegate;
-(BOOL)isValid;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_invalidateSession;
-(void)_initConnection;
-(id)_getRemoteObjectProxy;
-(void)stopPerformanceTrace;
-(void)performanceTraceDidStart:(id)arg1 ;
-(void)performanceTraceDidStop:(id)arg1 ;
-(void)performanceTraceDidComplete:(id)arg1 withToken:(id)arg2 withError:(id)arg3 ;
-(void)_didPingService:(id)arg1 ;
-(void)startPerformanceTrace;
@end

