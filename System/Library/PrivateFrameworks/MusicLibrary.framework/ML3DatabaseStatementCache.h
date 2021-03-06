/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, ML3StatementCacheList;

@interface ML3DatabaseStatementCache : NSObject {

	NSMutableDictionary* _statementsDictionary;
	ML3StatementCacheList* _nodeList;
	unsigned long long _cacheSize;

}

@property (nonatomic,readonly) unsigned long long cacheSize;              //@synthesize cacheSize=_cacheSize - In the implementation block
-(unsigned long long)cacheSize;
-(void)dealloc;
-(id)allStatements;
-(id)cachedStatementForSQL:(id)arg1 ;
-(id)initWithCacheSize:(unsigned long long)arg1 ;
-(void)clearCache;
-(void)cacheStatement:(id)arg1 ;
@end

