/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSError;

@interface SSVCloudServiceAPITokenResponse : NSObject <SSXPCCoding> {

	NSString* _apiToken;
	NSError* _error;

}

@property (nonatomic,copy) NSString * apiToken;                     //@synthesize apiToken=_apiToken - In the implementation block
@property (nonatomic,copy) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)apiToken;
-(id)initWithToken:(id)arg1 error:(id)arg2 ;
-(void)setApiToken:(NSString *)arg1 ;
@end

