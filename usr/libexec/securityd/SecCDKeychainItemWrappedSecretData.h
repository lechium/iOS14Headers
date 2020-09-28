//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, _SFAuthenticatedCiphertext;

__attribute__((visibility("hidden")))
@interface SecCDKeychainItemWrappedSecretData : NSObject <NSSecureCoding>
{
    _SFAuthenticatedCiphertext *_ciphertext;	// 8 = 0x8
    NSData *_wrappedKeyData;	// 16 = 0x10
    NSData *_refKeyBlob;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010003cf14
- (void).cxx_destruct;	// IMP=0x000000010003ced8
@property(readonly) NSData *refKeyBlob; // @synthesize refKeyBlob=_refKeyBlob;
@property(readonly) NSData *wrappedKeyData; // @synthesize wrappedKeyData=_wrappedKeyData;
@property(readonly) _SFAuthenticatedCiphertext *ciphertext; // @synthesize ciphertext=_ciphertext;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010003ce30
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010003cbd0
- (id)initWithCiphertext:(id)arg1 wrappedKeyData:(id)arg2 refKeyBlob:(id)arg3;	// IMP=0x000000010003cae0

@end
