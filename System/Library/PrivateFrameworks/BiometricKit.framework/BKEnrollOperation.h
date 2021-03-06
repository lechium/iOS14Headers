/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BKOperation.h>

@class NSData;

@interface BKEnrollOperation : BKOperation {

	unsigned _userID;
	NSData* _credentialSet;

}

@property (assign,nonatomic,__weak) id<BKEnrollOperationDelegate> delegate; 
@property (assign,nonatomic) unsigned userID;                                            //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSData * credentialSet;                                       //@synthesize credentialSet=_credentialSet - In the implementation block
-(void)setUserID:(unsigned)arg1 ;
-(unsigned)userID;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(void)setCredentialSet:(NSData *)arg1 ;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2 ;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2 ;
-(void)startBioOperation:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)optionsDictionaryWithError:(id*)arg1 ;
-(NSData *)credentialSet;
@end

