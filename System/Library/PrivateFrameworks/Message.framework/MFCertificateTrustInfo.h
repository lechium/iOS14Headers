/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class ECSecureMIMETrustEvaluation, NSString;

@interface MFCertificateTrustInfo : NSObject {

	SecTrustRef _unevaluatedTrust;
	ECSecureMIMETrustEvaluation* _trustEvaluation;
	NSString* _uncommentedSender;
	unsigned long long _certificateType;
	NSString* _sender;

}

@property (nonatomic,readonly) unsigned long long certificateType;                         //@synthesize certificateType=_certificateType - In the implementation block
@property (nonatomic,copy,readonly) NSString * sender;                                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) ECSecureMIMETrustEvaluation * trustEvaluation; 
@property (nonatomic,readonly) SecTrustRef trust; 
-(NSString *)sender;
-(SecTrustRef)trust;
-(void)dealloc;
-(id)initWithCertificateType:(unsigned long long)arg1 trust:(SecTrustRef)arg2 sender:(id)arg3 ;
-(unsigned long long)certificateType;
-(ECSecureMIMETrustEvaluation *)trustEvaluation;
@end

