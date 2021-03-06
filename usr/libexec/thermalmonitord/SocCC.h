//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@interface SocCC : ComponentControl <tGraphDataSource>
{
    int listIDPos;	// 128 = 0x80
    unsigned int gpuPowerTarget;	// 132 = 0x84
    float timeActive;	// 136 = 0x88
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100010964
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x00000001000108c8
- (int)numberOfFields;	// IMP=0x0000000100010890
- (void)refreshTGraphTelemetry;	// IMP=0x000000010001086c
- (void)refreshFunctionalTelemetry;	// IMP=0x0000000100010868
- (void)defaultAction;	// IMP=0x0000000100010800
- (id)initWithParams:(struct __CFDictionary *)arg1 listID:(int)arg2;	// IMP=0x0000000100010764

@end

