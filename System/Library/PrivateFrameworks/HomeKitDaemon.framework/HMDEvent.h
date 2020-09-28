/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue, HMDEventDelegate;
@class HMDEventTrigger, NSObject, HMFMessageDispatcher, HMDHome, NSUUID, NSString, NSSet;

@interface HMDEvent : HMFObject <NSSecureCoding, HMFDumpState, HMDHomeMessageReceiver, HMFLogging, HMDBackingStoreObjectProtocol> {

	BOOL _endEvent;
	HMDEventTrigger* _eventTrigger;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	id<HMDEventDelegate> _delegate;
	HMDHome* _home;
	NSUUID* _uuid;
	NSString* _triggerType;
	NSString* _logString;
	unsigned long long _activationType;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) id<HMDEventDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) HMDEventTrigger * eventTrigger;                           //@synthesize eventTrigger=_eventTrigger - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * triggerType;                                        //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,retain) NSString * logString;                                            //@synthesize logString=_logString - In the implementation block
@property (getter=isEndEvent,nonatomic,readonly) BOOL endEvent;                               //@synthesize endEvent=_endEvent - In the implementation block
@property (assign,nonatomic) unsigned long long activationType;                               //@synthesize activationType=_activationType - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(NSUUID *)messageTargetUUID;
-(NSString *)logString;
-(void)_updateTriggerType;
-(void)setEventTrigger:(HMDEventTrigger *)arg1 ;
-(BOOL)isEndEvent;
-(id)dumpState;
-(unsigned long long)activationType;
-(void)setActivationType:(unsigned long long)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_registerForMessages;
-(BOOL)isActive;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setDelegate:(id<HMDEventDelegate>)arg1 ;
-(NSString *)triggerType;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id<HMDEventDelegate>)delegate;
-(id)logIdentifier;
-(void)_setup;
-(HMDEventTrigger *)eventTrigger;
-(unsigned long long)hash;
-(void)setHome:(HMDHome *)arg1 ;
-(NSString *)description;
-(HMDHome *)home;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)_activate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(id)analyticsTriggerEventData;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4 ;
-(void)setLogString:(NSString *)arg1 ;
@end
