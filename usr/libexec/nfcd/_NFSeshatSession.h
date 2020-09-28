//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_NFSession.h"

#import "NFSeshatSessionInterface-Protocol.h"

@class NFDriverWrapper, NFSecureElementWrapper;

@interface _NFSeshatSession : _NFSession <NFSeshatSessionInterface>
{
    NFSecureElementWrapper *_embeddedSecureElementWrapper;	// 8 = 0x8
    NFSecureElementWrapper *_icefallSecureElementWrapper;	// 16 = 0x10
    NFDriverWrapper *_driverWrapper;	// 24 = 0x18
}

+ (id)validateEntitlements:(id)arg1;	// IMP=0x000000010003be10
- (void).cxx_destruct;	// IMP=0x000000010003dfc4
@property(retain) NFDriverWrapper *driverWrapper; // @synthesize driverWrapper=_driverWrapper;
@property(retain) NFSecureElementWrapper *icefallSecureElementWrapper; // @synthesize icefallSecureElementWrapper=_icefallSecureElementWrapper;
@property(retain) NFSecureElementWrapper *embeddedSecureElementWrapper; // @synthesize embeddedSecureElementWrapper=_embeddedSecureElementWrapper;
- (void)maybeTTR:(unsigned int)arg1 appletResult:(unsigned short)arg2;	// IMP=0x000000010003ddec
- (oneway void)obliterate:(CDUnknownBlockType)arg1;	// IMP=0x000000010003d8e8
- (oneway void)upgradeKey:(unsigned char)arg1 inputData:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000010003d5c8
- (oneway void)getHash:(CDUnknownBlockType)arg1;	// IMP=0x000000010003d32c
- (oneway void)getData:(CDUnknownBlockType)arg1;	// IMP=0x000000010003d06c
- (oneway void)deleteSlot:(unsigned char)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000010003cdc8
- (oneway void)authorizeUpdate:(_Bool)arg1 slotIndex:(unsigned char)arg2 userToken:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x000000010003ca74
- (oneway void)resetCounter:(unsigned char)arg1 userToken:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c754
- (oneway void)derive:(unsigned char)arg1 userHash:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c408
- (oneway void)allocateSlot:(unsigned char)arg1 authorizingUser:(unsigned char)arg2 authorizingUserToken:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x000000010003c0a0
- (void)didStartSession:(id)arg1;	// IMP=0x000000010003c00c
- (unsigned long long)initialRoutingMode;	// IMP=0x000000010003c004

@end
