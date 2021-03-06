/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, NSArray, VSAccountStore;

@interface VSCredentialSaveOperation : VSAsyncOperation {

	VSOptional* _result;
	NSArray* _unsavedAccounts;
	VSAccountStore* _accountStore;

}

@property (nonatomic,copy) NSArray * unsavedAccounts;                    //@synthesize unsavedAccounts=_unsavedAccounts - In the implementation block
@property (nonatomic,retain) VSAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) VSOptional * result;                        //@synthesize result=_result - In the implementation block
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(VSOptional *)result;
-(VSAccountStore *)accountStore;
-(id)init;
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(NSArray *)unsavedAccounts;
-(void)_didSaveAccounts:(id)arg1 withResult:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2 ;
-(void)setUnsavedAccounts:(NSArray *)arg1 ;
@end

