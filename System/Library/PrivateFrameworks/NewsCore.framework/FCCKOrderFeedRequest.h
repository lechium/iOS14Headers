/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCCKOrderFeedRequest : NSObject {

	NSString* _feedID;
	unsigned long long _maxOrder;
	unsigned long long _minOrder;
	unsigned long long _resultsLimit;
	unsigned long long _topK;

}

@property (nonatomic,copy) NSString * feedID;                              //@synthesize feedID=_feedID - In the implementation block
@property (assign,nonatomic) unsigned long long maxOrder;                  //@synthesize maxOrder=_maxOrder - In the implementation block
@property (assign,nonatomic) unsigned long long minOrder;                  //@synthesize minOrder=_minOrder - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) unsigned long long topK;                      //@synthesize topK=_topK - In the implementation block
-(void)setFeedID:(NSString *)arg1 ;
-(void)setMaxOrder:(unsigned long long)arg1 ;
-(void)setTopK:(unsigned long long)arg1 ;
-(unsigned long long)topK;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)maxOrder;
-(unsigned long long)resultsLimit;
-(id)description;
-(void)setMinOrder:(unsigned long long)arg1 ;
-(NSString *)feedID;
-(unsigned long long)minOrder;
@end

