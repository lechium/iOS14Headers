//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface PTClassicKey : NSObject
{
    struct {
        CDStruct_b5c8f9f7 version;
        CDStruct_b5c8f9f7 assetACL;
        CDStruct_b5c8f9f7 assetACLAttestation;
        CDStruct_b5c8f9f7 keyBlob;
        CDStruct_b5c8f9f7 encryptedWrappedKeyBlob;
    } ptKeyOutput;	// 8 = 0x8
    struct {
        CDStruct_b5c8f9f7 version;
        CDStruct_b5c8f9f7 instanceSerialNumber;
        CDStruct_b5c8f9f7 publicKey;
        CDStruct_b5c8f9f7 keyNumber;
        CDStruct_b5c8f9f7 deviceInfos;
        CDStruct_b5c8f9f7 counterLimit;
        CDStruct_b5c8f9f7 counterIndex;
    } ptKeyBlob;	// 88 = 0x58
    NSData *_keyData;	// 200 = 0xc8
}

+ (id)withData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003195c
- (void).cxx_destruct;	// IMP=0x0000000100031b34
@property(readonly, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
- (CDStruct_b5c8f9f7)encryptedWrappedKeyBlobItem;	// IMP=0x0000000100031b20
- (CDStruct_b5c8f9f7)assetACLAttestationItem;	// IMP=0x0000000100031b14
- (CDStruct_b5c8f9f7)assetACLItem;	// IMP=0x0000000100031b08
- (id)encryptedWrappedKeyBlob;	// IMP=0x0000000100031af4
- (CDStruct_b5c8f9f7)keyBlobItem;	// IMP=0x0000000100031ae8
- (id)keyBlob;	// IMP=0x0000000100031ad4
- (id)assetACLAttestation;	// IMP=0x0000000100031ac0
- (id)assetACL;	// IMP=0x0000000100031aac
- (unsigned int)keyNumber;	// IMP=0x0000000100031a9c
- (id)publicKey;	// IMP=0x0000000100031a88

@end
