/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@interface AMSCardEnrollmentVerificationTask : AMSTask
+(id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1 ;
+(void)verifyPayment:(id)arg1 isDefault:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(id)performPaymentVerificationForPayment:(id)arg1 isDefault:(BOOL)arg2 ;
+(id)performPaymentVerificationForPayment:(id)arg1 isDefault:(BOOL)arg2 bag:(id)arg3 ;
+(void)verifyPayment:(id)arg1 isDefault:(BOOL)arg2 bag:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
