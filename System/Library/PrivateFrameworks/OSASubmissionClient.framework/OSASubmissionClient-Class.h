/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OSASubmissionClient.framework/OSASubmissionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSASubmissionClient/OSASubmissionServices.h>

@protocol OSASubmissionServices;
@class NSXPCConnection, NSString;

@interface OSASubmissionClient : NSObject <OSASubmissionServices> {

	NSXPCConnection* _connection;
	id<OSASubmissionServices> _synchRemoteObjectProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)initWithErrorHandler:(/*^block*/id)arg1 ;
-(void)submitWithOptions:(id)arg1 resultsCallback:(/*^block*/id)arg2 ;
@end

