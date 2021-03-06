/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDecimalNumber, NSString, NSArray, NSDictionary;

@interface PKPaymentInstallmentConfiguration : NSObject <NSSecureCoding> {

	BOOL _inStorePurchase;
	long long _feature;
	NSData* _merchandisingImageData;
	NSDecimalNumber* _openToBuyThresholdAmount;
	NSDecimalNumber* _bindingTotalAmount;
	NSString* _currencyCode;
	NSString* _installmentMerchantIdentifier;
	NSString* _referrerIdentifier;
	NSArray* _installmentItems;
	NSDictionary* _applicationMetadata;
	long long _retailChannel;

}

@property (assign,nonatomic) long long feature;                                          //@synthesize feature=_feature - In the implementation block
@property (nonatomic,copy) NSData * merchandisingImageData;                              //@synthesize merchandisingImageData=_merchandisingImageData - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * openToBuyThresholdAmount;                 //@synthesize openToBuyThresholdAmount=_openToBuyThresholdAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * bindingTotalAmount;                       //@synthesize bindingTotalAmount=_bindingTotalAmount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                      //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,getter=isInStorePurchase,nonatomic) BOOL inStorePurchase;              //@synthesize inStorePurchase=_inStorePurchase - In the implementation block
@property (nonatomic,copy) NSString * installmentMerchantIdentifier;                     //@synthesize installmentMerchantIdentifier=_installmentMerchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * referrerIdentifier;                                //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * installmentItems;                                   //@synthesize installmentItems=_installmentItems - In the implementation block
@property (nonatomic,copy) NSDictionary * applicationMetadata;                           //@synthesize applicationMetadata=_applicationMetadata - In the implementation block
@property (assign,nonatomic) long long retailChannel;                                    //@synthesize retailChannel=_retailChannel - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)currencyCode;
-(NSString *)referrerIdentifier;
-(void)setApplicationMetadata:(NSDictionary *)arg1 ;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)applicationMetadata;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)feature;
-(unsigned long long)hash;
-(long long)retailChannel;
-(void)setFeature:(long long)arg1 ;
-(BOOL)isEqualToInstallmentConfiguration:(id)arg1 ;
-(NSData *)merchandisingImageData;
-(void)setMerchandisingImageData:(NSData *)arg1 ;
-(void)setOpenToBuyThresholdAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)bindingTotalAmount;
-(BOOL)isInStorePurchase;
-(void)setBindingTotalAmount:(NSDecimalNumber *)arg1 ;
-(void)setInStorePurchase:(BOOL)arg1 ;
-(NSString *)installmentMerchantIdentifier;
-(void)setInstallmentMerchantIdentifier:(NSString *)arg1 ;
-(void)setInstallmentItems:(NSArray *)arg1 ;
-(void)setRetailChannel:(long long)arg1 ;
-(NSDecimalNumber *)openToBuyThresholdAmount;
-(NSArray *)installmentItems;
-(void)encodeToBodyDictionary:(id)arg1 ;
@end

