/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, NSDictionary, PKPaymentSetupProduct;

@interface PKPaymentContactlessProductCredential : PKPaymentCredential {

	NSString* _productIdentifier;
	NSDictionary* _readerModeMetadata;
	NSString* _cardSessionToken;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                   //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * readerModeMetadata;              //@synthesize readerModeMetadata=_readerModeMetadata - In the implementation block
@property (nonatomic,copy) NSString * cardSessionToken;                    //@synthesize cardSessionToken=_cardSessionToken - In the implementation block
-(void)setRequirementsResponse:(id)arg1 ;
-(PKPaymentSetupProduct *)product;
-(id)initWithPaymentSetupProduct:(id)arg1 ;
-(void)setReaderModeMetadata:(NSDictionary *)arg1 ;
-(long long)_cardTypeFromSetupProductType:(unsigned long long)arg1 ;
-(id)initWithPaymentSetupProduct:(id)arg1 cardSessionToken:(id)arg2 ;
-(NSString *)cardSessionToken;
-(void)setCardSessionToken:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(id)init;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(NSDictionary *)readerModeMetadata;
-(void)setProductIdentifier:(NSString *)arg1 ;
@end
