/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSDictionary, VCEmulatedNetwork;

@interface VCNetworkSimulator : NSObject {

	NSDictionary* _policies;
	VCEmulatedNetwork* _network;
	BOOL _isStarted;
	tagVCRealTimeThread* _thread;
	opaque_pthread_mutex_t _mutex;
	opaque_pthread_cond_t _condition;

}

@property (nonatomic,readonly) VCEmulatedNetwork * network;              //@synthesize network=_network - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)start;
-(VCEmulatedNetwork *)network;
-(id)init;
-(void)stop;
-(id)createDefaultPolicies;
-(id)loadPoliciesFromJsonFile;
-(void)setupNetwork;
-(int)processNetwork;
@end

