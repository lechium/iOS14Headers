//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSegmentTableCell.h>

@class UIView;

@interface PLBatteryUISegmentCell : PSSegmentTableCell
{
    _Bool _clearGraph;	// 144 = 0x90
    UIView *_topSeparator;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000002fda4
@property _Bool clearGraph; // @synthesize clearGraph=_clearGraph;
@property(retain) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
- (_Bool)checkIfFontFits:(id)arg1 withSegment1:(id)arg2 andSegment2:(id)arg3;	// IMP=0x000000000002fc0c
- (id)getFittingPreferredFontFromSegment1:(id)arg1 andSegment2:(id)arg2;	// IMP=0x000000000002fad4
- (void)layoutSubviews;	// IMP=0x000000000002f7cc
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000002f718

@end

