//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABSContactsSyncManager, ABSFavoritesSyncManager;

__attribute__((visibility("hidden")))
@interface ABSSyncController : NSObject
{
    ABSContactsSyncManager *_abSyncManager;	// 8 = 0x8
    ABSFavoritesSyncManager *_favoritesSyncManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000338e8
- (void)deleteUnmarked;	// IMP=0x00000001000338d8
- (void)clearShadowMarks;	// IMP=0x00000001000338c8
- (void)deleteEverything;	// IMP=0x0000000100033850
- (void)resetSyncState;	// IMP=0x0000000100033818
- (void)deleteSyChange:(id)arg1;	// IMP=0x000000010003364c
- (void)updateSyChange:(id)arg1 forSession:(id)arg2;	// IMP=0x00000001000331b0
- (void)addSyChanges:(id)arg1 forSession:(id)arg2;	// IMP=0x0000000100032f08
- (id)init;	// IMP=0x0000000100032e88

@end
