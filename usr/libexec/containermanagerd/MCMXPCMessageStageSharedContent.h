//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMXPCMessageWithIdentifierBase.h"

@class NSString;

@interface MCMXPCMessageStageSharedContent : MCMXPCMessageWithIdentifierBase
{
    NSString *_sourceRelativePath;	// 8 = 0x8
    NSString *_destinationRelativePath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002ade0
@property(readonly, nonatomic) NSString *destinationRelativePath; // @synthesize destinationRelativePath=_destinationRelativePath;
@property(readonly, nonatomic) NSString *sourceRelativePath; // @synthesize sourceRelativePath=_sourceRelativePath;
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000010002accc

@end
