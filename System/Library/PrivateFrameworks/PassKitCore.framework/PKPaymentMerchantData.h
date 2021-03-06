/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPaymentMerchantSession, NSString, NSData;

@interface PKPaymentMerchantData : NSObject {

	PKPaymentMerchantSession* _merchantSession;
	NSString* _merchantIdentifier;
	NSData* _applicationData;

}

@property (nonatomic,readonly) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * applicationData;                   //@synthesize applicationData=_applicationData - In the implementation block
-(id)encode;
-(id)initWithMerchantIdentifier:(id)arg1 applicationData:(id)arg2 ;
-(id)init;
-(NSData *)applicationData;
-(id)initWithPaymentRequest:(id)arg1 ;
-(NSString *)merchantIdentifier;
@end

