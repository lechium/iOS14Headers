//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMXPCMessageBase.h"

@class NSSet;

@interface MCMXPCMessageStageForDelete : MCMXPCMessageBase
{
    NSSet *_containerIdentities;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010002a340
@property(readonly, nonatomic) NSSet *containerIdentities; // @synthesize containerIdentities=_containerIdentities;
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000100029d44

@end
