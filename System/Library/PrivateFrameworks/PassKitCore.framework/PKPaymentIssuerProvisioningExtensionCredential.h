/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSExtension, PKIssuerProvisioningExtensionPaymentPassEntry, NSArray;

@interface PKPaymentIssuerProvisioningExtensionCredential : PKPaymentCredential {

	NSExtension* _extension;
	PKIssuerProvisioningExtensionPaymentPassEntry* _entry;

}

@property (nonatomic,readonly) NSExtension * extension;                                            //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) PKIssuerProvisioningExtensionPaymentPassEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata; 
-(NSExtension *)extension;
-(id)initWithExtension:(id)arg1 entry:(id)arg2 ;
-(NSArray *)metadata;
-(PKIssuerProvisioningExtensionPaymentPassEntry *)entry;
@end

