//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSDate, NSDictionary, PLBatteryUIGraphView;
@protocol PLBatteryUITapDelegate;

@interface PLBatteryUIGraphTableCell : PSTableCell
{
    _Bool _clearGraph;	// 120 = 0x78
    int _graphType;	// 124 = 0x7c
    int _tapIndex;	// 128 = 0x80
    PLBatteryUIGraphView *_graphView;	// 136 = 0x88
    double _topMargin;	// 144 = 0x90
    double _bottomMargin;	// 152 = 0x98
    NSDate *_endOfDay;	// 160 = 0xa0
    NSDictionary *_graphDict;	// 168 = 0xa8
    id <PLBatteryUITapDelegate> _delegate;	// 176 = 0xb0
}

+ (id)alloc;	// IMP=0x0000000000019ff0
- (void).cxx_destruct;	// IMP=0x000000000001ae3c
@property(nonatomic) __weak id <PLBatteryUITapDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool clearGraph; // @synthesize clearGraph=_clearGraph;
@property int tapIndex; // @synthesize tapIndex=_tapIndex;
@property(retain) NSDictionary *graphDict; // @synthesize graphDict=_graphDict;
@property(retain) NSDate *endOfDay; // @synthesize endOfDay=_endOfDay;
@property double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property double topMargin; // @synthesize topMargin=_topMargin;
@property(retain) PLBatteryUIGraphView *graphView; // @synthesize graphView=_graphView;
@property int graphType; // @synthesize graphType=_graphType;
- (void)handleSelectedLocation:(struct CGPoint)arg1;	// IMP=0x000000000001aa9c
- (void)handleTapGesture:(id)arg1;	// IMP=0x000000000001a8bc
- (void)initGraph;	// IMP=0x000000000001a810
- (void)setupGraphView;	// IMP=0x000000000001a534
- (void)layoutSubviews;	// IMP=0x000000000001a474
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000001a1f0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000001a094
- (_Bool)canReload;	// IMP=0x000000000001a08c

@end
