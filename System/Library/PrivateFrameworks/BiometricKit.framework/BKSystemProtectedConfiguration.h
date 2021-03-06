/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface BKSystemProtectedConfiguration : NSObject {

	NSNumber* _biometryEnabled;
	NSNumber* _unlockEnabled;
	NSNumber* _identificationEnabled;
	NSNumber* _loginEnabled;
	NSNumber* _unlockTokenMaxLifetime;

}

@property (nonatomic,retain) NSNumber * biometryEnabled;                     //@synthesize biometryEnabled=_biometryEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * unlockEnabled;                       //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * identificationEnabled;               //@synthesize identificationEnabled=_identificationEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * loginEnabled;                        //@synthesize loginEnabled=_loginEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * unlockTokenMaxLifetime;              //@synthesize unlockTokenMaxLifetime=_unlockTokenMaxLifetime - In the implementation block
-(NSNumber *)biometryEnabled;
-(NSNumber *)loginEnabled;
-(NSNumber *)identificationEnabled;
-(void)setLoginEnabled:(NSNumber *)arg1 ;
-(void)setIdentificationEnabled:(NSNumber *)arg1 ;
-(NSNumber *)unlockTokenMaxLifetime;
-(void)setBiometryEnabled:(NSNumber *)arg1 ;
-(void)setUnlockTokenMaxLifetime:(NSNumber *)arg1 ;
-(NSNumber *)unlockEnabled;
-(void)setUnlockEnabled:(NSNumber *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)description;
@end

