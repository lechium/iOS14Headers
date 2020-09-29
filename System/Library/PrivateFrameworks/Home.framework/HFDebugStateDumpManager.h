/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:27 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface HFDebugStateDumpManager : NSObject {

	int _logStateDumpNotifyToken;
	NSObject*<OS_dispatch_queue> _stateHandlerQueue;
	NSMutableDictionary* _stateDumpHandlersByName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateHandlerQueue;              //@synthesize stateHandlerQueue=_stateHandlerQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stateDumpHandlersByName;               //@synthesize stateDumpHandlersByName=_stateDumpHandlersByName - In the implementation block
@property (nonatomic,readonly) int logStateDumpNotifyToken;                               //@synthesize logStateDumpNotifyToken=_logStateDumpNotifyToken - In the implementation block
+(id)sharedInstance;
-(void)setStateHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)performStateDump:(BOOL)arg1 ;
-(void)setStateDumpHandlersByName:(NSMutableDictionary *)arg1 ;
-(int)logStateDumpNotifyToken;
-(NSMutableDictionary *)stateDumpHandlersByName;
-(NSObject*<OS_dispatch_queue>)stateHandlerQueue;
-(void)dealloc;
-(id)init;
-(id)registerStateDumpHandler:(/*^block*/id)arg1 withName:(id)arg2 ;
@end
