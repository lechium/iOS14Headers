/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCEmulatedNetwork.h>

@class VCEmulatedNetworkQueue;

@interface VCEmulatedNetworkSingleQueue : VCEmulatedNetwork {

	VCEmulatedNetworkQueue* _networkQueue;

}
-(void)dealloc;
-(id)initWithPolicies:(id)arg1 ;
-(void)push:(id)arg1 ;
-(void)runUntilTime:(double)arg1 ;
@end

