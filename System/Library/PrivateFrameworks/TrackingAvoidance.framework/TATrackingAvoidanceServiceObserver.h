/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TATrackingAvoidanceServiceObserver <NSObject>
@optional
-(void)trackingAvoidanceService:(id)arg1 requestingAdditionalInformation:(id)arg2;
-(void)trackingAvoidanceService:(id)arg1 didUpdateSuspiciousDevices:(id)arg2;
-(void)trackingAvoidanceService:(id)arg1 didStageSuspiciousDevices:(id)arg2;
-(void)visitStateChangedForTrackingAvoidanceService:(id)arg1;

@required
-(void)trackingAvoidanceService:(id)arg1 didFindSuspiciousDevices:(id)arg2;

@end

