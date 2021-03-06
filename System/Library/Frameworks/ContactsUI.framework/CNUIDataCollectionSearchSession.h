/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNUIDataCollectionSearchSession : NSObject {

	BOOL _pendingResults;
	BOOL _pendingSuggestionsResults;

}

@property (assign,nonatomic) BOOL pendingResults;                         //@synthesize pendingResults=_pendingResults - In the implementation block
@property (assign,nonatomic) BOOL pendingSuggestionsResults;              //@synthesize pendingSuggestionsResults=_pendingSuggestionsResults - In the implementation block
+(void)end;
+(id)currentSession;
+(void)begin;
-(BOOL)pendingResults;
-(void)searchStringDidChange;
-(void)didSelectResult:(id)arg1 ;
-(void)didFetchResultSuggested:(BOOL)arg1 ;
-(void)setPendingResults:(BOOL)arg1 ;
-(BOOL)pendingSuggestionsResults;
-(void)setPendingSuggestionsResults:(BOOL)arg1 ;
@end

