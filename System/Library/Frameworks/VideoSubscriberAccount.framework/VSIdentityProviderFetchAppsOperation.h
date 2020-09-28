/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, VSAuditToken, NSOperationQueue;

@interface VSIdentityProviderFetchAppsOperation : VSAsyncOperation {

	VSOptional* _identityProviderID;
	VSAuditToken* _auditToken;
	VSOptional* _result;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) VSOptional * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSOptional * identityProviderID;              //@synthesize identityProviderID=_identityProviderID - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                      //@synthesize auditToken=_auditToken - In the implementation block
-(void)cancel;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(VSOptional *)result;
-(VSAuditToken *)auditToken;
-(id)init;
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(void)setIdentityProviderID:(VSOptional *)arg1 ;
-(VSOptional *)identityProviderID;
@end
