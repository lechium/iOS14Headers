/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class SAMLDSAKeyValue, SAMLRSAKeyValue;

@interface SAMLSignatureKeyValue : SAMLBaseElement

@property (nonatomic,readonly) SAMLDSAKeyValue * dsaKeyValue; 
@property (nonatomic,readonly) SAMLRSAKeyValue * rsaKeyValue; 
+(id)createElement:(id*)arg1 ;
-(SAMLDSAKeyValue *)dsaKeyValue;
-(SAMLRSAKeyValue *)rsaKeyValue;
@end

