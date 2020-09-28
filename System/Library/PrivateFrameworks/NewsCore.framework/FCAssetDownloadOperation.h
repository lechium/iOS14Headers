/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCNetworkOperation.h>

@class NSURL, NSString, NSDictionary, FCNetworkBehaviorMonitor, NSData, NSHTTPURLResponse, NSError;

@interface FCAssetDownloadOperation : FCNetworkOperation {

	int _networkEventType;
	NSURL* _URL;
	NSString* _loggingKey;
	long long _downloadDestination;
	NSDictionary* _additionalRequestHTTPHeaders;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	/*^block*/id _fileDownloadCompletionHandler;
	/*^block*/id _dataDownloadCompletionHandler;
	NSURL* _downloadedFileURL;
	NSData* _downloadedData;
	NSString* _requestUUID;
	double _taskStartTime;
	NSDictionary* _timingData;
	NSString* _responseMIMEType;
	NSHTTPURLResponse* _httpResponse;
	unsigned long long _responseSize;
	NSError* _error;

}

@property (nonatomic,retain) NSURL * downloadedFileURL;                                      //@synthesize downloadedFileURL=_downloadedFileURL - In the implementation block
@property (nonatomic,retain) NSData * downloadedData;                                        //@synthesize downloadedData=_downloadedData - In the implementation block
@property (nonatomic,retain) NSString * requestUUID;                                         //@synthesize requestUUID=_requestUUID - In the implementation block
@property (assign,nonatomic) double taskStartTime;                                           //@synthesize taskStartTime=_taskStartTime - In the implementation block
@property (nonatomic,retain) NSDictionary * timingData;                                      //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) NSString * responseMIMEType;                                    //@synthesize responseMIMEType=_responseMIMEType - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * httpResponse;                               //@synthesize httpResponse=_httpResponse - In the implementation block
@property (assign,nonatomic) unsigned long long responseSize;                                //@synthesize responseSize=_responseSize - In the implementation block
@property (nonatomic,retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * loggingKey;                                            //@synthesize loggingKey=_loggingKey - In the implementation block
@property (assign,nonatomic) long long downloadDestination;                                  //@synthesize downloadDestination=_downloadDestination - In the implementation block
@property (assign,nonatomic) int networkEventType;                                           //@synthesize networkEventType=_networkEventType - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                      //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,retain) FCNetworkBehaviorMonitor * networkBehaviorMonitor;              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,copy) id fileDownloadCompletionHandler;                                 //@synthesize fileDownloadCompletionHandler=_fileDownloadCompletionHandler - In the implementation block
@property (nonatomic,copy) id dataDownloadCompletionHandler;                                 //@synthesize dataDownloadCompletionHandler=_dataDownloadCompletionHandler - In the implementation block
+(id)sharedURLSession;
+(id)sharedURLRequestScheduler;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(unsigned long long)responseSize;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSHTTPURLResponse *)httpResponse;
-(void)performOperation;
-(NSString *)requestUUID;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(id)throttleGroup;
-(int)networkEventType;
-(BOOL)validateOperation;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(void)resetForRetry;
-(void)setRequestUUID:(NSString *)arg1 ;
-(double)taskStartTime;
-(void)setResponseMIMEType:(NSString *)arg1 ;
-(void)setLoggingKey:(NSString *)arg1 ;
-(long long)downloadDestination;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(void)setNetworkEventType:(int)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(void)setDataDownloadCompletionHandler:(id)arg1 ;
-(void)setTaskStartTime:(double)arg1 ;
-(NSString *)loggingKey;
-(void)setNetworkBehaviorMonitor:(FCNetworkBehaviorMonitor *)arg1 ;
-(NSString *)responseMIMEType;
-(NSDictionary *)timingData;
-(NSURL *)downloadedFileURL;
-(void)setDownloadDestination:(long long)arg1 ;
-(NSURL *)URL;
-(id)dataDownloadCompletionHandler;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSData *)downloadedData;
-(id)fileDownloadCompletionHandler;
-(void)setDownloadedData:(NSData *)arg1 ;
-(void)setDownloadedFileURL:(NSURL *)arg1 ;
-(void)setFileDownloadCompletionHandler:(id)arg1 ;
@end
