//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, UIAlertController;

@interface CRBluetoothPairingPrompt : NSObject
{
    CDUnknownBlockType _confirmationCompletion;	// 8 = 0x8
    unsigned long long _pairingStyle;	// 16 = 0x10
    NSString *_deviceName;	// 24 = 0x18
    NSNumber *_passKey;	// 32 = 0x20
    UIAlertController *_presentedAlertController;	// 40 = 0x28
}

+ (id)_sanitizeName:(id)arg1;	// IMP=0x00000000000101d4
- (void).cxx_destruct;	// IMP=0x0000000000010a1c
@property(nonatomic) __weak UIAlertController *presentedAlertController; // @synthesize presentedAlertController=_presentedAlertController;
@property(copy, nonatomic) NSNumber *passKey; // @synthesize passKey=_passKey;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) unsigned long long pairingStyle; // @synthesize pairingStyle=_pairingStyle;
@property(copy, nonatomic) CDUnknownBlockType confirmationCompletion; // @synthesize confirmationCompletion=_confirmationCompletion;
- (void)_handlePairingCompleted:(_Bool)arg1;	// IMP=0x0000000000010960
- (void)presentFromViewController:(id)arg1;	// IMP=0x00000000000108d4
- (id)_alertController;	// IMP=0x0000000000010414
- (void)dealloc;	// IMP=0x000000000001014c
- (id)initWithPairingStyle:(unsigned long long)arg1 deviceName:(id)arg2 passKey:(id)arg3;	// IMP=0x000000000001008c

@end
