/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKBankAccountInformation.h>

@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation
-(void)setRoutingNumber:(id)arg1 ;
-(id)init;
-(void)updateToLatestKeychainData;
-(void)deleteAllBankInformation;
-(id)_wrapperWithType:(unsigned long long)arg1 ;
-(void)deleteAllLocalBankInformation;
-(id)_bankAccountInformationInKeychain;
-(void)_writeBankAccountInformationToKeychain;
-(void)setBankName:(id)arg1 ;
-(void)setAccountNumber:(id)arg1 ;
@end

