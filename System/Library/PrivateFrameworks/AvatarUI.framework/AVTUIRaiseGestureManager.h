/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CMWakeGestureDelegate.h>

@protocol AVTUIRaiseGestureManagerDelegate, OS_dispatch_queue;
@class NSObject, CMWakeGestureManager, NSString;

@interface AVTUIRaiseGestureManager : NSObject <CMWakeGestureDelegate> {

	id<AVTUIRaiseGestureManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CMWakeGestureManager* _wakeGestureManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                      //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) CMWakeGestureManager * wakeGestureManager;                       //@synthesize wakeGestureManager=_wakeGestureManager - In the implementation block
@property (assign,nonatomic,__weak) id<AVTUIRaiseGestureManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)dealloc;
-(id)initWithBackingWakeGestureManager:(id)arg1 callbackQueue:(id)arg2 ;
-(CMWakeGestureManager *)wakeGestureManager;
-(void)startRaiseGestureUpdates;
-(void)stopRaiseGestureUpdates;
-(id)init;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(void)setDelegate:(id<AVTUIRaiseGestureManagerDelegate>)arg1 ;
-(id<AVTUIRaiseGestureManagerDelegate>)delegate;
@end
