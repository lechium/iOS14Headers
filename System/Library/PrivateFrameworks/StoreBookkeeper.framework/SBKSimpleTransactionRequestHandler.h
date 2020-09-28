/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKRequestHandler.h>

@class SBKTransactionController;

@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler {

	BOOL _canceled;
	SBKTransactionController* _transactionController;

}

@property (nonatomic,readonly) SBKTransactionController * transactionController;              //@synthesize transactionController=_transactionController - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                                                 //@synthesize canceled=_canceled - In the implementation block
-(void)cancel;
-(BOOL)canceled;
-(void)timeout;
-(void)cancelWithError:(id)arg1 ;
-(id)initWithBagContext:(id)arg1 ;
-(SBKTransactionController *)transactionController;
-(void)scheduleTransaction:(id)arg1 finishedBlock:(/*^block*/id)arg2 ;
@end
