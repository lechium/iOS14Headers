//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSOperationQueue;

@interface STStoragePluginManager : NSObject
{
    NSOperationQueue *_serialQueue;	// 8 = 0x8
    NSOperationQueue *_concurrentQueue;	// 16 = 0x10
    _Bool _lowSpace;	// 24 = 0x18
    _Bool _showAllTips;	// 25 = 0x19
    NSArray *_allTips;	// 32 = 0x20
    NSArray *_allRepresentedApps;	// 40 = 0x28
    unsigned long long _tipsToShow;	// 48 = 0x30
    NSMutableDictionary *_pluginsByID;	// 56 = 0x38
    NSMutableDictionary *_tipsByPluginID;	// 64 = 0x40
    NSMutableDictionary *_tipsByAppID;	// 72 = 0x48
    NSMutableDictionary *_docPluginsByID;	// 80 = 0x50
    NSMutableDictionary *_externDataPluginsByID;	// 88 = 0x58
}

+ (id)sharedManager;	// IMP=0x0000000000023fd0
- (void).cxx_destruct;	// IMP=0x0000000000026a88
@property(retain) NSMutableDictionary *externDataPluginsByID; // @synthesize externDataPluginsByID=_externDataPluginsByID;
@property(retain) NSMutableDictionary *docPluginsByID; // @synthesize docPluginsByID=_docPluginsByID;
@property(retain) NSMutableDictionary *tipsByAppID; // @synthesize tipsByAppID=_tipsByAppID;
@property(retain) NSMutableDictionary *tipsByPluginID; // @synthesize tipsByPluginID=_tipsByPluginID;
@property(retain) NSMutableDictionary *pluginsByID; // @synthesize pluginsByID=_pluginsByID;
@property unsigned long long tipsToShow; // @synthesize tipsToShow=_tipsToShow;
@property(nonatomic) _Bool showAllTips; // @synthesize showAllTips=_showAllTips;
@property(retain, nonatomic) NSArray *allRepresentedApps; // @synthesize allRepresentedApps=_allRepresentedApps;
@property(retain) NSArray *allTips; // @synthesize allTips=_allTips;
- (id)showAllButtonTitle;	// IMP=0x00000000000269d8
- (void)loadDefaults;	// IMP=0x0000000000026970
- (_Bool)applicationHasTips:(id)arg1;	// IMP=0x00000000000268ac
@property(readonly, nonatomic) NSArray *topTips;
- (id)tipsForApp:(id)arg1;	// IMP=0x0000000000026298
- (id)tipsWithIdentifier:(id)arg1;	// IMP=0x00000000000261c8
- (void)reloadTip:(id)arg1;	// IMP=0x0000000000025a88
- (id)externalDataPluginsForApp:(id)arg1;	// IMP=0x0000000000025a24
- (id)externalDataPluginsForAppIdentifier:(id)arg1;	// IMP=0x0000000000025980
- (id)docPluginsForApp:(id)arg1;	// IMP=0x000000000002591c
- (id)docPluginsForAppIdentifier:(id)arg1;	// IMP=0x0000000000025878
- (void)reloadTipsForPlugin:(id)arg1;	// IMP=0x0000000000025784
- (void)reloadAllTips;	// IMP=0x0000000000025494
- (void)updateTipIndexes;	// IMP=0x00000000000250ec
- (id)loadTipsOperation:(id)arg1;	// IMP=0x0000000000024b08
- (void)loadPlugins;	// IMP=0x00000000000242e4
- (void)notifyTipsChanged;	// IMP=0x000000000002422c
- (void)doNotify:(id)arg1;	// IMP=0x00000000000241b4
- (id)init;	// IMP=0x000000000002403c

@end
