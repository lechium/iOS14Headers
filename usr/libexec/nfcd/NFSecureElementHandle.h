//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFSecureElementHandleInterface-Protocol.h"

@class NFDriverWrapper, NFHardwareSecureElementInfo, NSString;

@interface NFSecureElementHandle : NSObject <NFSecureElementHandleInterface>
{
    int _identifier;	// 8 = 0x8
    NFDriverWrapper *_driver;	// 16 = 0x10
    NFHardwareSecureElementInfo *_info;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000ebfb4
@property(retain) NFHardwareSecureElementInfo *info; // @synthesize info=_info;
@property(retain) NFDriverWrapper *driver; // @synthesize driver=_driver;
@property int identifier; // @synthesize identifier=_identifier;
- (_Bool)hasSentRAPDU;	// IMP=0x00000001000ebf6c
- (_Bool)hasTransactionEnded;	// IMP=0x00000001000ebf5c
- (_Bool)isFieldPresent;	// IMP=0x00000001000ebf4c
- (_Bool)enableGreenCarThreshold:(_Bool)arg1;	// IMP=0x00000001000ebf3c
- (_Bool)setAlwaysOn:(_Bool)arg1;	// IMP=0x00000001000ebe8c
- (id)transceive:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000ebda8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

