/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKSubcredentialProvisioningSessionOperation.h>
#import <libobjc.A.dylib/PKAppletSubcredentialPairingSessionDelegate.h>

@class NSString;

@interface PKSubcredentialProvisioningPairingSessionOperation : PKSubcredentialProvisioningSessionOperation <PKAppletSubcredentialPairingSessionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithResult:(BOOL)arg2 ;
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1 ;
-(id)pairingSession;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2 ;
@end

