/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioTermsCheckRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	unsigned long long _acceptedTermsVersion;

}

@property (assign,nonatomic) unsigned long long acceptedTermsVersion;              //@synthesize acceptedTermsVersion=_acceptedTermsVersion - In the implementation block
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)acceptedTermsVersion;
-(void)setAcceptedTermsVersion:(unsigned long long)arg1 ;
@end
