//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, SEEndPoint;

@interface KmlEndpointManager : NSObject
{
    NSString *_keyIdentifierStr;	// 8 = 0x8
    NSData *_keyIdentifier;	// 16 = 0x10
    NSString *_endpointIdentifier;	// 24 = 0x18
    SEEndPoint *_endpoint;	// 32 = 0x20
    NSData *_trackingReceipt;	// 40 = 0x28
    NSData *_attestationPackage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000763dc

@end

