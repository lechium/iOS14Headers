//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "APServerRequester.h"

@class NSArray;

@interface APThirdPartySegmentUpdateRequester : APServerRequester
{
    _Bool _replaceExisting;	// 8 = 0x8
    _Bool _privateSegment;	// 9 = 0x9
    NSArray *_segmentIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100061228
@property(nonatomic) _Bool privateSegment; // @synthesize privateSegment=_privateSegment;
@property(nonatomic) _Bool replaceExisting; // @synthesize replaceExisting=_replaceExisting;
@property(retain, nonatomic) NSArray *segmentIdentifiers; // @synthesize segmentIdentifiers=_segmentIdentifiers;
- (id)protoBuffer;	// IMP=0x0000000100060f2c
- (Class)responseClass;	// IMP=0x0000000100060f20
- (id)initWithBundleID:(id)arg1 identifier:(id)arg2 segmentIdentifiers:(id)arg3 replaceExisting:(_Bool)arg4 privateSegment:(_Bool)arg5;	// IMP=0x0000000100060e3c

@end
