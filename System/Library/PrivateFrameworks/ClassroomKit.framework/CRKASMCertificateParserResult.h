/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface CRKASMCertificateParserResult : NSObject {

	NSString* _userIdentifier;
	NSError* _validationError;

}

@property (nonatomic,readonly) NSError * validationError;                   //@synthesize validationError=_validationError - In the implementation block
@property (nonatomic,copy,readonly) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
+(BOOL)certificate:(id)arg1 hasCommonNameWithPrefix:(id)arg2 ;
+(id)resultForCertificate:(id)arg1 expectedCommonNamePrefix:(id)arg2 expectedUserIdentifier:(id)arg3 ;
-(NSString *)userIdentifier;
-(id)initWithUserIdentifier:(id)arg1 validationError:(id)arg2 ;
-(NSError *)validationError;
-(BOOL)isCertificateValidWithError:(id*)arg1 ;
@end
