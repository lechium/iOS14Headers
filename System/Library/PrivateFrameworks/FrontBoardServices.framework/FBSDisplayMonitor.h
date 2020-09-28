/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, FBSDisplayObserving;
@class NSObject, CADisplay, FBSDisplaySource, NSHashTable, NSMapTable, NSEnumerator, FBSDisplayIdentity, FBSDisplayConfiguration, NSSet, NSString;

@interface FBSDisplayMonitor : NSObject <BSInvalidatable> {

	NSObject*<OS_dispatch_queue> _callOutQueue;
	CADisplay* _mainDisplay;
	FBSDisplaySource* _mainDisplaySource;
	os_unfair_lock_s _lock;
	id<FBSDisplayObserving> _lock_bookendObserver;
	NSHashTable* _lock_observers;
	NSMapTable* _lock_sourcesByDisplay;
	BOOL _lock_allowsUnknownDisplays;
	BOOL _lock_canPostToBookendObserver;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callOutQueue;                     //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (nonatomic,readonly) BOOL canPostToBookendObserver; 
@property (nonatomic,__weak,readonly) id<FBSDisplayObserving> bookendObserver; 
@property (nonatomic,copy,readonly) NSEnumerator * observersEnumerator; 
@property (nonatomic,copy,readonly) FBSDisplayIdentity * mainIdentity; 
@property (nonatomic,copy,readonly) FBSDisplayConfiguration * mainConfiguration; 
@property (nonatomic,copy,readonly) NSSet * connectedIdentities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)connectedIdentities;
-(id<FBSDisplayObserving>)bookendObserver;
-(BOOL)canPostToBookendObserver;
-(void)invalidate;
-(void)_lock_enumerateConnectedWithBlock:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)_sortedSources;
-(void)removeObserver:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)allowsUnknownDisplays;
-(void)dealloc;
-(FBSDisplayIdentity *)mainIdentity;
-(void)setAllowsUnknownDisplays:(BOOL)arg1 ;
-(id)init;
-(void)_lock_enumerateSourcesWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithBookendObserver:(id)arg1 ;
-(id)initWithInitializationCompletion:(/*^block*/id)arg1 ;
-(NSEnumerator *)observersEnumerator;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(FBSDisplayConfiguration *)mainConfiguration;
-(void)_postInitialBookendObserverConnections;
-(id)configurationForIdentity:(id)arg1 ;
-(NSString *)description;
@end
