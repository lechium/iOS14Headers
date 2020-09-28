/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/FeedItemPlugins/RespiratoryHealthAppPlugin.healthplugin/RespiratoryHealthAppPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKRPOxygenSaturationSettingsObserver.h>

@interface RespiratoryHealthAppPlugin.OxygenSaturationAvailability : NSObject <HKRPOxygenSaturationSettingsObserver> {

	 healthStore;
	 manager;
	 settings;
	 oxygenSaturationFeatureStatusPublisher;
	 oxygenSaturationPromotionVisibilityPublisher;
	 oxygenSaturationPromotionVisibility;
	 onboardingCompletedKey;
	 userDefaults;

}
-(void)oxygenSaturationSettingsDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)pairedDevicesDidUpdate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
