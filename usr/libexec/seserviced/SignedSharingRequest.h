//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KmlTlv, NSData, SEEndPointAuthorizeResponse;

@interface SignedSharingRequest : NSObject
{
    KmlTlv *_keyAttestationTlv;	// 8 = 0x8
    KmlTlv *_encConfidentialMailboxTlv;	// 16 = 0x10
    KmlTlv *_ownerEncryptionkeyTlv;	// 24 = 0x18
    KmlTlv *_ktsReceiptTlv;	// 32 = 0x20
    KmlTlv *_immoTokenIdTlv;	// 40 = 0x28
    KmlTlv *_signedRequestTLV;	// 48 = 0x30
    KmlTlv *_ownerSignatureTlv;	// 56 = 0x38
    NSData *_mailboxMappingData;	// 64 = 0x40
    SEEndPointAuthorizeResponse *_epAuthResponse;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010004a104
@property(retain, nonatomic) SEEndPointAuthorizeResponse *epAuthResponse; // @synthesize epAuthResponse=_epAuthResponse;
@property(retain, nonatomic) NSData *mailboxMappingData; // @synthesize mailboxMappingData=_mailboxMappingData;
@property(retain, nonatomic) KmlTlv *ownerSignatureTlv; // @synthesize ownerSignatureTlv=_ownerSignatureTlv;
@property(retain, nonatomic) KmlTlv *signedRequestTLV; // @synthesize signedRequestTLV=_signedRequestTLV;
@property(retain, nonatomic) KmlTlv *immoTokenIdTlv; // @synthesize immoTokenIdTlv=_immoTokenIdTlv;
@property(retain, nonatomic) KmlTlv *ktsReceiptTlv; // @synthesize ktsReceiptTlv=_ktsReceiptTlv;
@property(retain, nonatomic) KmlTlv *ownerEncryptionkeyTlv; // @synthesize ownerEncryptionkeyTlv=_ownerEncryptionkeyTlv;
@property(retain, nonatomic) KmlTlv *encConfidentialMailboxTlv; // @synthesize encConfidentialMailboxTlv=_encConfidentialMailboxTlv;
@property(retain, nonatomic) KmlTlv *keyAttestationTlv; // @synthesize keyAttestationTlv=_keyAttestationTlv;
- (_Bool)parseSignedRequestFromData:(id)arg1;	// IMP=0x0000000100049ba0
- (id)createdSignedRequestWithEndpointAuthResponse:(id)arg1 immobilizerTokenSlotId:(id)arg2 mailboxMappingData:(id)arg3;	// IMP=0x0000000100049678

@end
