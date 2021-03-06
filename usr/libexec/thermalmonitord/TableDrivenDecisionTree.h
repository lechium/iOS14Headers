//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TableDrivenDecisionTree : NSObject
{
    NSArray *_componentControllers;	// 8 = 0x8
    NSArray *_hotspotControllers;	// 16 = 0x10
    unsigned char maxLoadIndexForComponent[17];	// 24 = 0x18
    unsigned char releaseMaxLoadIndexForComponent[17];	// 41 = 0x29
    unsigned int releaseRateForComponent[17];	// 60 = 0x3c
}

- (void)initDecisionTable:(struct __CFDictionary *)arg1;	// IMP=0x000000010001fe2c
- (id)findCC:(int)arg1;	// IMP=0x000000010001fd08
- (void)evaluateDecisionTree;	// IMP=0x000000010001fbd8
- (void)readReleaseRateForAllComponents;	// IMP=0x000000010001fb14
- (int)getReleaseRateForComponent:(int)arg1;	// IMP=0x000000010001fad0
- (void)actionComponentControl;	// IMP=0x000000010001f7f0
- (int)getMTypeFromComponent:(int)arg1;	// IMP=0x000000010001f7d0
- (id)initWithComponentControllers:(id)arg1 hotspotControllers:(id)arg2 decisionTreeTable:(id)arg3;	// IMP=0x000000010001f748

@end

