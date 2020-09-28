//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBKeyBagInfo : NSObject
{
    unsigned char _uuid[16];	// 8 = 0x8
    unsigned int _bagID;	// 24 = 0x18
}

+ (id)infoWithID:(unsigned int)arg1 uuid:(const char *)arg2;	// IMP=0x000000010001b5e4
@property unsigned int bagID; // @synthesize bagID=_bagID;
- (unsigned long long)hash;	// IMP=0x000000010001b710
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001b6b0
- (void)setUUID:(const char *)arg1;	// IMP=0x000000010001b694
- (const char *)uuid;	// IMP=0x000000010001b68c
- (id)initWithID:(unsigned int)arg1 uuid:(const char *)arg2;	// IMP=0x000000010001b61c

@end
