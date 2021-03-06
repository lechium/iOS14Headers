//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface SearchStateCache : NSObject
{
    NSMapTable *_cache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000cdd80
- (id)cachedCompletionListForTabDocument:(id)arg1;	// IMP=0x00000001000cdbe8
- (long long)idOfParsecQueryOriginatingFromSearchSuggestionInTabDocument:(id)arg1;	// IMP=0x00000001000cdb74
- (void)clearParsecQueryOriginatingFromSearchSuggestionInTabDocument:(id)arg1;	// IMP=0x00000001000cdb10
- (void)removeCachedSearchStateForTabDocument:(id)arg1;	// IMP=0x00000001000cdb00
- (void)cacheSearchQueryID:(long long)arg1 forTab:(id)arg2;	// IMP=0x00000001000cdaa0
- (id)_cacheQueryForTabDocument:(id)arg1;	// IMP=0x00000001000cd9fc
- (void)cacheAcceptanceOfCompletionItem:(id)arg1 withCompletionList:(id)arg2 forTabDocument:(id)arg3;	// IMP=0x00000001000cd5fc
- (id)init;	// IMP=0x00000001000cd578

@end

