/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/NEExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionProviderHostProtocol.h>

@protocol NEExtensionProviderHostProtocol, OS_os_transaction;
@class NSString, NEConfiguration, NSXPCConnection, NEProvider, NSObject;

@interface NEExtensionProviderContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {

	id<NEExtensionProviderHostProtocol> _hostContext;
	NSString* _description;
	BOOL _isDisposed;
	BOOL _started;
	NEConfiguration* _configuration;
	/*^block*/id _stopCompletionHandler;
	NSXPCConnection* _hostConnection;
	NEProvider* _provider;
	NSObject*<OS_os_transaction> _transaction;

}

@property (copy) id stopCompletionHandler;                                          //@synthesize stopCompletionHandler=_stopCompletionHandler - In the implementation block
@property (readonly) NSXPCConnection * hostConnection;                              //@synthesize hostConnection=_hostConnection - In the implementation block
@property (assign,nonatomic) BOOL isDisposed;                                       //@synthesize isDisposed=_isDisposed - In the implementation block
@property (nonatomic,readonly) NEProvider * provider;                               //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (retain) NEConfiguration * configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSString * extensionPoint; 
@property (assign,nonatomic) BOOL started;                                          //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) Class requiredProviderSuperClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)wake;
-(void)dispose;
-(void)setStarted:(BOOL)arg1 ;
-(NSString *)extensionPoint;
-(void)cancelWithError:(id)arg1 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)started;
-(void)dealloc;
-(NSObject*<OS_os_transaction>)transaction;
-(NEProvider *)provider;
-(void)stopWithReason:(int)arg1 ;
-(void)createWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 ;
-(void)validateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)startedWithError:(id)arg1 ;
-(void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)hostContext;
-(long long)neStopReasonToProviderStopReason:(int)arg1 ;
-(Class)requiredProviderSuperClass;
-(void)completeSession;
-(id)_principalObject;
-(BOOL)isDisposed;
-(NSXPCConnection *)hostConnection;
-(void)setIsDisposed:(BOOL)arg1 ;
-(void)dropProvider;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)stopCompletionHandler;
-(NEConfiguration *)configuration;
-(void)setStopCompletionHandler:(id)arg1 ;
-(id)initWithProvider:(id)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(NSString *)description;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
@end

