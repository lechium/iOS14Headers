//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "tGraphDataSource-Protocol.h"

@protocol OS_dispatch_queue;

@interface MitigationController : NSObject <tGraphDataSource>
{
    NSObject<OS_dispatch_queue> *cpuMitigationQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *gpuMitigationQueue;	// 16 = 0x10
    unsigned int sgxDevice;	// 24 = 0x18
    unsigned int clpcService;	// 28 = 0x1c
    unsigned int pmgrService;	// 32 = 0x20
    int listPosition;	// 36 = 0x24
    int ceilingListDVD1[6];	// 40 = 0x28
    int ceilingListCPU[6];	// 64 = 0x40
    int ceilingListSGX[6];	// 88 = 0x58
    int ceilingListPackage[6];	// 112 = 0x70
    int floorListCPU[6];	// 136 = 0x88
    int floorListGPU[6];	// 160 = 0xa0
    int floorListPackage[6];	// 184 = 0xb8
    _Bool connectsToDieTempCtlDriver;	// 208 = 0xd0
    _Bool _powerSaveActive;	// 209 = 0xd1
    int _powerSaveMaxDVD1;	// 212 = 0xd4
    int _powerSaveCPUPowerTarget;	// 216 = 0xd8
    int _powerSaveMaxSGX;	// 220 = 0xdc
    int _powerSavePackagePowerTarget;	// 224 = 0xe0
    _Bool _noDisplay;	// 228 = 0xe4
    _Bool _usesPowerZoneControl;	// 229 = 0xe5
    int _maxCPUPower;	// 232 = 0xe8
    int _currentCPUPowerTarget;	// 236 = 0xec
    int _currentCPULowPowerTarget;	// 240 = 0xf0
    int _currentHipPowerTarget;	// 244 = 0xf4
    int _currentRealCPUPowerTarget;	// 248 = 0xf8
    int _maxGPUPower;	// 252 = 0xfc
    int _currentGPUPowerTarget;	// 256 = 0x100
    int _currentRealGPUPowerTarget;	// 260 = 0x104
    struct {
        int DVD1LevelRequested;
        int DVD1LevelSentPrevious;
    } DVD1Contributors[4];	// 264 = 0x108
    _Bool _usesPackageControl;	// 296 = 0x128
    int _packageLowPowerTarget;	// 300 = 0x12c
    int _packagePowerZoneTarget;	// 304 = 0x130
    int _maxPackagePower;	// 308 = 0x134
    NSObject<OS_dispatch_queue> *packageControlQueue;	// 312 = 0x138
    _Bool _cpmsMitigationsEnabled;	// 320 = 0x140
    _Bool _isHipEngaged;	// 321 = 0x141
    _Bool graphicsUpdateInFlight;	// 322 = 0x142
    int DVD1Level;	// 324 = 0x144
    int CPULevel;	// 328 = 0x148
    int SGXLevel;	// 332 = 0x14c
    int _powerSaveToken;	// 336 = 0x150
    int _CPUPower;	// 340 = 0x154
    int _GPUPower;	// 344 = 0x158
}

