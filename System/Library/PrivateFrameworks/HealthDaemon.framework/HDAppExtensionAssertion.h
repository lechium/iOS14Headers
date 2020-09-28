/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDAppExtensionAssertionDelegate, OS_dispatch_source;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSString, HDProfile, HDAppAssertionManager, NSMutableDictionary, NSObject;

@interface HDAppExtensionAssertion : NSObject {

	BOOL _unitTest_timersWithShortTimeout;
	BOOL _pendingAssertion;
	BOOL _invalidated;
	os_unfair_lock_s _lock;
	id<HDAppExtensionAssertionDelegate> _delegate;
	NSString* _bundleIdentifier;
	/*^block*/id _unitTest_errorCountDidIncrement;
	/*^block*/id _unitTest_extensionWillTimeout;
	HDProfile* _profile;
	HDAppAssertionManager* _assertionManager;
	NSMutableDictionary* _pendingAssertionCompletions;
	NSMutableDictionary* _pendingDataTypeCodesToAnchors;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_source> _graceTimer;
	double _lastAssertionAttempt;
	long long _connectionErrorCount;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                       //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) HDAppAssertionManager * assertionManager;                  //@synthesize assertionManager=_assertionManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingAssertionCompletions;                //@synthesize pendingAssertionCompletions=_pendingAssertionCompletions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingDataTypeCodesToAnchors;              //@synthesize pendingDataTypeCodesToAnchors=_pendingDataTypeCodesToAnchors - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;                       //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> graceTimer;                         //@synthesize graceTimer=_graceTimer - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                            //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL pendingAssertion;                                            //@synthesize pendingAssertion=_pendingAssertion - In the implementation block
@property (nonatomic,readonly) BOOL invalidated;                                               //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic) double lastAssertionAttempt;                                      //@synthesize lastAssertionAttempt=_lastAssertionAttempt - In the implementation block
@property (assign,nonatomic) long long connectionErrorCount;                                   //@synthesize connectionErrorCount=_connectionErrorCount - In the implementation block
@property (assign,nonatomic,__weak) id<HDAppExtensionAssertionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldAssert; 
@property (nonatomic,readonly) double nextAssertionAttempt; 
@property (nonatomic,copy) id unitTest_errorCountDidIncrement;                                 //@synthesize unitTest_errorCountDidIncrement=_unitTest_errorCountDidIncrement - In the implementation block
@property (nonatomic,copy) id unitTest_extensionWillTimeout;                                   //@synthesize unitTest_extensionWillTimeout=_unitTest_extensionWillTimeout - In the implementation block
@property (assign,nonatomic) BOOL unitTest_timersWithShortTimeout;                             //@synthesize unitTest_timersWithShortTimeout=_unitTest_timersWithShortTimeout - In the implementation block
-(HDAppAssertionManager *)assertionManager;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)extension;
-(BOOL)invalidated;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(os_unfair_lock_s)lock;
-(NSString *)bundleIdentifier;
-(HDProfile *)profile;
-(void)_invalidate;
-(id)init;
-(void)setDelegate:(id<HDAppExtensionAssertionDelegate>)arg1 ;
-(void)setAssertionManager:(HDAppAssertionManager *)arg1 ;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(id<HDAppExtensionAssertionDelegate>)delegate;
-(void)extendForDataType:(long long)arg1 anchor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateForDataType:(long long)arg1 anchor:(id)arg2 ;
-(NSMutableDictionary *)pendingDataTypeCodesToAnchors;
-(void)incrementErrorCount;
-(void)_lock_cancelTimeoutTimers;
-(void)_notifyAppExtensionOfUpcomingTimeout;
-(void)_notifyAppExtensionForDataType:(long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 assertionManager:(id)arg2 profile:(id)arg3 ;
-(void)assertAndUpdateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldAssert;
-(double)nextAssertionAttempt;
-(unsigned long long)_unitTest_pendingAssertionCompletionsCount;
-(id)_unitTest_pendingDataTypeCodesToAnchors;
-(long long)_unitTest_connectionErrorCount;
-(double)_unitTest_lastAssertionAttempt;
-(BOOL)_unitTest_invalidated;
-(id)unitTest_errorCountDidIncrement;
-(void)setUnitTest_errorCountDidIncrement:(id)arg1 ;
-(id)unitTest_extensionWillTimeout;
-(void)setUnitTest_extensionWillTimeout:(id)arg1 ;
-(BOOL)unitTest_timersWithShortTimeout;
-(void)setUnitTest_timersWithShortTimeout:(BOOL)arg1 ;
-(NSMutableDictionary *)pendingAssertionCompletions;
-(void)setPendingAssertionCompletions:(NSMutableDictionary *)arg1 ;
-(void)setPendingDataTypeCodesToAnchors:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)graceTimer;
-(void)setGraceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)pendingAssertion;
-(void)setPendingAssertion:(BOOL)arg1 ;
-(double)lastAssertionAttempt;
-(void)setLastAssertionAttempt:(double)arg1 ;
-(long long)connectionErrorCount;
-(void)setConnectionErrorCount:(long long)arg1 ;
@end
