/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSServiceFacilityClient.h>

@interface SBSApplicationClient : SBSServiceFacilityClient
+(id)serviceFacilityIdentifier;
-(id)applicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)deleteSnapshotsForApplicationIdentifier:(id)arg1 ;
-(void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg1 ;
-(void)fetchWhitePointAdaptivityStyleForDisplayId:(unsigned)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end
