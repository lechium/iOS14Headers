//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADSRVClientConnectionRecord : NSObject
{
    double _connectTime;	// 8 = 0x8
    double _disconnectTime;	// 16 = 0x10
    long long _adSpaceCount;	// 24 = 0x18
}

@property(nonatomic) long long adSpaceCount; // @synthesize adSpaceCount=_adSpaceCount;
@property(nonatomic) double disconnectTime; // @synthesize disconnectTime=_disconnectTime;
@property(nonatomic) double connectTime; // @synthesize connectTime=_connectTime;

@end

