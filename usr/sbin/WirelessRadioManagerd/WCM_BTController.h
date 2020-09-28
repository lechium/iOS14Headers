//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WCM_Controller.h"

@class NSMutableArray;

@interface WCM_BTController : WCM_Controller
{
    _Bool _powerState;	// 8 = 0x8
    int _audioType;	// 12 = 0xc
    NSMutableArray *_btConnections;	// 16 = 0x10
}

@property(nonatomic) int audioType; // @synthesize audioType=_audioType;
@property(readonly, nonatomic) NSMutableArray *btConnections; // @synthesize btConnections=_btConnections;
@property(readonly, nonatomic) _Bool powerState; // @synthesize powerState=_powerState;
- (void)resetBtMetrics;	// IMP=0x000000010007d538
- (double)getBtRxPer;	// IMP=0x000000010007d520
- (double)getBtTxPer;	// IMP=0x000000010007d508
- (_Bool)isBTMetricsValid;	// IMP=0x000000010007d4e8
- (unsigned long long)getBtActivePhy;	// IMP=0x000000010007d4cc
- (unsigned long long)getBtMaxPhyRate;	// IMP=0x000000010007d4b0
- (unsigned long long)getMovingAvgBTRssi;	// IMP=0x000000010007d498
- (void)updateBTRCU2TimingArray;	// IMP=0x000000010007d484
- (void)updateCarplayBTScanParams:(_Bool)arg1 reason:(int)arg2;	// IMP=0x000000010007d464
- (void)updateCoexRxGainMode:(id)arg1;	// IMP=0x000000010007d44c
- (void)updateMWSScanFrequencyTable:(id)arg1;	// IMP=0x000000010007d434
- (void)updateAntennaRSSIOffset;	// IMP=0x000000010007d420
- (void)updateDefaultBTAntenna:(int)arg1;	// IMP=0x000000010007d408
- (void)updateAntennaSelectionPolicy:(int)arg1 param1:(int)arg2 param2:(int)arg3;	// IMP=0x000000010007d3e8
- (void)getCurrentAntennaSetting;	// IMP=0x000000010007d3d4
- (void)updatePreferredRole:(int)arg1;	// IMP=0x000000010007d3bc
- (void)updateDiversityAFHMapForC0B0:(id)arg1 C0B1:(id)arg2 C1B0:(id)arg3 C1B1:(id)arg4;	// IMP=0x000000010007d398
- (void)updateBLEActiveScanPwrLmtAssertionInterval:(unsigned long long)arg1;	// IMP=0x000000010007d380
- (void)updatePreferredAFHMapRCU2:(int)arg1;	// IMP=0x000000010007d368
- (void)updatePreferredAFHMap:(id)arg1;	// IMP=0x000000010007d350
- (void)updateMWSFrameConfig:(id)arg1;	// IMP=0x000000010007d338
- (void)updateMWSChannelParameters:(id)arg1;	// IMP=0x000000010007d320
- (void)updateAwakeMode:(_Bool)arg1;	// IMP=0x000000010007d304
- (void)updateMWSSignalingConfig;	// IMP=0x000000010007d2f0
- (void)updateWCI2Mode:(_Bool)arg1;	// IMP=0x000000010007d2d4
- (_Bool)isPagingInProgress;	// IMP=0x000000010007d2b4
- (id)getNumberOfBTGameCtrlDev;	// IMP=0x000000010007d264
- (unsigned long long)getNumberOfLEDevice;	// IMP=0x000000010007d248
- (unsigned long long)getNumberOfLEADevice;	// IMP=0x000000010007d22c
- (unsigned long long)getNumberOfHIDDevice;	// IMP=0x000000010007d210
- (unsigned long long)getNumberOfA2DPDevice;	// IMP=0x000000010007d1f4
- (unsigned long long)getNumberOfeSCODevice;	// IMP=0x000000010007d1d8
- (unsigned long long)getNumberOfSCODevice;	// IMP=0x000000010007d1bc
- (int)getBTRole;	// IMP=0x000000010007d1a4
- (int)getBTState;	// IMP=0x000000010007d188
- (void)handlePowerState:(_Bool)arg1;	// IMP=0x000000010007d0f8
- (void)dealloc;	// IMP=0x000000010007d044
- (id)init;	// IMP=0x000000010007cf60

@end
