/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BKDevice.h>

@interface BKDevicePearl : BKDevice

@property (assign,nonatomic,__weak) id<BKDevicePearlDelegate> delegate; 
@property (nonatomic,readonly) long long pearlState; 
+(BOOL)deviceAvailableWithError:(id*)arg1 ;
-(id)createPresenceDetectOperationWithError:(id*)arg1 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(id)createMatchOperationWithError:(id*)arg1 ;
-(id)createEnrollOperationWithError:(id*)arg1 ;
-(long long)deviceStateWithStatus:(unsigned)arg1 ;
-(long long)deviceEventWithStatus:(unsigned)arg1 ;
-(long long)pearlState;
-(id)queryIdentityMigrationFailureForUser:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)clearIdentityMigrationFailureForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)eligibleForAugmentation:(id)arg1 error:(id*)arg2 ;
-(id)generateFieldDiagnosticsNonceWithError:(id*)arg1 ;
-(BOOL)enableFieldDiagnosticsWithTatsuManifest:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableFieldDiagnosticsWithError:(id*)arg1 ;
-(id)fieldDiagnosticsRemainingTimeWithError:(id*)arg1 ;
-(id)fieldDiagnosticsEncryptionKeyWithError:(id*)arg1 ;
-(id)fieldDiagnosticsTatsuManifestWithError:(id*)arg1 ;
-(BOOL)setTemplate:(id)arg1 forIdentity:(id)arg2 error:(id*)arg3 ;
@end
