//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class DUDictionaryManager, NSMutableDictionary, UIActivityIndicatorView, _UIContentUnavailableView;

@interface DictionarySettingsController : PSListController
{
    _Bool _performedRemoteQuery;	// 192 = 0xc0
    _Bool _willReloadContent;	// 193 = 0xc1
    UIActivityIndicatorView *_loadingSpinner;	// 200 = 0xc8
    _UIContentUnavailableView *_dictionariesUnavailableView;	// 208 = 0xd0
    NSMutableDictionary *_runningAssetOperationInfoForDictionary;	// 216 = 0xd8
    NSMutableDictionary *_downloadingAssets;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000000070f8
@property _Bool willReloadContent; // @synthesize willReloadContent=_willReloadContent;
@property(retain) NSMutableDictionary *downloadingAssets; // @synthesize downloadingAssets=_downloadingAssets;
@property(retain) NSMutableDictionary *runningAssetOperationInfoForDictionary; // @synthesize runningAssetOperationInfoForDictionary=_runningAssetOperationInfoForDictionary;
@property(retain) _UIContentUnavailableView *dictionariesUnavailableView; // @synthesize dictionariesUnavailableView=_dictionariesUnavailableView;
@property(retain) UIActivityIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property _Bool performedRemoteQuery; // @synthesize performedRemoteQuery=_performedRemoteQuery;
- (_Bool)isTTYEnabled;	// IMP=0x0000000000006fec
@property(readonly) DUDictionaryManager *dictionaryManager;
- (void)setRunningAssetOperation:(long long)arg1 forDictionary:(id)arg2;	// IMP=0x0000000000006e68
- (long long)runningAssetOperationForDictionary:(id)arg1;	// IMP=0x0000000000006dbc
- (id)downloadFailedAlertWithError:(id)arg1;	// IMP=0x0000000000006b94
- (void)startDownloadForSpecifier:(id)arg1;	// IMP=0x0000000000006464
- (void)deactivateDictionaryForSpecifier:(id)arg1;	// IMP=0x000000000000610c
- (void)activateDictionaryForSpecifier:(id)arg1;	// IMP=0x0000000000005f5c
- (void)updateProgressForSpecifier:(id)arg1 operationState:(id)arg2;	// IMP=0x0000000000005e20
- (void)setupProgressHandlerForAsset:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000059a0
- (void)toggleDictionaryActivatedState:(id)arg1;	// IMP=0x0000000000005828
- (void)reloadDictionariesList;	// IMP=0x00000000000057a0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000000572c
- (void)viewDidLoad;	// IMP=0x0000000000005498
- (void)showPlaceholderViewsIfNeeded;	// IMP=0x0000000000004f20
- (id)specifiers;	// IMP=0x0000000000004ab8

@end
