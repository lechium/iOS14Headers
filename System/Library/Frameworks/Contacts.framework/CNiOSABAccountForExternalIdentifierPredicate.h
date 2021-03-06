/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSAccountPredicate.h>

@class NSString;

@interface CNiOSABAccountForExternalIdentifierPredicate : CNPredicate <CNiOSAccountPredicate> {

	NSString* _externalIdentifier;

}

@property (nonatomic,copy,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)externalIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CFArrayRef)cn_copyAccountsInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(id)initWithAccountExternalIdentifier:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
@end

