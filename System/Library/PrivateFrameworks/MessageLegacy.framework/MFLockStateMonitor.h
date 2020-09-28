/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, EFObserver;
@class NSObject, EFObservable;

@interface MFLockStateMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	EFObservable*<EFObserver> _observable;
	BOOL _isLocked;

}

@property (nonatomic,readonly) EFObservable * lockStateObservable; 
@property (getter=isLocked,readonly) BOOL locked; 
+(id)sharedInstance;
-(BOOL)isLocked;
-(void)_receiveLockState:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(EFObservable *)lockStateObservable;
@end
