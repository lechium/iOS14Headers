//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDDepthProcessorDelegate-Protocol.h"

@class NSString;

@interface JasperDepthProvider : NSObject <JDDepthProcessorDelegate>
{
    _Bool _wakupDone;	// 8 = 0x8
    struct H10ISPDevice *_pDevice;	// 16 = 0x10
    struct H10ISPServicesRemote *_pRemote;	// 24 = 0x18
    unsigned int _channel;	// 32 = 0x20
    unsigned short _minFrameRate;	// 36 = 0x24
    unsigned short _maxFrameRate;	// 38 = 0x26
    _Bool _frameRateChanged;	// 40 = 0x28
}

- (_Bool)isValid;	// IMP=0x00000001000b0314
- (void)replaceBank:(int)arg1 frameConfig:(id)arg2;	// IMP=0x00000001000b02f4
- (void)wakeupHasCompleted:(int)arg1;	// IMP=0x00000001000b029c
- (int)getSeqId;	// IMP=0x00000001000b0298
- (int)startOffsetSequence:(int)arg1 offsets:(const struct JDBankOffset *)arg2 repeat:(int)arg3 newSequence:(_Bool)arg4;	// IMP=0x00000001000b01fc
- (void)updateJasperCalib:(const void *)arg1;	// IMP=0x00000001000b01c4
- (void)updateJasperCalibSpots:(const struct JasperCalibSpotLocations *)arg1;	// IMP=0x00000001000b00c0
- (void)updateCurrentSequenceAnchors:(const struct JDJasperAnchors *)arg1;	// IMP=0x00000001000b00b0
- (_Bool)isSameDevice:(struct H10ISPDevice *)arg1;	// IMP=0x00000001000b0094
- (void)setJasperFrameRateMax:(unsigned short)arg1;	// IMP=0x00000001000b008c
- (void)setJasperFrameRateMin:(unsigned short)arg1;	// IMP=0x00000001000b0084
- (id)initWithDevice:(struct H10ISPDevice *)arg1 andChannel:(unsigned int)arg2 andRemote:(struct H10ISPServicesRemote *)arg3;	// IMP=0x00000001000b0020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

