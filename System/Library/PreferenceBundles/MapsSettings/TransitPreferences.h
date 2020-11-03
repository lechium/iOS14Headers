//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSNumber;

@interface TransitPreferences : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _showICFares;	// 8 = 0x8
    int _sortOption;	// 12 = 0xc
    long long _disabledModes;	// 16 = 0x10
    NSNumber *_surchargeOption;	// 24 = 0x18
}

+ (long long)disabledModesByTogglingMode:(long long)arg1 inModes:(long long)arg2;	// IMP=0x0000000000009e3c
+ (_Bool)isModeDisabled:(long long)arg1 inModes:(long long)arg2;	// IMP=0x0000000000009e30
+ (long long)enabledModesFromDisabled:(long long)arg1;	// IMP=0x0000000000009e24
- (void).cxx_destruct;	// IMP=0x0000000000009e94
@property(nonatomic) _Bool showICFares; // @synthesize showICFares=_showICFares;
@property(retain, nonatomic) NSNumber *surchargeOption; // @synthesize surchargeOption=_surchargeOption;
@property(nonatomic) int sortOption; // @synthesize sortOption=_sortOption;
@property(nonatomic) long long disabledModes; // @synthesize disabledModes=_disabledModes;
- (_Bool)isModeDisabled:(long long)arg1;	// IMP=0x0000000000009dd0
- (unsigned long long)hash;	// IMP=0x0000000000009d74
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009cf4
- (_Bool)isEqualToTransitPreferences:(id)arg1;	// IMP=0x0000000000009b10
- (void)_copyPropertiesTo:(id)arg1;	// IMP=0x0000000000009a34
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000099dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000099d8

@end
