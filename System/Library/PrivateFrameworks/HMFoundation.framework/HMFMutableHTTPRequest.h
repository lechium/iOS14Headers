/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFHTTPRequest.h>

@class NSData, NSDictionary;

@interface HMFMutableHTTPRequest : HMFHTTPRequest

@property (assign,nonatomic) double timeoutInterval; 
@property (nonatomic,copy) NSData * body; 
@property (nonatomic,copy) NSDictionary * headerFields; 
-(void)setBody:(NSData *)arg1 ;
-(id)responseWithStatusCode:(long long)arg1 ;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(id)initWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 timeoutInterval:(double)arg4 ;
-(id)initWithInternalRequest:(id)arg1 ;
@end

