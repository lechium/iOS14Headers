/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableNumberAttributeMetadata.h>

@class NSString, NSArray;

@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata {

	NSString* _currencyCode;
	NSArray* _currencyCodes;

}

@property (nonatomic,copy) NSString * currencyCode;                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) NSArray * currencyCodes;              //@synthesize currencyCodes=_currencyCodes - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)currencyCode;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSArray *)currencyCodes;
-(id)__INCodableDescriptionCurrencyCodeKey;
-(id)__INCodableDescriptionCurrencyCodesKey;
-(id)__INTypeCodableDescriptionCurrencyCodesKey;
-(id)__INIntentResponseCodableDescriptionCurrencyCodeKey;
-(id)__INTypeCodableDescriptionCurrencyCodeKey;
-(id)__INIntentResponseCodableDescriptionCurrencyCodesKey;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

