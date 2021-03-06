/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSDictionary, NSURL, NSObject, NSURLSession, NSString;

@interface HMDServerBag : HMFObject <NSURLSessionDelegate> {

	id<HMFLocking> _lock;
	BOOL _refreshing;
	NSDictionary* _dictionaryRepresentation;
	unsigned long long _environment;
	NSURL* _url;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSURLSession* _urlSession;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                               //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSURLSession * urlSession;                                            //@synthesize urlSession=_urlSession - In the implementation block
@property (assign,nonatomic) BOOL refreshing;                                                        //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,copy) NSDictionary * dictionaryRepresentation;                                  //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
@property (nonatomic,readonly) unsigned long long environment;                                       //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSURL * activationHostnameURL; 
@property (nonatomic,copy,readonly) NSURL * activationCertificateHostnameURL; 
@property (nonatomic,copy,readonly) NSURL * accessoryReportURL; 
@property (nonatomic,readonly) double accessoryReportTimeout; 
@property (getter=isControlCenterEnabled,nonatomic,readonly) BOOL controlCenterEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)serverBagURLForEnvironment:(unsigned long long)arg1 ;
+(id)activationHostnameURLOverride;
+(id)activationCertificateHostnameURLOverride;
+(id)defaultServerBag;
-(id)initWithEnvironment:(unsigned long long)arg1 ;
-(NSURLSession *)urlSession;
-(NSString *)debugDescription;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setDictionaryRepresentation:(NSDictionary *)arg1 ;
-(id)init;
-(BOOL)refreshing;
-(unsigned long long)environment;
-(void)setRefreshing:(BOOL)arg1 ;
-(NSURL *)url;
-(NSString *)description;
-(NSDictionary *)dictionaryRepresentation;
-(void)_loadDefaultBag;
-(void)_synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleServerBagResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSURL *)activationHostnameURL;
-(NSURL *)activationCertificateHostnameURL;
-(NSURL *)accessoryReportURL;
-(double)accessoryReportTimeout;
-(BOOL)isControlCenterEnabled;
@end

