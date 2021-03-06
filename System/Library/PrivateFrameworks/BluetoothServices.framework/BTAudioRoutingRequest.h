/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, NSObject, NSXPCListenerEndpoint;

@interface BTAudioRoutingRequest : NSObject <NSSecureCoding> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	int _audioScore;
	unsigned _flags;
	unsigned _clientID;
	NSString* _deviceAddress;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _responseHandler;
	NSXPCListenerEndpoint* _testListenerEndpoint;

}

@property (assign,nonatomic) unsigned clientID;                                         //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (assign,nonatomic) int audioScore;                                            //@synthesize audioScore=_audioScore - In the implementation block
@property (nonatomic,copy) NSString * deviceAddress;                                    //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id responseHandler;                                          //@synthesize responseHandler=_responseHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(unsigned)clientID;
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)invalidate;
-(void)_ensureXPCStarted;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(id)responseHandler;
-(void)_invalidated;
-(void)setResponseHandler:(id)arg1 ;
-(void)_reportError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setClientID:(unsigned)arg1 ;
-(id)init;
-(void)_interrupted;
-(NSString *)deviceAddress;
-(void)setDeviceAddress:(NSString *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAudioScore:(int)arg1 ;
-(void)activate;
-(id)description;
-(void)_activate;
-(int)audioScore;
@end

