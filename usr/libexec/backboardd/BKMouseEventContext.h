//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class BKMousePointerControllerConfiguration, NSString;
@protocol BKHIDEventSenderInfo;

@interface BKMouseEventContext : NSObject <NSCopying>
{
    _Bool _suppressContinuingScrollEvents;	// 8 = 0x8
    unsigned int _contextID;	// 12 = 0xc
    unsigned int _slotID;	// 16 = 0x10
    int _cachedPID;	// 20 = 0x14
    unsigned int _cachedTaskPort;	// 24 = 0x18
    NSString *_displayUUID;	// 32 = 0x20
    id <BKHIDEventSenderInfo> _senderInfo;	// 40 = 0x28
    BKMousePointerControllerConfiguration *_configuration;	// 48 = 0x30
    struct CGPoint _hitTestPoint;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010004e59c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004e540
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010004e4bc
- (id)description;	// IMP=0x000000010004e478
- (unsigned long long)hash;	// IMP=0x000000010004e41c

@end

