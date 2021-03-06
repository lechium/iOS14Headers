//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSMutableArray;

@interface PLBatteryUIGraphViewInternal : UIView
{
    NSDate *startDate;	// 8 = 0x8
    NSDate *endDate;	// 16 = 0x10
    float maxPower;	// 24 = 0x18
    float minPower;	// 28 = 0x1c
    int _errValue;	// 32 = 0x20
    int _graphType;	// 36 = 0x24
    NSMutableArray *_inputData;	// 40 = 0x28
}

+ (int)graphHeight;	// IMP=0x0000000000018c48
- (void).cxx_destruct;	// IMP=0x0000000000019f9c
@property(nonatomic) int graphType; // @synthesize graphType=_graphType;
@property(copy, nonatomic) NSMutableArray *inputData; // @synthesize inputData=_inputData;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000019e50
- (void)drawPoints:(struct CGContext *)arg1 andRect:(struct CGRect)arg2;	// IMP=0x0000000000019ac8
- (void)drawErrorText:(struct CGContext *)arg1 andRect:(struct CGRect)arg2;	// IMP=0x0000000000019928
- (void)drawGrid:(struct CGContext *)arg1 andRect:(struct CGRect)arg2;	// IMP=0x0000000000019318
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000192bc
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2;	// IMP=0x00000000000191f4
- (void)setRangesFromArray:(id)arg1;	// IMP=0x0000000000018cf0
- (void)setDefaultRange;	// IMP=0x0000000000018c50

@end

