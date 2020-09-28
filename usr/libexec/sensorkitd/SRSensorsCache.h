//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class NSArray, NSCache, NSString;

@interface SRSensorsCache : NSObject <NSCacheDelegate>
{
    NSCache *_sensorsCache;	// 8 = 0x8
    NSArray *_sensorDescriptionsDirs;	// 16 = 0x10
    _Bool _shouldReloadAllSensors;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00000001000136dc
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x0000000100013fa4
- (void)dealloc;	// IMP=0x0000000100013b64
- (id)initWithDirectories:(id)arg1;	// IMP=0x0000000100013864
- (id)init;	// IMP=0x0000000100013790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
