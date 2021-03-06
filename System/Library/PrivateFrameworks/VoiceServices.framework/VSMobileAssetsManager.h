/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCache;

@interface VSMobileAssetsManager : NSObject {

	NSObject*<OS_dispatch_queue> _assetQueryQueue;
	NSCache* _cachedVoiceSelections;
	NSCache* _cachedVoiceResources;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetQueryQueue;              //@synthesize assetQueryQueue=_assetQueryQueue - In the implementation block
@property (nonatomic,retain) NSCache * cachedVoiceSelections;                           //@synthesize cachedVoiceSelections=_cachedVoiceSelections - In the implementation block
@property (nonatomic,retain) NSCache * cachedVoiceResources;                            //@synthesize cachedVoiceResources=_cachedVoiceResources - In the implementation block
+(id)pickCorrectAssetFromLocalAssets:(id)arg1 ;
+(id)preinstallAssetsDirectory;
+(id)queryForVoiceResourceAsset:(id)arg1 returnTypes:(long long)arg2 ;
+(id)voiceResourceFromAsset:(id)arg1 ;
+(id)bundleIdentifierForVoiceType:(long long)arg1 ;
+(void)amendVoice:(id)arg1 withDefaultSettingsFrom:(id)arg2 ;
+(void)amendVoiceWithDefaultSettings:(id)arg1 ;
+(BOOL)isVoiceAssetWellDefined:(id)arg1 ;
+(id)getLatestAssetFromArray:(id)arg1 ;
+(id)downloadOptionsWithBattery:(BOOL)arg1 ;
+(id)queryForLanguage:(id)arg1 forType:(long long)arg2 voicename:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6 ;
+(long long)typeFromBundleIdentifier:(id)arg1 ;
+(id)sharedManager;
-(id)builtInVoices;
-(void)downloadVoiceResource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_downloadAsset:(id)arg1 options:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)installedVoiceResources;
-(id)inactiveVoiceAssets;
-(id)downloadCatalog:(id)arg1 options:(id)arg2 ;
-(BOOL)cancelDownloads:(id)arg1 error:(id*)arg2 ;
-(id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4 ;
-(void)migrateAssetIfNeededWithAssetType:(id)arg1 ;
-(void)amendVoiceWithDefaultSettings:(id)arg1 ;
-(void)setAssetQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 ;
-(void)downloadVoiceResource:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)cleanUnusedVoiceAssets;
-(id)voiceDataFromAsset:(id)arg1 ;
-(NSCache *)cachedVoiceResources;
-(void)migrateAssets;
-(id)voiceAssetWithName:(id)arg1 localOnly:(BOOL)arg2 outError:(id*)arg3 ;
-(void)resetCache;
-(id)preinstalledVoicesForLanguage:(id)arg1 gender:(long long)arg2 ;
-(id)voiceAssetFromPreinstallMetadata:(id)arg1 ;
-(void)amendVoiceAssetWithLatestKnownData:(id)arg1 ;
-(id)init;
-(void)cancelDownload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeAsset:(id)arg1 ;
-(void)downloadVoiceAsset:(id)arg1 options:(id)arg2 progressUpdateHandler:(/*^block*/id)arg3 ;
-(void)cancelResourceDownload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_getVoiceAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6 ;
-(id)legacyLocalVocalizerVoiceAssetForLanguage:(id)arg1 ;
-(void)resetResourcesCache;
-(void)removeVoiceAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_builtInVoiceForLanguage:(id)arg1 ;
-(void)_purgeAsset:(id)arg1 ;
-(void)downloadCatalog:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)activeVoiceAssets;
-(void)removeVoiceResource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)assetQueryQueue;
-(id)selectVoiceResourceAssetForLanguage:(id)arg1 ;
-(void)setCachedVoiceResources:(NSCache *)arg1 ;
-(void)cleanOldVoiceResources;
-(id)_getResults:(id)arg1 ;
-(id)_nonCacheVoiceSelectionForLanguage:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4 ;
-(void)setCachedVoiceSelections:(NSCache *)arg1 ;
-(id)installedLocalVoices;
-(void)downloadVoiceResourceCatalogWithCompletion:(/*^block*/id)arg1 ;
-(id)voiceDataWithBundleIdentifier:(id)arg1 attributes:(id)arg2 voicePathCallback:(/*^block*/id)arg3 ;
-(void)downloadVoiceAsset:(id)arg1 useBattery:(BOOL)arg2 progressUpdateHandler:(/*^block*/id)arg3 ;
-(id)selectPreinstalledVoiceForLanguage:(id)arg1 gender:(long long)arg2 ;
-(id)preinstallAssetsMetadata;
-(id)_installedVoiceResourceAssetForLanguage:(id)arg1 ;
-(id)_localVoiceForLanguage:(id)arg1 gender:(long long)arg2 ;
-(NSCache *)cachedVoiceSelections;
@end

