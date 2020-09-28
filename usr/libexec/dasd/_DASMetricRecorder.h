//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DASMetricRecorder : NSObject
{
}

+ (id)readPredictionData;	// IMP=0x000000010004be44
+ (void)savePredictionData:(id)arg1;	// IMP=0x000000010004bd9c
+ (void)updateAverageForKey:(id)arg1 withNumerator:(double)arg2 withDenominator:(double)arg3;	// IMP=0x000000010004bcb8
+ (void)incrementOccurrencesForKeys:(id)arg1 byCounts:(id)arg2;	// IMP=0x000000010004b9e0
+ (void)incrementOccurrencesForKey:(id)arg1 byCount:(long long)arg2;	// IMP=0x000000010004b7e4
+ (void)recordOccurrenceForKey:(id)arg1;	// IMP=0x000000010004b63c
+ (void)setValue:(int)arg1 forKey:(id)arg2;	// IMP=0x000000010004b570
+ (id)metricQueue;	// IMP=0x000000010004b4b8

@end
