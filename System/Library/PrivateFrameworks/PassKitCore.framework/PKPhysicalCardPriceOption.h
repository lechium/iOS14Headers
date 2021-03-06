/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKCurrencyAmount;

@interface PKPhysicalCardPriceOption : NSObject <NSSecureCoding> {

	unsigned long long _reason;
	PKCurrencyAmount* _amount;

}

@property (assign,nonatomic) unsigned long long reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * amount;              //@synthesize amount=_amount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)jsonDictionaryRepresentation;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(PKCurrencyAmount *)amount;
-(unsigned long long)reason;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
@end

