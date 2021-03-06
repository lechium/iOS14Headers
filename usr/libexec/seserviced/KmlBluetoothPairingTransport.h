//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "KmlPairingTransportProtocol-Protocol.h"

@class NSString;
@protocol KmlPairingTransportDelegate;

@interface KmlBluetoothPairingTransport : NSObject <KmlPairingTransportProtocol>
{
    id <KmlPairingTransportDelegate> delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100051a34
@property(nonatomic) __weak id <KmlPairingTransportDelegate> delegate; // @synthesize delegate;
- (void)reset;	// IMP=0x0000000100051a0c
- (void)sendApdu:(id)arg1;	// IMP=0x0000000100051a08
- (void)readApdu;	// IMP=0x0000000100051a04
- (void)endTransaction;	// IMP=0x0000000100051a00
- (void)startTransaction;	// IMP=0x00000001000519fc
- (void)endSession;	// IMP=0x00000001000519f8
- (void)startSessionWithTimeout;	// IMP=0x00000001000519ec
- (void)startSession;	// IMP=0x00000001000519e8
- (id)init;	// IMP=0x000000010005193c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

