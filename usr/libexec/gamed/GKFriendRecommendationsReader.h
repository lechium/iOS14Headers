//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataReader-Protocol.h"
#import "GKPlayerListReaderDelegate-Protocol.h"

@class GKPlayerListReader, NSString;

@interface GKFriendRecommendationsReader : NSObject <GKPlayerListReaderDelegate, GKDataReader>
{
    GKPlayerListReader *_listReader;	// 8 = 0x8
}

+ (id)readerWithReaderConnection:(id)arg1 writerConnection:(id)arg2 transport:(id)arg3;	// IMP=0x0000000100162f20
@property(retain, nonatomic) GKPlayerListReader *listReader; // @synthesize listReader=_listReader;
- (int)familiarityForProfileLoadWithRelativePlayer:(id)arg1;	// IMP=0x0000000100163494
- (id)mergeNetworkLoadedProfileResources:(id)arg1 withSparseListResources:(id)arg2;	// IMP=0x000000010016322c
- (id)listCacheWriterWithLanguage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100163218
- (id)listNetworkReaderWithTransport:(id)arg1 cachedListResponse:(id)arg2;	// IMP=0x000000010016314c
- (id)listCacheReaderWithLanguage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100163138
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100163048
- (void)dealloc;	// IMP=0x0000000100163000
- (id)initWithReaderConnection:(id)arg1 writerConnection:(id)arg2 transport:(id)arg3;	// IMP=0x0000000100162f6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

