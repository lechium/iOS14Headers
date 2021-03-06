/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NDNewsServiceClient.h>

@protocol NDNewsServiceClient;
@class NSString;

@interface NDNewsServiceConnectionClientProxy : NSObject <NDNewsServiceClient> {

	id<NDNewsServiceClient> _client;

}

@property (assign,nonatomic,__weak) id<NDNewsServiceClient> client;              //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClient:(id<NDNewsServiceClient>)arg1 ;
-(void)serviceHasNewTodayResults;
-(id<NDNewsServiceClient>)client;
@end

