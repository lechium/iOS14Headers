/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDProcessLaunchInfoLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _dataSyncState;
	double _timeSincePreviousProcessLaunch;
	double _timeSinceLaunchToDataSyncStateGood;

}

@property (nonatomic,copy,readonly) NSString * dataSyncState;                //@synthesize dataSyncState=_dataSyncState - In the implementation block
@property (readonly) double timeSincePreviousProcessLaunch;                  //@synthesize timeSincePreviousProcessLaunch=_timeSincePreviousProcessLaunch - In the implementation block
@property (readonly) double timeSinceLaunchToDataSyncStateGood;              //@synthesize timeSinceLaunchToDataSyncStateGood=_timeSinceLaunchToDataSyncStateGood - In the implementation block
+(id)uuid;
-(id)eventName;
-(NSString *)dataSyncState;
-(id)serializedEvent;
-(double)timeSincePreviousProcessLaunch;
-(double)timeSinceLaunchToDataSyncStateGood;
-(id)initWithDataSyncState:(id)arg1 timeSincePreviousProcessLaunch:(double)arg2 timeSinceLaunchToDataSyncStateGood:(double)arg3 ;
@end

