/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRKASMCredentialStore;

@interface CRKASMCertificateVendor : NSObject {

	CRKASMCredentialStore* _credentialStore;

}

@property (nonatomic,readonly) CRKASMCredentialStore * credentialStore;              //@synthesize credentialStore=_credentialStore - In the implementation block
-(id)manifest;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CRKASMCredentialStore *)credentialStore;
-(id)certificatesForUserIdentifiers:(id)arg1 ;
-(id)certificatesForUserIdentifier:(id)arg1 ;
-(id)initWithCredentialStore:(id)arg1 ;
-(void)forgetPersistentIDs:(id)arg1 ;
@end
