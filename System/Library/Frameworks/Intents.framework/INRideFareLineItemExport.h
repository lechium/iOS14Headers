/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDecimalNumber;


@protocol INRideFareLineItemExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDecimalNumber * price; 
@property (nonatomic,copy) NSString * currencyCode; 
@required
-(NSString *)currencyCode;
-(NSDecimalNumber *)price;
-(NSString *)title;
-(id)init;
-(void)setPrice:(id)arg1;
-(void)setCurrencyCode:(id)arg1;
-(void)setTitle:(id)arg1;

@end

