/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKAppletSubcredential, NSSet, NSString, PKAppletSubcredentialEntitlement;

@interface PKSharedCredentialGroup : NSObject <NSSecureCoding> {

	BOOL _localGroup;
	PKAppletSubcredential* _credential;
	NSSet* _sharedCredentials;
	NSSet* _receipts;
	NSString* _recipientHandle;
	NSString* _recipientName;
	PKAppletSubcredentialEntitlement* _entitlement;
	long long _state;

}

@property (nonatomic,readonly) PKAppletSubcredential * credential;                          //@synthesize credential=_credential - In the implementation block
@property (nonatomic,readonly) NSSet * sharedCredentials;                                   //@synthesize sharedCredentials=_sharedCredentials - In the implementation block
@property (nonatomic,readonly) NSSet * receipts;                                            //@synthesize receipts=_receipts - In the implementation block
@property (nonatomic,readonly) NSString * recipientHandle;                                  //@synthesize recipientHandle=_recipientHandle - In the implementation block
@property (nonatomic,readonly) NSString * recipientName;                                    //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialEntitlement * entitlement;              //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,readonly) long long state;                                             //@synthesize state=_state - In the implementation block
@property (getter=isLocalGroup,nonatomic,readonly) BOOL localGroup;                         //@synthesize localGroup=_localGroup - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKAppletSubcredential *)credential;
-(NSString *)recipientHandle;
-(NSSet *)sharedCredentials;
-(BOOL)isLocalGroup;
-(NSSet *)receipts;
-(void)parseGroupItems;
-(id)initWithCredential:(id)arg1 sharedCredentials:(id)arg2 receipts:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(NSString *)recipientName;
-(long long)state;
@end
