/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, PKPaymentTransactionView;


@protocol PKPaymentTransactionCellResponder <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) PKPaymentTransactionView * transactionView; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(PKPaymentTransactionView *)transactionView;

@end

