//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMDRequest.h"

@protocol FMDAsset;

@interface FMFileDownloadRequest : FMDRequest
{
    id <FMDAsset> _asset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010009e750
@property(retain, nonatomic) id <FMDAsset> asset; // @synthesize asset=_asset;
- (_Bool)canReplace:(id)arg1;	// IMP=0x000000010009e724
- (unsigned long long)type;	// IMP=0x000000010009e71c
- (id)requestHeaders;	// IMP=0x000000010009e5fc
- (id)requestUrl;	// IMP=0x000000010009e5a8
- (id)initWithAsset:(id)arg1;	// IMP=0x000000010009e530

@end
