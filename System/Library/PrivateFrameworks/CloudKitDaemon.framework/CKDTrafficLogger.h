/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKDTrafficLogger : NSObject {

	long long _sequenceNumber;
	NSString* _requestID;

}

@property (assign,nonatomic) long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) NSString * requestID;                  //@synthesize requestID=_requestID - In the implementation block
-(void)setRequestID:(NSString *)arg1 ;
-(NSString *)requestID;
-(void)logRequest:(id)arg1 toURL:(id)arg2 withMethod:(id)arg3 withMessageClassString:(id)arg4 parsingStandaloneMessage:(BOOL)arg5 ;
-(void)_logObject:(id)arg1 ofType:(unsigned long long)arg2 ;
-(void)logResponseConfiguration:(unsigned long long)arg1 withMessageClassString:(id)arg2 ;
-(long long)sequenceNumber;
-(void)logPartialRequestObjectData:(id)arg1 ;
-(void)setSequenceNumber:(long long)arg1 ;
-(void)logRequestBodyStreamReset;
-(BOOL)shouldLog;
-(void)logPartialResponseObjectData:(id)arg1 ;
-(void)finishRequestLog;
-(void)logResponse:(id)arg1 ;
-(id)initWithRequestID:(id)arg1 ;
@end

