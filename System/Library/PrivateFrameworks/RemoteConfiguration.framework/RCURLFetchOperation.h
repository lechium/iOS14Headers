/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteConfiguration/RCOperation.h>

@protocol OS_dispatch_queue;
@class NSURL, NSData, NSString, NSDictionary, NSObject, NSURLSessionTask, NSHTTPURLResponse, NSError, NSNumber;

@interface RCURLFetchOperation : RCOperation {

	NSURL* _URL;
	NSData* _HTTPBody;
	NSString* _HTTPMethod;
	NSString* _loggingKey;
	NSDictionary* _additionalRequestHTTPHeaders;
	/*^block*/id _configurationCompletionHandler;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSURLSessionTask* _requestTask;
	NSString* _urlString;
	NSData* _responseData;
	NSString* _requestUUID;
	double _taskStartTime;
	NSDictionary* _timingData;
	NSString* _responseMIMEType;
	NSHTTPURLResponse* _httpResponse;
	unsigned long long _responseSize;
	NSError* _error;
	NSNumber* _maxAge;

}

@property (retain) NSURLSessionTask * requestTask;                                      //@synthesize requestTask=_requestTask - In the implementation block
@property (nonatomic,retain) NSString * urlString;                                      //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSData * responseData;                                     //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain) NSString * requestUUID;                                    //@synthesize requestUUID=_requestUUID - In the implementation block
@property (assign,nonatomic) double taskStartTime;                                      //@synthesize taskStartTime=_taskStartTime - In the implementation block
@property (nonatomic,retain) NSDictionary * timingData;                                 //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) NSString * responseMIMEType;                               //@synthesize responseMIMEType=_responseMIMEType - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * httpResponse;                          //@synthesize httpResponse=_httpResponse - In the implementation block
@property (assign,nonatomic) unsigned long long responseSize;                           //@synthesize responseSize=_responseSize - In the implementation block
@property (nonatomic,retain) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSNumber * maxAge;                                         //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSData * HTTPBody;                                         //@synthesize HTTPBody=_HTTPBody - In the implementation block
@property (nonatomic,retain) NSString * HTTPMethod;                                     //@synthesize HTTPMethod=_HTTPMethod - In the implementation block
@property (nonatomic,copy) NSString * loggingKey;                                       //@synthesize loggingKey=_loggingKey - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                 //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,copy) id configurationCompletionHandler;                           //@synthesize configurationCompletionHandler=_configurationCompletionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
+(id)sharedURLSession;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSData *)responseData;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(unsigned long long)responseSize;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSString *)urlString;
-(NSHTTPURLResponse *)httpResponse;
-(void)performOperation;
-(NSString *)requestUUID;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setRequestTask:(NSURLSessionTask *)arg1 ;
-(BOOL)validateOperation;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(void)resetForRetry;
-(void)setUrlString:(NSString *)arg1 ;
-(void)setRequestUUID:(NSString *)arg1 ;
-(double)taskStartTime;
-(void)setResponseMIMEType:(NSString *)arg1 ;
-(void)setLoggingKey:(NSString *)arg1 ;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(void)setTaskStartTime:(double)arg1 ;
-(void)setResponseData:(NSData *)arg1 ;
-(NSString *)loggingKey;
-(NSString *)responseMIMEType;
-(NSDictionary *)timingData;
-(NSURLSessionTask *)requestTask;
-(NSString *)HTTPMethod;
-(void)setConfigurationCompletionHandler:(id)arg1 ;
-(NSURL *)URL;
-(NSNumber *)maxAge;
-(void)setMaxAge:(NSNumber *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(id)configurationCompletionHandler;
-(void)setHTTPBody:(NSData *)arg1 ;
-(NSData *)HTTPBody;
-(void)setRelativePriority:(long long)arg1 ;
@end

