//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "APLegacyMetricRequester.h"

@class APPBClickLocation;

@interface APLogSysEventRequester : APLegacyMetricRequester
{
    int _eventType;	// 8 = 0x8
    APPBClickLocation *_clickLocation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000c80b4
@property(retain) APPBClickLocation *clickLocation; // @synthesize clickLocation=_clickLocation;
@property int eventType; // @synthesize eventType=_eventType;
- (id)protoBuffer;	// IMP=0x00000001000c7fac
- (Class)responseClass;	// IMP=0x00000001000c7fa0

@end

