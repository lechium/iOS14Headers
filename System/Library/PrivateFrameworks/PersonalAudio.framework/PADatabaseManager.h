/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingCore/HCDatabaseManager.h>

@interface PADatabaseManager : HCDatabaseManager
+(id)sharedManager;
-(id)containerIdentifier;
-(id)currentConfiguration;
-(BOOL)saveConfiguration:(id)arg1 ;
-(void)logMessage:(id)arg1 ;
-(id)cloudKitContainer;
-(id)managedObjectModelName;
-(void)contentDidUpdate:(id)arg1 ;
@end

