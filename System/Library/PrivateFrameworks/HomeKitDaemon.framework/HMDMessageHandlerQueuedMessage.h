/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDMessageHandlerQueuedMessageDelegate;
@class HMFMessage, HMFTimer, NSUUID, NSString;

@interface HMDMessageHandlerQueuedMessage : HMFObject <HMFTimerDelegate> {

	id<HMDMessageHandlerQueuedMessageDelegate> _delegate;
	HMFMessage* _message;
	HMFTimer* _timer;

}

@property (readonly) HMFTimer * timer;                                               //@synthesize timer=_timer - In the implementation block
@property (__weak) id<HMDMessageHandlerQueuedMessageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier; 
@property (copy,readonly) NSString * name; 
@property (readonly) HMFMessage * message;                                           //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)identifier;
-(void)timerDidFire:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(id)privateDescription;
-(id)attributeDescriptions;
-(HMFTimer *)timer;
-(void)setDelegate:(id<HMDMessageHandlerQueuedMessageDelegate>)arg1 ;
-(id<HMDMessageHandlerQueuedMessageDelegate>)delegate;
-(id)logIdentifier;
-(NSString *)name;
-(HMFMessage *)message;
-(id)initWithMessage:(id)arg1 timeInterval:(double)arg2 ;
@end
