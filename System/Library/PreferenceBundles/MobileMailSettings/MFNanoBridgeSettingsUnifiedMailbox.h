//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MFNanoBridgeSettingsMailbox.h"

#import "NSSecureCoding-Protocol.h"

@interface MFNanoBridgeSettingsUnifiedMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding>
{
    int _type;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000104ac
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000107e4
- (unsigned long long)hash;	// IMP=0x00000000000107d4
- (id)icon;	// IMP=0x00000000000106f4
- (id)displayName;	// IMP=0x0000000000010640
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010560
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000104b4
- (unsigned long long)mailboxFilterType;	// IMP=0x00000000000104a4
- (id)initWithType:(int)arg1;	// IMP=0x0000000000010454

@end
