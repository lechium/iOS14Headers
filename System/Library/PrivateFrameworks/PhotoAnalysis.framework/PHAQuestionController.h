/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class PGManager, NSObject, PGTrialSession, NSMutableDictionary, NSUbiquitousKeyValueStore;

@interface PHAQuestionController : NSObject {

	PGManager* _graphManager;
	NSObject*<OS_os_log> _loggingConnection;
	PGTrialSession* _trialSession;
	NSMutableDictionary* _questionTypeImportanceByQuestionType;
	NSUbiquitousKeyValueStore* _store;

}

@property (nonatomic,retain) PGManager * graphManager;                                                //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;                                //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,retain) NSUbiquitousKeyValueStore * store;                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) PGTrialSession * trialSession;                                           //@synthesize trialSession=_trialSession - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * questionTypeImportanceByQuestionType;              //@synthesize questionTypeImportanceByQuestionType=_questionTypeImportanceByQuestionType - In the implementation block
-(NSObject*<OS_os_log>)loggingConnection;
-(void)setStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(NSUbiquitousKeyValueStore *)store;
-(id)initWithGraphManager:(id)arg1 ;
-(void)setGraphManager:(PGManager *)arg1 ;
-(PGManager *)graphManager;
-(PGTrialSession *)trialSession;
-(void)setTrialSession:(PGTrialSession *)arg1 ;
-(BOOL)generateQuestionsWithOptions:(long long)arg1 progress:(/*^block*/id)arg2 ;
-(BOOL)generateQuestionsWithOptions:(long long)arg1 limit:(unsigned long long)arg2 progress:(/*^block*/id)arg3 ;
-(id)selectedQuestionsFromSortedQuestionsByQuestionType:(id)arg1 withLimit:(unsigned long long)arg2 ;
-(void)assignScoreToQuestions:(id)arg1 ;
-(BOOL)persistQuestions:(id)arg1 ;
-(double)importanceOfQuestionType:(id)arg1 ;
-(id)questionFactoriesForOptions:(long long)arg1 ;
-(id)allQuestionFactories;
-(void)_updateInvalidQuestionsWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_syncAnsweredQuestionsWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_handleKVSQuestionsUpdateIfNeededWithProgressBlock:(/*^block*/id)arg1 ;
-(id)currentQuestionsKVSData;
-(void)removeCurrentKVSData;
-(NSMutableDictionary *)questionTypeImportanceByQuestionType;
-(void)setQuestionTypeImportanceByQuestionType:(NSMutableDictionary *)arg1 ;
@end

