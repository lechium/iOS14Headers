//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSObject;
@protocol NFContactlessPaymentSessionCallbacks, NFContactlessSessionCallbacks, NFECommercePaymentSessionCallbacks, NFFieldDetectSessionCallbacks, NFHardwareManagerCallbacks, NFHostEmulationSessionCallbacks, NFNdefTagSessionCallbacks, NFPeerPaymentSessionCallbacks, NFReaderSessionCallbacks, NFSecureElementAndHostCardEmulationSessionCallbacks, NFSecureElementManagerSessionCallbacks, NFSeshatSessionCallbacks, NFSessionInterface, NFTrustSessionCallbacks;

@protocol NFHardwareManagerInterface <NSObject>
- (oneway void)setChipscope:(_Bool)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)updateBackgroundTagReading:(unsigned int)arg1 callback:(void (^)(NSError *, unsigned int))arg2;
- (oneway void)dumpLPMDebugLog:(void (^)(NSError *))arg1;
- (oneway void)disableHeadlessMiniNV:(void (^)(NSError *))arg1;
- (oneway void)headlessFactoryMode:(void (^)(NSError *, unsigned int))arg1;
- (oneway void)enableHeadlessTestMode:(unsigned short)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)configureHeadlessFactoryMode:(_Bool)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)disableLPEMFeature:(unsigned long long)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)enableLPEMFeature:(unsigned long long)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)pushSignedRF:(NSData *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)areSessionsAllowed:(void (^)(_Bool, NSError *))arg1;
- (oneway void)getHostCardEmulationLog:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)toggleGPIO:(unsigned short)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)triggerDelayedWake:(unsigned char)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)cancelSinglePollExpressModeAssertion:(void (^)(NSError *))arg1;
- (oneway void)openSinglePollExpressModeAssertion:(double)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)getPowerCounters:(void (^)(NSError *, NSDictionary *))arg1;
- (oneway void)getUniqueFDRKeyXPC:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getDieID:(void (^)(NSData *, NSError *))arg1;
- (oneway void)actOnUserInitiatedSystemShutDown:(unsigned int)arg1 callback:(void (^)(void))arg2;
- (oneway void)queueSecureElementAndHostEmulationSession:(NSObject<NFSecureElementAndHostCardEmulationSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFSecureElementAndHostCardEmulationSessionInterface> *, _Bool, NSError *))arg2;
- (oneway void)queueHostEmulationSession:(NSObject<NFHostEmulationSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFHostEmulationSessionInterface> *, _Bool, NSError *))arg2;
- (oneway void)queueNdefTagSession:(NSObject<NFNdefTagSessionCallbacks> *)arg1 data:(NSData *)arg2 callback:(void (^)(NSObject<NFNdefTagSessionInterface> *, _Bool, NSError *))arg3;
- (oneway void)queuePeerPaymentSession:(NSObject<NFPeerPaymentSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFPeerPaymentSessionInterface> *, _Bool, NSError *))arg2;
- (oneway void)queueSeshatSession:(NSObject<NFSeshatSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFSeshatSessionInterface> *, NSError *))arg2;
- (oneway void)configureReaderModeRFForTransitPartner:(_Bool)arg1 transitPartner:(unsigned int)arg2 callback:(void (^)(NSError *))arg3;
- (oneway void)queueReaderSessionInternal:(NSObject<NFReaderSessionCallbacks> *)arg1 showUI:(_Bool)arg2 callback:(void (^)(NSObject<NFReaderSessionInternalInterface> *, _Bool, NSError *))arg3;
- (oneway void)queueTrustSession:(NSObject<NFTrustSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFTrustSessionInterface> *, _Bool, NSError *))arg2;
- (oneway void)queueLoyaltyAndPaymentSession:(NSObject<NFContactlessPaymentSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFContactlessPaymentSessionInterface> *, _Bool, NSError *))arg2;
- (oneway void)queueSecureElementManagerSession:(NSObject<NFSecureElementManagerSessionCallbacks> *)arg1 priority:(_Bool)arg2 callback:(void (^)(NSObject<NFSecureElementManagerSessionInterface> *, _Bool, NSError *))arg3;
- (oneway void)queueContactlessUICCSession:(NSObject<NFSessionInterface> *)arg1 callback:(void (^)(NSObject<NFContactlessUICCSessionInterface> *, _Bool, NSError *))arg2;
- (oneway void)queueContactlessSession:(NSObject<NFContactlessSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFContactlessSessionInterface> *, _Bool, NSError *))arg2;
- (oneway void)queueContactlessPaymentSession:(NSObject<NFContactlessPaymentSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFContactlessPaymentSessionInterface> *, _Bool, NSError *))arg2;
- (oneway void)queueECommercePaymentSession:(NSObject<NFECommercePaymentSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFECommercePaymentSessionInterface> *, _Bool, NSError *))arg2;
- (oneway void)queueFieldDetectSession:(NSObject<NFFieldDetectSessionCallbacks> *)arg1 callback:(void (^)(NSObject<NFFieldDetectSessionInterface> *, NSError *))arg2;
- (oneway void)getTemperature:(void (^)(double, NSError *))arg1;
- (oneway void)enableRadio:(_Bool)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)radioEnabled:(void (^)(_Bool, NSError *))arg1;
- (oneway void)setFieldDetectEnabled:(_Bool)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)preWarm:(void (^)(NSError *))arg1;
- (oneway void)unregisterForCallbacks:(NSObject<NFHardwareManagerCallbacks> *)arg1;
- (oneway void)registerForCallbacks:(NSObject<NFHardwareManagerCallbacks> *)arg1;
- (oneway void)rfSettings:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)expressModesInfo:(void (^)(_Bool, NSDictionary *))arg1;
- (oneway void)secureElements:(void (^)(NSArray *))arg1;
- (oneway void)controllerInfo:(void (^)(NFHardwareControllerInfo *, NSError *))arg1;
- (oneway void)areNFFeaturesSupported:(unsigned long long)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)isHWSupported:(void (^)(unsigned int))arg1;
@end
