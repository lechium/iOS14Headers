//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CMPedometerTable.h"

@interface CMPedometerTableRawSpeedToKValue : CMPedometerTable
{
}

+ (id)sharedInstance;	// IMP=0x00000001008beafc
- (_Bool)isRawSpeedRun:(double)arg1;	// IMP=0x00000001008bf4e8
- (_Bool)isRawSpeedValid:(double)arg1;	// IMP=0x00000001008bf4dc
- (double)kValueForRawSpeed:(double)arg1;	// IMP=0x00000001008bf4d0
- (CDStruct_c3b9c2ee)binIntervalForRawSpeed:(double)arg1;	// IMP=0x00000001008bf4c4
- (_Bool)isRunCalibrationAvailable;	// IMP=0x00000001008bf4b8
- (_Bool)isWalkCalibrationAvailable;	// IMP=0x00000001008bf4ac
- (void)updateBinsWithTrack:(id)arg1;	// IMP=0x00000001008bf1b8
- (void)binsDidChange;	// IMP=0x00000001008bf14c
- (void)logBins;	// IMP=0x00000001008bed48
- (id)initWithTestMode:(_Bool)arg1;	// IMP=0x00000001008beb70
- (_Bool)isBinaryLogging;	// IMP=0x00000001008bea6c

@end

