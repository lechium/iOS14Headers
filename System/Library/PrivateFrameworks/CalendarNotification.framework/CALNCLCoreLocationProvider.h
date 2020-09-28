/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNCoreLocationProvider.h>

@class NSString;

@interface CALNCLCoreLocationProvider : NSObject <CALNCoreLocationProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
-(BOOL)preciseLocationAuthorizedForBundle:(id)arg1 ;
-(int)authorizationStatusForBundle:(id)arg1 ;
-(BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)arg1 ;
-(void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(id)arg1 ;
@end
