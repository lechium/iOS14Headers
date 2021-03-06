/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCMyArticlesOperation, FCTopStoriesOperation, FCEditorialOperation, FCForYouConfigHeadlinesOperation, NSOperationQueue, NSHashTable, NFUnfairLock, NSDictionary, NSError, FCForYouConfig, FCTopStoriesOperationResult, NSArray, NSMapTable, FCSpotlightOperationResult;

@interface FCForYouCatchUpOperation : FCOperation {

	long long _contentTypes;
	FCMyArticlesOperation* _myArticlesOperation;
	FCTopStoriesOperation* _topStoriesOperation;
	FCEditorialOperation* _editorialOperation;
	FCForYouConfigHeadlinesOperation* _forYouConfigOperation;
	NSOperationQueue* _operationQueue;
	NSHashTable* _conditionWaiters;
	NFUnfairLock* _conditionWaitersLock;

}

@property (assign,nonatomic) long long contentTypes;                                                //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,retain) FCMyArticlesOperation * myArticlesOperation;                           //@synthesize myArticlesOperation=_myArticlesOperation - In the implementation block
@property (nonatomic,retain) FCTopStoriesOperation * topStoriesOperation;                           //@synthesize topStoriesOperation=_topStoriesOperation - In the implementation block
@property (nonatomic,retain) FCEditorialOperation * editorialOperation;                             //@synthesize editorialOperation=_editorialOperation - In the implementation block
@property (nonatomic,retain) FCForYouConfigHeadlinesOperation * forYouConfigOperation;              //@synthesize forYouConfigOperation=_forYouConfigOperation - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * conditionWaiters;                                        //@synthesize conditionWaiters=_conditionWaiters - In the implementation block
@property (nonatomic,retain) NFUnfairLock * conditionWaitersLock;                                   //@synthesize conditionWaitersLock=_conditionWaitersLock - In the implementation block
@property (copy,readonly) NSDictionary * feedContextByFeedID; 
@property (nonatomic,copy,readonly) NSError * catchUpError; 
@property (nonatomic,copy,readonly) FCForYouConfig * forYouConfig; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> topStoriesChannel; 
@property (nonatomic,copy,readonly) FCTopStoriesOperationResult * topStoriesResult; 
@property (nonatomic,copy,readonly) NSArray * trendingHeadlines; 
@property (nonatomic,copy,readonly) NSArray * nonEditorialFeedItems; 
@property (nonatomic,copy,readonly) NSMapTable * nonEditorialScoreProfiles; 
@property (nonatomic,copy,readonly) FCSpotlightOperationResult * spotlightResult; 
+(id)sharedCatchUpOperationForEdition:(id)arg1 contentTypes:(long long)arg2 configuration:(id)arg3 context:(id)arg4 ;
-(FCTopStoriesOperation *)topStoriesOperation;
-(NSOperationQueue *)operationQueue;
-(void)performOperation;
-(void)_addConditionWaiter:(id)arg1 ;
-(BOOL)isWaitingForContentTypes:(long long)arg1 ;
-(id)allFeedItemsAfterTransformation:(id)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)_serviceConditionWaiters;
-(void)setContentTypes:(long long)arg1 ;
-(NSArray *)trendingHeadlines;
-(NSError *)catchUpError;
-(id)nonEditorialFeedItemsAfterTransformation:(id)arg1 ;
-(NSHashTable *)conditionWaiters;
-(id)orphanedEditorialHeadlinesAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 ;
-(FCForYouConfig *)forYouConfig;
-(id)waiterForCondition:(id)arg1 ;
-(FCTopStoriesOperationResult *)topStoriesResult;
-(void)enumerateEditorialSectionsByRecencyAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)setConditionWaiters:(NSHashTable *)arg1 ;
-(FCEditorialOperation *)editorialOperation;
-(void)operationDidFinishWithError:(id)arg1 ;
-(void)setForYouConfigOperation:(FCForYouConfigHeadlinesOperation *)arg1 ;
-(FCSpotlightOperationResult *)spotlightResult;
-(NFUnfairLock *)conditionWaitersLock;
-(NSDictionary *)feedContextByFeedID;
-(void)setEditorialOperation:(FCEditorialOperation *)arg1 ;
-(void)setMyArticlesOperation:(FCMyArticlesOperation *)arg1 ;
-(void)setTopStoriesOperation:(FCTopStoriesOperation *)arg1 ;
-(FCForYouConfigHeadlinesOperation *)forYouConfigOperation;
-(FCMyArticlesOperation *)myArticlesOperation;
-(id)initWithContext:(id)arg1 configuration:(id)arg2 dateRange:(id)arg3 contentTypes:(long long)arg4 background:(BOOL)arg5 ;
-(id)catchUpErrorForContentTypes:(long long)arg1 ;
-(long long)contentTypes;
-(id<FCChannelProviding>)topStoriesChannel;
-(void)setConditionWaitersLock:(NFUnfairLock *)arg1 ;
-(id)waiterForContentTypes:(long long)arg1 ;
-(NSMapTable *)nonEditorialScoreProfiles;
-(NSArray *)nonEditorialFeedItems;
@end

