/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <SEService/SESEndPointAuthorizeAttestation.h>

@class NSData;

@interface SEEndPointAuthorizeResponse : NSObject <NSSecureCoding, SESEndPointAuthorizeAttestation> {

	NSData* _endPointAttestationData;
	NSData* _encryptedData;
	NSData* _encryptionPublicKeyData;

}

@property (nonatomic,retain) NSData * endPointAttestationData;              //@synthesize endPointAttestationData=_endPointAttestationData - In the implementation block
@property (nonatomic,retain) NSData * encryptedData;                        //@synthesize encryptedData=_encryptedData - In the implementation block
@property (nonatomic,retain) NSData * encryptionPublicKeyData;              //@synthesize encryptionPublicKeyData=_encryptionPublicKeyData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithEndPointAttestationData:(id)arg1 encryptionPublicKeyData:(id)arg2 encryptedData:(id)arg3 ;
-(void)setEncryptedData:(NSData *)arg1 ;
-(NSData *)encryptionPublicKeyData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)encryptedData;
-(void)setEncryptionPublicKeyData:(NSData *)arg1 ;
-(id)description;
-(void)setEndPointAttestationData:(NSData *)arg1 ;
-(NSData *)endPointAttestationData;
@end

