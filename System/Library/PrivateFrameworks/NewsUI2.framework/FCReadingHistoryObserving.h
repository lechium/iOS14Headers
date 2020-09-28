/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCReadingHistoryObserving <NSObject>
@optional
-(void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2;
-(void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2;
-(void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
-(void)readingHistoryLikelyClearedRemotely:(id)arg1;
-(void)readingHistory:(id)arg1 didAddHeadline:(id)arg2 fromGroupType:(long long)arg3 swipedToArticle:(BOOL)arg4 withOnScreenChecker:(/*^block*/id)arg5;
-(void)readingHistory:(id)arg1 didAddHeadline:(id)arg2 fromGroupType:(long long)arg3 swipedToArticle:(BOOL)arg4 withOnScreenChecker:(/*^block*/id)arg5;
-(void)readingHistoryDidClear:(id)arg1;

@end
