/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class NWPathEvaluator;

@interface RTReachabilityManager : RTService {

	BOOL _observingReachabilityChanges;
	NWPathEvaluator* _pathEvaluator;
	unsigned long long _currentReachability;

}

@property (nonatomic,retain) NWPathEvaluator * pathEvaluator;                     //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (assign,nonatomic) unsigned long long currentReachability;              //@synthesize currentReachability=_currentReachability - In the implementation block
+(id)reachabilityToString:(unsigned long long)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(NWPathEvaluator *)pathEvaluator;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)_fetchCurrentReachability:(/*^block*/id)arg1 ;
-(id)initWithPathEvaluator:(id)arg1 ;
-(void)_shutdown;
-(void)_processReachabilityChange:(id)arg1 ;
-(void)dealloc;
-(id)currentReachabilityString;
-(id)init;
-(unsigned long long)reachability;
-(unsigned long long)currentReachability;
-(void)fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPathEvaluator:(NWPathEvaluator *)arg1 ;
-(void)setCurrentReachability:(unsigned long long)arg1 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

