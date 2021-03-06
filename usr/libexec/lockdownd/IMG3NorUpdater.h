//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSUBootFirmwareUpdater.h"

@class IOServiceWriter;

@interface IMG3NorUpdater : MSUBootFirmwareUpdater
{
    IOServiceWriter *_writer;	// 64 = 0x40
}

@property(retain) IOServiceWriter *writer; // @synthesize writer=_writer;
- (void)dealloc;	// IMP=0x000000010002e0bc
- (_Bool)_encodeAndWriteIMG3Data:(struct __CFData *)arg1 isLLB:(_Bool)arg2 isTicket:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x000000010002de44
- (_Bool)updateBootFirmwareWithCallback:(struct ramrod_update_callbacks *)arg1 context:(struct firmware_update_context *)arg2 error:(id *)arg3;	// IMP=0x000000010002db10
- (id)initWithApNonce:(id)arg1;	// IMP=0x000000010002da88

@end

