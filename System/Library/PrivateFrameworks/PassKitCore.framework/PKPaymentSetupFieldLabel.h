/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField {

	NSString* _buttonTitle;
	NSString* _detailTitle;
	NSString* _detailSubtitle;
	NSString* _detailBody;
	NSString* _businessChatButtonTitle;
	NSString* _businessChatIdentifier;
	NSString* _businessChatIntentName;
	unsigned long long _alingment;

}

@property (nonatomic,copy) NSString * buttonTitle;                          //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) NSString * detailTitle;                          //@synthesize detailTitle=_detailTitle - In the implementation block
@property (nonatomic,copy) NSString * detailSubtitle;                       //@synthesize detailSubtitle=_detailSubtitle - In the implementation block
@property (nonatomic,copy) NSString * detailBody;                           //@synthesize detailBody=_detailBody - In the implementation block
@property (nonatomic,copy) NSString * businessChatButtonTitle;              //@synthesize businessChatButtonTitle=_businessChatButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * businessChatIdentifier;               //@synthesize businessChatIdentifier=_businessChatIdentifier - In the implementation block
@property (nonatomic,copy) NSString * businessChatIntentName;               //@synthesize businessChatIntentName=_businessChatIntentName - In the implementation block
@property (assign,nonatomic) unsigned long long alingment;                  //@synthesize alingment=_alingment - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
-(void)setCurrentValue:(id)arg1 ;
-(unsigned long long)fieldType;
-(NSString *)title;
-(NSString *)buttonTitle;
-(unsigned long long)alingment;
-(void)updateWithAttribute:(id)arg1 ;
-(id)submissionString;
-(BOOL)submissionStringMeetsAllRequirements;
-(void)_commonUpdate;
-(void)setDetailTitle:(NSString *)arg1 ;
-(void)setDetailSubtitle:(NSString *)arg1 ;
-(void)setDetailBody:(NSString *)arg1 ;
-(void)setBusinessChatIdentifier:(NSString *)arg1 ;
-(void)setAlingment:(unsigned long long)arg1 ;
-(NSString *)detailTitle;
-(void)setBusinessChatButtonTitle:(NSString *)arg1 ;
-(void)setBusinessChatIntentName:(NSString *)arg1 ;
-(NSString *)detailSubtitle;
-(NSString *)detailBody;
-(NSString *)businessChatButtonTitle;
-(NSString *)businessChatIdentifier;
-(NSString *)businessChatIntentName;
-(id)displayString;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)updateWithConfiguration:(id)arg1 ;
@end
