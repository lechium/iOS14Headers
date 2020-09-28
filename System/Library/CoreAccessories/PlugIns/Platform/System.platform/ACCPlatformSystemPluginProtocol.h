/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/System.platform/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCPlatformSystemPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@optional
-(BOOL)unlockedSinceBoot;
-(BOOL)supportsExternalAccessoryBackgroundMode:(id)arg1;
-(void)cancelProcessAssertionForBundleID:(id)arg1;
-(BOOL)isAppInstalledWithBundleID:(id)arg1;
-(void)launchApplication:(id)arg1;
-(BOOL)isAppVisibleInCurrentMode:(id)arg1;
-(BOOL)launchURL:(id)arg1;
-(void)stopObservingApplicationState;
-(id)appNameForBundleID:(id)arg1;
-(long long)timeSinceBootInSecs;
-(long long)secondsSinceLastLockModeEvent:(int)arg1;
-(BOOL)isApplicationInForeground:(id)arg1;
-(void)startObservingApplicationState;
-(id)applicationInfoForBundleID:(id)arg1;
-(id)mediaLibraryUIDString:(BOOL)arg1;
-(BOOL)isLockScreenUIDisplayed;
-(void)launchBundleIDToBackground:(id)arg1;
-(void)toggleProcessAssertionForBundleID:(id)arg1;
-(BOOL)isDeviceLocked;
-(BOOL)isDeviceLockSettingEnabled;
-(id)applicationInfoForPID:(int)arg1;
-(id)foregroundAppBundleIDs;
-(id)applicationsInstalledWithExternalAccessoryProtocol:(id)arg1;
-(BOOL)createFolder:(const char*)arg1 mode:(unsigned short)arg2;

@end
