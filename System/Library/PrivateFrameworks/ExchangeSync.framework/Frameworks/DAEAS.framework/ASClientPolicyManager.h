/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASPolicyManager.h>

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager {

	NSString* _powerAssertionGroupIdentifier;

}

@property (nonatomic,retain) NSString * powerAssertionGroupIdentifier;              //@synthesize powerAssertionGroupIdentifier=_powerAssertionGroupIdentifier - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)policyKeyChanged:(id)arg1 ;
-(void)policyFailedToUpdate;
-(void)requestPolicyUpdate;
-(void)setPowerAssertionGroupIdentifier:(NSString *)arg1 ;
-(NSString *)powerAssertionGroupIdentifier;
@end

