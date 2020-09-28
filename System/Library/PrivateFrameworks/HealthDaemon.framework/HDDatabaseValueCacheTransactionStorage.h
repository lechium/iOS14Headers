/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface HDDatabaseValueCacheTransactionStorage : NSObject {

	BOOL _didRemoveAllObjects;
	NSMutableDictionary* _cache;
	long long _cacheScope;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) long long cacheScope;                     //@synthesize cacheScope=_cacheScope - In the implementation block
@property (assign,nonatomic) BOOL didRemoveAllObjects;                 //@synthesize didRemoveAllObjects=_didRemoveAllObjects - In the implementation block
-(long long)cacheScope;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
-(id)init;
-(void)setDidRemoveAllObjects:(BOOL)arg1 ;
-(BOOL)didRemoveAllObjects;
-(void)setCacheScope:(long long)arg1 ;
@end