@property(readonly, nonatomic) int GPUPower; // @synthesize GPUPower=_GPUPower;
@property(readonly, nonatomic) int CPUPower; // @synthesize CPUPower=_CPUPower;
@property(nonatomic) _Bool powerSaveActive; // @synthesize powerSaveActive=_powerSaveActive;
@property(nonatomic) int powerSaveToken; // @synthesize powerSaveToken=_powerSaveToken;
@property(nonatomic) _Bool graphicsUpdateInFlight; // @synthesize graphicsUpdateInFlight;
@property(nonatomic) int SGXLevel; // @synthesize SGXLevel;
@property(nonatomic) int CPULevel; // @synthesize CPULevel;
@property(nonatomic) int DVD1Level; // @synthesize DVD1Level;
- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100035cac
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100035b98
- (int)numberOfFields;	// IMP=0x0000000100035b90
- (int)setServiceProperty:(unsigned int)arg1 key:(struct __CFString *)arg2 value:(int)arg3 scaleToFixedPoint:(_Bool)arg4;	// IMP=0x0000000100035a80
- (void)setDieTempControllerProperty:(struct __CFString *)arg1 level:(int)arg2 scaleToFixedPoint:(_Bool)arg3;	// IMP=0x00000001000359c8
- (void)setPackageLowPowerTarget;	// IMP=0x0000000100035954
- (void)setCPULowPowerTarget:(int)arg1;	// IMP=0x00000001000357a0
- (void)setMaxCPUPowerTarget:(int)arg1 useLegacyPath:(_Bool)arg2 setProperty:(struct __CFString *)arg3;	// IMP=0x00000001000355c0
- (void)setMaxGraphicsDrivePowerTarget:(int)arg1;	// IMP=0x0000000100035430
- (void)setMaxPackagePower:(int)arg1;	// IMP=0x000000010003536c
- (void)updatePackage;	// IMP=0x00000001000350b4
- (void)setPackagePowerFloor:(int)arg1 fromDecisionSource:(int)arg2;	// IMP=0x00000001000350a8
- (void)setPackagePowerCeiling:(int)arg1 fromDecisionSource:(int)arg2;	// IMP=0x000000010003509c
- (void)setCPMSMitigationsEnabled:(_Bool)arg1;	// IMP=0x0000000100034fcc
- (void)setPackagePowerZoneTarget;	// IMP=0x0000000100034e88
- (void)setGPUPowerZoneTarget:(int)arg1;	// IMP=0x0000000100034e40
- (void)setCPUPowerZoneTarget:(int)arg1;	// IMP=0x0000000100034d50
- (void)updateGPU;	// IMP=0x0000000100034b54
- (void)updateCPU;	// IMP=0x00000001000346f8
- (void)setGPUPowerFloor:(int)arg1 fromDecisionSource:(int)arg2;	// IMP=0x00000001000346ec
- (int)getCurrentPackageLoadingIndex:(int)arg1;	// IMP=0x00000001000346d8
- (int)getCurrentGPULoadingIndex:(int)arg1;	// IMP=0x00000001000346c4
- (int)getCurrentCPULoadingIndex:(int)arg1;	// IMP=0x00000001000346b0
- (int)getPackageTargetPower;	// IMP=0x00000001000346a8
- (int)getGPUTargetPower;	// IMP=0x00000001000346a0
- (int)getCPUTargetPower;	// IMP=0x0000000100034698
- (int)getCurrentGPUPower;	// IMP=0x0000000100034620
- (int)getPackageCPUPowerTarget;	// IMP=0x00000001000345fc
- (int)getPackagePowerZoneMetric;	// IMP=0x00000001000345d8
- (int)getCurrentPackagePower;	// IMP=0x00000001000345b4
- (int)getCurrentCPUPower;	// IMP=0x0000000100034590
- (float)getCLPCPackagePowerCPUSplitFraction;	// IMP=0x00000001000344d0
- (int)getCLPCWriteToReadPower_8_24_mW:(struct __CFString *)arg1;	// IMP=0x0000000100034438
- (void)setCPUPowerFloor:(int)arg1 fromDecisionSource:(int)arg2;	// IMP=0x000000010003442c
- (void)setGPUPowerCeiling:(int)arg1 fromDecisionSource:(int)arg2;	// IMP=0x0000000100034420
- (void)setCPUPowerCeiling:(int)arg1 forDVD1Contributor:(int)arg2;	// IMP=0x0000000100034414
- (void)setCPUPowerCeiling:(int)arg1 fromDecisionSource:(int)arg2;	// IMP=0x00000001000343f4
- (int)requestListID;	// IMP=0x0000000100034360
- (_Bool)getGPUUtilization:(int *)arg1;	// IMP=0x00000001000342d8
- (id)initForFastLoop:(_Bool)arg1 noDisplay:(_Bool)arg2 powerSaveParams:(id)arg3 powerZoneParams:(id)arg4;	// IMP=0x0000000100033d60

@end

