/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSParsecFeedbackDispatcher <NSObject>
@optional
-(void)flush;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 forQueryID:(long long)arg2;
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3;
-(void)userTypedGoToSearch:(id)arg1 endpoint:(unsigned long long)arg2 forQueryID:(long long)arg3;
-(void)userTypedURLDirectlyForQuery:(id)arg1;
-(void)didReceiveParsecResultsAfterTimeout:(id)arg1;
-(void)searchViewDisappearedBecauseOfEvent:(long long)arg1 forQueryID:(long long)arg2;
-(void)didGenerateCompletionListItemsWithRankingObserver:(id)arg1 forQueryID:(long long)arg2;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 urlString:(id)arg3 headers:(id)arg4 endpoint:(unsigned long long)arg5;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 isSafariReaderAvailable:(BOOL)arg2 forQueryID:(long long)arg3;
-(void)userDidTypeKey:(long long)arg1;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 endpoint:(unsigned long long)arg3;
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(BOOL)arg2 method:(long long)arg3 doesMatchSiriSuggestion:(BOOL)arg4;
-(void)userDidEngageWithCardShowingResult:(id)arg1 onCardOfType:(id)arg2 actionType:(id)arg3 actionTarget:(id)arg4 destination:(id)arg5;
-(void)userDidSelectCompletionListItem:(id)arg1;
-(void)userDidSelectCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2;
-(void)userDidEngageWithCompletionListItem:(id)arg1 withCardActionDictionary:(id)arg2;
-(void)userDidEngageWithCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2 withEngagementActionDictionary:(id)arg3;

@required
-(void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 responseSize:(long long)arg3 statusCode:(long long)arg4 networkTimingData:(id)arg5;
-(void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 forEvent:(long long)arg3;
-(void)userDidCancelSession;
-(void)didReceiveLocalResultsForQuery:(id)arg1;
-(void)userDidCancelSession:(long long)arg1;

@end

