//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKMousePointerRegion;

@interface _BKMousePointerRegionLayoutDescriptor : NSObject
{
    unsigned int _edge;	// 8 = 0x8
    BKMousePointerRegion *_region;	// 16 = 0x10
    BKMousePointerRegion *_relativeRegion;	// 24 = 0x18
    double _edgePosition;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010007b784
@property(readonly, nonatomic) double edgePosition; // @synthesize edgePosition=_edgePosition;
@property(readonly, nonatomic) unsigned int edge; // @synthesize edge=_edge;
@property(readonly, nonatomic) BKMousePointerRegion *relativeRegion; // @synthesize relativeRegion=_relativeRegion;
@property(readonly, nonatomic) BKMousePointerRegion *region; // @synthesize region=_region;
- (id)initWithRegion:(id)arg1 relativeRegion:(id)arg2 edge:(unsigned int)arg3 edgePosition:(double)arg4;	// IMP=0x000000010007b6a8

@end
