/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject {

	NSLock* _lock;
	NSString* _hostname;
	SCNetworkReachabilityRef _reachability;
	unsigned _flags;
	CFDictionaryRef _observers;
	BOOL _isReachable;
	BOOL _receivedAtLeastOneCallback;

}

@property (nonatomic,readonly) NSString * hostname;              //@synthesize hostname=_hostname - In the implementation block
-(BOOL)hasObservers;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithHostname:(id)arg1 ;
-(void)dealloc;
-(NSString *)hostname;
-(void)reachabilityChangedWithFlags:(unsigned)arg1 ;
-(id)description;
@end
