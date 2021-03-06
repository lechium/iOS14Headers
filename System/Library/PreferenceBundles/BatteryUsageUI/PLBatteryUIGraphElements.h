//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PLBatteryUIGraphHightLightInterval, PLBatteryUIGraphTitle;

@interface PLBatteryUIGraphElements : NSObject
{
    PLBatteryUIGraphTitle *_graphTitle;	// 8 = 0x8
    NSMutableArray *_graphIcons;	// 16 = 0x10
    NSMutableArray *_graphLabels;	// 24 = 0x18
    NSMutableArray *_graphDateLines;	// 32 = 0x20
    NSMutableArray *_graphHorizontalGridLines;	// 40 = 0x28
    NSMutableArray *_graphVerticalGridLines;	// 48 = 0x30
    NSMutableArray *_graphBars;	// 56 = 0x38
    NSMutableArray *_graphIntervals;	// 64 = 0x40
    PLBatteryUIGraphHightLightInterval *_graphHighlightInterval;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000023870
@property(retain) PLBatteryUIGraphHightLightInterval *graphHighlightInterval; // @synthesize graphHighlightInterval=_graphHighlightInterval;
@property(retain) NSMutableArray *graphIntervals; // @synthesize graphIntervals=_graphIntervals;
@property(retain) NSMutableArray *graphBars; // @synthesize graphBars=_graphBars;
@property(retain) NSMutableArray *graphVerticalGridLines; // @synthesize graphVerticalGridLines=_graphVerticalGridLines;
@property(retain) NSMutableArray *graphHorizontalGridLines; // @synthesize graphHorizontalGridLines=_graphHorizontalGridLines;
@property(retain) NSMutableArray *graphDateLines; // @synthesize graphDateLines=_graphDateLines;
@property(retain) NSMutableArray *graphLabels; // @synthesize graphLabels=_graphLabels;
@property(retain) NSMutableArray *graphIcons; // @synthesize graphIcons=_graphIcons;
@property(retain) PLBatteryUIGraphTitle *graphTitle; // @synthesize graphTitle=_graphTitle;
- (void)drawIconsWithContext:(struct CGContext *)arg1;	// IMP=0x0000000000023690
- (void)drawIntervalsWithContext:(struct CGContext *)arg1;	// IMP=0x000000000002350c
- (void)drawBarsWithContext:(struct CGContext *)arg1;	// IMP=0x00000000000233e0
- (void)drawLabelsWithContext:(struct CGContext *)arg1;	// IMP=0x00000000000232b4
- (void)drawVerticalGridLinesWithContext:(struct CGContext *)arg1;	// IMP=0x0000000000023188
- (void)drawHorizontalGridLinesWithContext:(struct CGContext *)arg1;	// IMP=0x000000000002305c
- (void)drawDateLineWithContext:(struct CGContext *)arg1;	// IMP=0x0000000000022f30
- (void)drawTitleWithContext:(struct CGContext *)arg1;	// IMP=0x0000000000022ee8
- (void)drawWithContext:(struct CGContext *)arg1;	// IMP=0x0000000000022e34
- (void)addGraphElements:(id)arg1;	// IMP=0x0000000000022ce8
- (void)addGraphElement:(id)arg1;	// IMP=0x0000000000022b9c
- (id)init;	// IMP=0x00000000000229c0

@end

