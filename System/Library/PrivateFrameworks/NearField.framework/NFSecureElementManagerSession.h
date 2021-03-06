/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFSecureElementManagerSessionCallbacks.h>
#import <libobjc.A.dylib/NFAppletCollection.h>

@protocol NFSecureElementManagerSessionDelegate;
@class NSMutableDictionary, NSString;

@interface NFSecureElementManagerSession : NFSession <NFSecureElementManagerSessionCallbacks, NFAppletCollection> {

	BOOL _hasApplets;
	NSMutableDictionary* _appletsById;
	id<NFSecureElementManagerSessionDelegate> _delegate;

}

@property (__weak) id<NFSecureElementManagerSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)powerCycleSEID:(id)arg1 error:(id*)arg2 ;
-(void)didExitRestrictedMode:(id)arg1 ;
-(id)checkExpressAppletCompatibility:(id)arg1 error:(id*)arg2 ;
-(BOOL)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 error:(id*)arg4 ;
-(id)stateInformation;
-(BOOL)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 ;
-(BOOL)disableAuthorizationForApplets:(id)arg1 andKey:(id)arg2 authorization:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllApplets:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setExpressConfig:(id)arg1 error:(id*)arg2 ;
-(id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id*)arg3 ;
-(id)_appletsById;
-(id)signChallenge:(id)arg1 forAID:(id)arg2 sigInfo:(id*)arg3 error:(id*)arg4 ;
-(id)transitAppletState:(id)arg1 error:(id*)arg2 ;
-(unsigned)runScript:(id)arg1 forSEID:(id)arg2 results:(id*)arg3 lastStatus:(unsigned long long*)arg4 ;
-(void)_setApplets:(id)arg1 ;
-(BOOL)refreshSecureElement:(id)arg1 error:(id*)arg2 ;
-(id)getAttackCounterLogForSEID:(id)arg1 ;
-(id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllApplets:(BOOL)arg1 ;
-(BOOL)restoreAuthorizationForAllAppletsExcept:(id)arg1 ;
-(id)transceiveMultiple:(id)arg1 forSEID:(id)arg2 error:(id*)arg3 ;
-(id)felicaAppletState:(id)arg1 error:(id*)arg2 ;
-(BOOL)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 expressInfo:(id)arg4 error:(id*)arg5 ;
-(BOOL)disableAuthorizationForApplets:(id)arg1 authorization:(id)arg2 error:(id*)arg3 ;
-(BOOL)addExpressKeyID:(id)arg1 forApplet:(id)arg2 type:(unsigned char)arg3 authorization:(id)arg4 expressInfo:(id)arg5 error:(id*)arg6 ;
-(long long)getAndResetLPEMCounter:(id*)arg1 ;
-(BOOL)setExpressModesEnabled:(BOOL)arg1 ;
-(BOOL)disableAuthorizationForApplet:(id)arg1 andKeys:(id)arg2 authorization:(id)arg3 error:(id*)arg4 ;
-(BOOL)disableAuthorizationForApplet:(id)arg1 andKey:(id)arg2 authorization:(id)arg3 error:(id*)arg4 ;
-(id)init;
-(id)signChallenge:(id)arg1 useOSVersion:(BOOL)arg2 signatureInfo:(id*)arg3 error:(id*)arg4 ;
-(id)stateInformationWithError:(id*)arg1 ;
-(BOOL)getCryptogram:(id*)arg1 challengeResponse:(id*)arg2 error:(id*)arg3 ;
-(id)expressAppletIdentifiers;
-(BOOL)deleteApplets:(id)arg1 queueServerConnection:(BOOL)arg2 error:(id*)arg3 ;
-(id)allApplets;
-(BOOL)expressModesEnabledWithError:(id*)arg1 ;
-(void)setDelegate:(id<NFSecureElementManagerSessionDelegate>)arg1 ;
-(BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 ;
-(BOOL)setExpressModesEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(BOOL)arg3 error:(id*)arg4 ;
-(id)transceive:(id)arg1 forSEID:(id)arg2 ;
-(id)getExpressConfigWithError:(id*)arg1 ;
-(id<NFSecureElementManagerSessionDelegate>)delegate;
-(BOOL)setExpressConfig:(id)arg1 restoreAuthorization:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)getCryptogram:(id*)arg1 challengeResponse:(id*)arg2 ;
-(id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id*)arg3 error:(id*)arg4 ;
-(BOOL)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2 ;
-(BOOL)removeExpressKeyID:(id)arg1 forApplet:(id)arg2 restoreAuthorization:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)restoreAuthorizationForAllAppletsExcept:(id)arg1 error:(id*)arg2 ;
-(id)transceive:(id)arg1 forSEID:(id)arg2 error:(id*)arg3 ;
-(id)performPeerPaymentEnrollment:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2 error:(id*)arg3 ;
-(id)getAttackCounterLogForSEID:(id)arg1 error:(id*)arg2 ;
-(id)expressAppletIdentifiersWithError:(id*)arg1 ;
-(id)getOSUpdateLog;
-(id)signChallenge:(id)arg1 useOSVersion:(BOOL)arg2 signatureInfo:(id*)arg3 ;
-(id)appletWithIdentifier:(id)arg1 ;
-(id)felicaAppletState:(id)arg1 ;
-(BOOL)refreshSecureElement:(id)arg1 ;
-(BOOL)restoreAuthorizarionForKeys:(id)arg1 onApplet:(id)arg2 error:(id*)arg3 ;
-(id)signChallenge:(id)arg1 certs:(id*)arg2 ;
-(BOOL)expressModesEnabled;
-(void)didEndUnexpectedly;
-(BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(BOOL)arg3 ;
-(BOOL)didExitRestrictedMode:(id)arg1 error:(id*)arg2 ;
-(id)signChallenge:(id)arg1 certs:(id*)arg2 error:(id*)arg3 ;
-(BOOL)deleteApplets:(id)arg1 queueServerConnection:(BOOL)arg2 ;
-(id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2 ;
-(id)getSignedPlatformDataForSeid:(id)arg1 error:(id*)arg2 ;
-(id)stateInformationWithRedirectInfo:(id)arg1 error:(id*)arg2 ;
-(unsigned)runScript:(id)arg1 parameters:(id)arg2 outputResults:(id*)arg3 ;
-(unsigned)validateSEPairings:(id*)arg1 ;
@end

