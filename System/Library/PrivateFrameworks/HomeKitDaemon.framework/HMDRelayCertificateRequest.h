/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

@interface HMDRelayCertificateRequest : HMFObject {

	NSData* _publicKey;
	NSString* _challengeIdentifier;
	NSData* _challengeResponse;
	NSData* _challengeCertificate;

}

@property (nonatomic,copy,readonly) NSData * publicKey;                          //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * challengeIdentifier;              //@synthesize challengeIdentifier=_challengeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * challengeResponse;                  //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,copy,readonly) NSData * challengeCertificate;               //@synthesize challengeCertificate=_challengeCertificate - In the implementation block
+(id)shortDescription;
-(NSData *)publicKey;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)debugDescription;
-(id)shortDescription;
-(id)init;
-(NSData *)challengeResponse;
-(id)description;
-(NSString *)challengeIdentifier;
-(id)initWithPublicKey:(id)arg1 challengeIdentifier:(id)arg2 challengeResponse:(id)arg3 challengeCertificate:(id)arg4 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSData *)challengeCertificate;
@end
