//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface ADSOptInConnectionManager : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
}

+ (id)startOptInConnection;	// IMP=0x0000000100003300
- (void).cxx_destruct;	// IMP=0x00000001000034b8
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (id)init;	// IMP=0x000000010000336c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
