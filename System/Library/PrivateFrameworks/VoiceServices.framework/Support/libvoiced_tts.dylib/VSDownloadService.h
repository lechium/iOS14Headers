/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSMobileAssetsManager, VSSiriServerConfiguration, VSPreferencesInterface;

@interface VSDownloadService : NSObject {

	unsigned long long _type;
	VSMobileAssetsManager* _mobileAssetManager;
	VSSiriServerConfiguration* _serverConfig;
	VSPreferencesInterface* _preferenceInterface;

}

@property (nonatomic,retain) VSMobileAssetsManager * mobileAssetManager;                //@synthesize mobileAssetManager=_mobileAssetManager - In the implementation block
@property (nonatomic,retain) VSSiriServerConfiguration * serverConfig;                  //@synthesize serverConfig=_serverConfig - In the implementation block
@property (nonatomic,retain) VSPreferencesInterface * preferenceInterface;              //@synthesize preferenceInterface=_preferenceInterface - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                 //@synthesize type=_type - In the implementation block
+(void)addInProgressDownloadVoiceKey:(id)arg1 ;
+(void)removeInProgressDownloadVoiceKey:(id)arg1 ;
+(id)inProgressDownloadVoiceKeys;
+(id)inProgressDownloadResourceKeys;
+(id)downloadQueue;
-(void)updateVoiceIfNeeded:(id)arg1 ;
-(void)cancelAllResourceDownloads;
-(VSMobileAssetsManager *)mobileAssetManager;
-(void)cancelDownloadForAssets:(id)arg1 ;
-(void)updateVoicesAndVoiceResources;
-(VSPreferencesInterface *)preferenceInterface;
-(unsigned long long)type;
-(void)setPreferenceInterface:(VSPreferencesInterface *)arg1 ;
-(void)setMobileAssetManager:(VSMobileAssetsManager *)arg1 ;
-(void)setServerConfig:(VSSiriServerConfiguration *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)updateVoiceResourcesWithPriorityForLanguages:(id)arg1 ;
-(VSSiriServerConfiguration *)serverConfig;
-(void)downloadNextInProgressDownloadResource;
@end

