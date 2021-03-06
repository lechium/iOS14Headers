//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PSHeaderFooterView-Protocol.h"

@class NSObject, UILabel, UIProgressView;
@protocol OS_dispatch_source;

@interface CDSiCloudDriveProgressFooterView : UIView <PSHeaderFooterView>
{
    id _globalProgressSubscriber;	// 8 = 0x8
    id _lastSyncDateSubscriber;	// 16 = 0x10
    _Bool _syncing;	// 24 = 0x18
    _Bool _lastSyncAutoUpdate;	// 25 = 0x19
    NSObject<OS_dispatch_source> *_lastSyncSource;	// 32 = 0x20
    UIProgressView *_progressBar;	// 40 = 0x28
    UILabel *_statusLabel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000c624
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(readonly, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(getter=isSyncing) _Bool syncing; // @synthesize syncing=_syncing;
@property(retain) id lastSyncDateSubscriber; // @synthesize lastSyncDateSubscriber=_lastSyncDateSubscriber;
@property(retain) id globalProgressSubscriber; // @synthesize globalProgressSubscriber=_globalProgressSubscriber;
- (void)_updateLocalizedLastSyncAndScheduleAutoUpdateWithDate:(id)arg1;	// IMP=0x000000000000c450
- (void)_updateLocalizedLastSync;	// IMP=0x000000000000c370
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;	// IMP=0x000000000000c350
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000bfe8
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000bf20
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000000b8ec
- (void)dealloc;	// IMP=0x000000000000b888
- (id)initWithSpecifier:(id)arg1;	// IMP=0x000000000000b86c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000b388

@end

