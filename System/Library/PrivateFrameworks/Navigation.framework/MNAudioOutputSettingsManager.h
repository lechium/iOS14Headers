/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSArray, MNAudioOutputSetting, NSObject;

@interface MNAudioOutputSettingsManager : NSObject {

	NSHashTable* _observers;
	unsigned long long _routeSelection;
	NSArray* _audioSettings;
	NSArray* _pickableRoutes;
	MNAudioOutputSetting* _currentSetting;
	MNAudioOutputSetting* _currentSettingForSystem;
	BOOL _isCurrentSettingCached;
	NSObject*<OS_dispatch_queue> _pickableRoutesQueue;

}

@property (nonatomic,retain) MNAudioOutputSetting * currentSetting; 
@property (nonatomic,readonly) MNAudioOutputSetting * currentSettingForVoicePrompt; 
@property (nonatomic,readonly) NSArray * audioSettings;                                          //@synthesize audioSettings=_audioSettings - In the implementation block
@property (nonatomic,readonly) unsigned long long routeSelection;                                //@synthesize routeSelection=_routeSelection - In the implementation block
+(id)sharedInstance;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)_registerForNotifications;
-(NSArray *)audioSettings;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reloadSettings;
-(void)_unregisterForNotifications;
-(void)updatePickableRoutes;
-(void)_pickableRoutesChanged;
-(void)_mediaServerConnectionDied;
-(void)updateRouteSelectionObservers;
-(BOOL)_pickCurrentSetting;
-(void)updateCurrentSettingObservers;
-(void)updatedCurrentSettingForVoicePromptObservers;
-(void)updateRouteSelection;
-(void)updateSettingsObservers;
-(void)updatePickableRoutesWithHandler:(/*^block*/id)arg1 ;
-(MNAudioOutputSetting *)currentSetting;
-(MNAudioOutputSetting *)currentSettingForVoicePrompt;
-(unsigned long long)routeSelection;
-(void)setCurrentSetting:(MNAudioOutputSetting *)arg1 ;
@end

