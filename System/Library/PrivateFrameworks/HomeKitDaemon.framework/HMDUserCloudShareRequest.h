/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSDate, NSString, HMDHome;

@interface HMDUserCloudShareRequest : NSObject {

	NSUUID* _identifier;
	NSDate* _startDate;
	NSString* _containerID;
	HMDHome* _home;

}

@property (readonly) NSUUID * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSDate * startDate;                  //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSString * containerID;              //@synthesize containerID=_containerID - In the implementation block
@property (__weak,readonly) HMDHome * home;               //@synthesize home=_home - In the implementation block
-(NSUUID *)identifier;
-(NSString *)containerID;
-(NSDate *)startDate;
-(HMDHome *)home;
-(id)initWithStartDate:(id)arg1 containerID:(id)arg2 home:(id)arg3 ;
@end
