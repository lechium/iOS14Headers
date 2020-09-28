/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAnalyticsSignificantTimeEventData : HMFObject {

	BOOL _offsetPresent;
	NSString* _significantEvent;

}

@property (nonatomic,copy) NSString * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (assign) BOOL offsetPresent;                               //@synthesize offsetPresent=_offsetPresent - In the implementation block
-(NSString *)significantEvent;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)setOffsetPresent:(BOOL)arg1 ;
-(BOOL)offsetPresent;
@end
