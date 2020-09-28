/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMSoftwareUpdateControllerDelegate;
@class HMFUnfairLock, HMSoftwareUpdate, HMAccessory, NSUUID, _HMContext, NSString;

@interface HMSoftwareUpdateController : NSObject <HMFMessageReceiver, HMObjectMerge> {

	HMFUnfairLock* _lock;
	HMSoftwareUpdate* _availableUpdate;
	HMAccessory* _accessory;
	id<HMSoftwareUpdateControllerDelegate> _delegate;
	NSUUID* _uniqueIdentifier;
	_HMContext* _context;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (__weak) HMAccessory * accessory;                                                   //@synthesize accessory=_accessory - In the implementation block
@property (retain) HMSoftwareUpdate * availableUpdate;                                        //@synthesize availableUpdate=_availableUpdate - In the implementation block
@property (getter=isControllable,readonly) BOOL controllable; 
@property (__weak) id<HMSoftwareUpdateControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)namespace;
-(NSUUID *)messageTargetUUID;
-(void)configureWithContext:(id)arg1 ;
-(HMSoftwareUpdate *)availableUpdate;
-(BOOL)isControllable;
-(void)setAvailableUpdate:(HMSoftwareUpdate *)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(void)fetchAvailableUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMAccessory *)accessory;
-(void)setContext:(_HMContext *)arg1 ;
-(id)init;
-(NSUUID *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setDelegate:(id<HMSoftwareUpdateControllerDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_HMContext *)context;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id<HMSoftwareUpdateControllerDelegate>)delegate;
-(id)logIdentifier;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(id)messageDestination;
@end
