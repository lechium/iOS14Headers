/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PRSRankingConfiguration, NSMutableString, NSString, NSSet;

@interface SSRankingManager : NSObject {

	BOOL _isCancelled;
	BOOL _bullseyeRankingEnabled;
	PRSRankingConfiguration* _rankingConfiguration;
	NSMutableString* _logValues;
	double _blendingTime;
	NSString* _query;
	NSSet* _allowedTopHitSections;

}

@property (retain) NSString * query;                                                      //@synthesize query=_query - In the implementation block
@property (retain) NSSet * allowedTopHitSections;                                         //@synthesize allowedTopHitSections=_allowedTopHitSections - In the implementation block
@property (assign) BOOL isCancelled;                                                      //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) BOOL bullseyeRankingEnabled;                                 //@synthesize bullseyeRankingEnabled=_bullseyeRankingEnabled - In the implementation block
@property (nonatomic,retain) PRSRankingConfiguration * rankingConfiguration;              //@synthesize rankingConfiguration=_rankingConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableString * logValues;                                 //@synthesize logValues=_logValues - In the implementation block
@property (assign,nonatomic) double blendingTime;                                         //@synthesize blendingTime=_blendingTime - In the implementation block
+(void)initialize;
+(id)getCoreDuetValues;
+(void)moveSafariTopHitsToTopOfSection:(id)arg1 ;
+(void)fetchDuetValues;
+(id)getSuggestionsRankingThresholds;
+(void)reloadRecencyThresholds;
+(void)reloadTopHitsParametersFromTrial;
+(void)reloadCommittedSearchParametersFromTrial;
+(void)determineTopHitsForSafariSection:(id)arg1 forQuery:(id)arg2 ;
+(void)reloadRankingParametersFromTrial;
+(void)reloadSuggestionsRankingThresholds;
+(id)keyForIntervalType:(long long)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)query;
-(void)cancel;
-(id)initWithQuery:(id)arg1 ;
-(BOOL)isCancelled;
-(PRSRankingConfiguration *)rankingConfiguration;
-(void)applyTopHitRankingPolicyToSection:(id)arg1 topResultSection:(id)arg2 maxTopHitCount:(long long)arg3 isShortcut:(BOOL)arg4 ;
-(id)removeBlackListedSectionsForMapping:(id)arg1 withRankingConfiguration:(id)arg2 ;
-(double)roundedValueForScore:(double)arg1 ;
-(void)updateServerScoresUsingBlockOrder:(id)arg1 bundleFeatures:(id)arg2 ;
-(void)refineSectionShowingVisibleResultsWithBetterTextMatches:(id)arg1 ;
-(void)addCEPValuesForTTR;
-(void)finalizeLog;
-(id)relativeRankWithAbsRank:(id)arg1 numberValues:(unsigned long long)arg2 ;
-(BOOL)sectionContainsOnlyStaleApps:(id)arg1 ;
-(BOOL)sectionsContainsOnlyOneAppSection:(id)arg1 ;
-(id)makeTopHitSectionUsingSections:(id)arg1 withItemRanker:(id)arg2 sectionHeader:(id)arg3 shortcutResult:(id)arg4 isBullseyeNonCommittedSearch:(BOOL)arg5 isBullseyeCommittedSearch:(BOOL)arg6 parsecEnabled:(BOOL)arg7 maxNumAppsInTopHitSection:(unsigned long long)arg8 ;
-(id)removeBlackListedSectionsForMapping:(id)arg1 ;
-(long long)compareDate:(id)arg1 withDate:(id)arg2 ;
-(id)rankSectionsUsingBundleIDToSectionMapping:(id)arg1 withRanker:(id)arg2 preferredBundleIds:(id)arg3 isPeopleSearch:(BOOL)arg4 isScopedAppSearch:(BOOL)arg5 queryId:(unsigned long long)arg6 isCJK:(BOOL)arg7 isBullseyeNonCommittedSearch:(BOOL)arg8 isBullseyeCommittedSearch:(BOOL)arg9 ;
-(id)applyTopSectionPolicy:(id)arg1 withTopHitSection:(id)arg2 isPeopleSearch:(BOOL)arg3 queryKind:(unsigned long long)arg4 correction:(id)arg5 queryLength:(unsigned long long)arg6 ranker:(id)arg7 ;
-(void)sendTTRLogsWithSections:(id)arg1 searchString:(id)arg2 queryKind:(unsigned long long)arg3 isCommittedSearch:(BOOL)arg4 parsecCameLaterThanSRT:(BOOL)arg5 ;
-(id)groupSectionsByCategory:(id)arg1 genreMap:(id)arg2 topSections:(id)arg3 ;
-(id)rankAppsAtTopForScopedSearchWithSections:(id)arg1 ;
-(id)keyForSection:(id)arg1 ;
-(void)updateWithNewRankingInfo:(id)arg1 ;
-(void)setRankingConfiguration:(PRSRankingConfiguration *)arg1 ;
-(NSMutableString *)logValues;
-(void)setLogValues:(NSMutableString *)arg1 ;
-(double)blendingTime;
-(void)setBlendingTime:(double)arg1 ;
-(NSSet *)allowedTopHitSections;
-(void)setAllowedTopHitSections:(NSSet *)arg1 ;
-(void)setIsCancelled:(BOOL)arg1 ;
-(BOOL)bullseyeRankingEnabled;
-(void)setBullseyeRankingEnabled:(BOOL)arg1 ;
@end

