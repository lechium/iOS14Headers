/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString;

@interface MenstrualCyclesAppPlugin.MenstrualCyclesAvailabilityProvider : NSObject <NSObject> {

	 isRunning;
	 internalAvailability;
	 observers;
	 lock;
	 notifyQueue;
	 onboardingManager;
	 userCharacteristics;
	 didUpdate;

}
-(void)dealloc;
-(id)init;
-(void)onboardingStatusDidUpdate:(id)arg1 ;
@end

