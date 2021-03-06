/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INCurrencyAmount, NSString;

@interface INPaymentAmount : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INCurrencyAmount* _amount;
	long long _amountType;

}

@property (nonatomic,copy,readonly) INCurrencyAmount * amount;              //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) long long amountType;                        //@synthesize amountType=_amountType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)amountType;
-(id)initWithAmountType:(long long)arg1 amount:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(INCurrencyAmount *)amount;
-(unsigned long long)hash;
-(NSString *)description;
@end

