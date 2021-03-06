/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class FCCachePolicy, NSArray;

@interface FCIssuesFetchOperation : FCOperation {

	FCCachePolicy* _cachePolicy;
	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	NSArray* _issueIDs;
	NSArray* _resultIssues;

}

@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * issueIDs;                        //@synthesize issueIDs=_issueIDs - In the implementation block
@property (nonatomic,retain) NSArray * resultIssues;                    //@synthesize resultIssues=_resultIssues - In the implementation block
@property (nonatomic,copy) FCCachePolicy * cachePolicy;                 //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                   //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)setCachePolicy:(FCCachePolicy *)arg1 ;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(FCCachePolicy *)cachePolicy;
-(id)init;
-(void)setResultIssues:(NSArray *)arg1 ;
-(NSArray *)resultIssues;
-(id<FCContentContext>)context;
-(id)fetchCompletionHandler;
-(NSArray *)issueIDs;
-(void)setIssueIDs:(NSArray *)arg1 ;
-(id)initWithContext:(id)arg1 issueIDs:(id)arg2 ;
@end

