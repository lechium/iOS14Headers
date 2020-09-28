/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDictionary;

@interface CSSearchQueryContext : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _fetchAttributes;
	unsigned short _flags;
	int _rankingType;
	unsigned _completionOptions;
	unsigned _qos;
	NSString* _clientBundleID;
	NSArray* _protectionClasses;
	NSArray* _bundleIDs;
	NSArray* _rankingQueries;
	NSArray* _preferredLanguages;
	NSString* _keyboardLanguage;
	NSArray* _markedTextArray;
	NSArray* _disableBundles;
	NSString* _userQuery;
	NSArray* _filterQueries;
	NSString* _filterQuery;
	long long _strongRankingQueryCount;
	long long _dominantRankingQueryCount;
	long long _dominatedRankingQueryCount;
	long long _maxCount;
	long long _completionResultCount;
	long long _queryID;
	NSString* _completionString;
	NSArray* _completionAttributes;
	double _currentTime;
	NSArray* _mountPoints;
	NSArray* _scopes;
	T _fuzzyMask;
	T _fuzzyMatch;

}

@property (assign,nonatomic) unsigned short flags;                              //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned qos;                                      //@synthesize qos=_qos - In the implementation block
@property (nonatomic,retain) NSString * clientBundleID;                         //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,retain) NSArray * fetchAttributes; 
@property (nonatomic,retain) NSArray * protectionClasses;                       //@synthesize protectionClasses=_protectionClasses - In the implementation block
@property (nonatomic,retain) NSArray * bundleIDs;                               //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) NSArray * rankingQueries;                          //@synthesize rankingQueries=_rankingQueries - In the implementation block
@property (nonatomic,retain) NSArray * preferredLanguages;                      //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,retain) NSString * keyboardLanguage;                       //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,retain) NSArray * markedTextArray;                         //@synthesize markedTextArray=_markedTextArray - In the implementation block
@property (nonatomic,retain) NSArray * disableBundles;                          //@synthesize disableBundles=_disableBundles - In the implementation block
@property (nonatomic,retain) NSString * userQuery;                              //@synthesize userQuery=_userQuery - In the implementation block
@property (assign,nonatomic) int rankingType;                                   //@synthesize rankingType=_rankingType - In the implementation block
@property (nonatomic,copy) NSArray * filterQueries;                             //@synthesize filterQueries=_filterQueries - In the implementation block
@property (nonatomic,retain) NSString * filterQuery;                            //@synthesize filterQuery=_filterQuery - In the implementation block
@property (assign,nonatomic) long long strongRankingQueryCount;                 //@synthesize strongRankingQueryCount=_strongRankingQueryCount - In the implementation block
@property (assign,nonatomic) long long dominantRankingQueryCount;               //@synthesize dominantRankingQueryCount=_dominantRankingQueryCount - In the implementation block
@property (assign,nonatomic) long long dominatedRankingQueryCount;              //@synthesize dominatedRankingQueryCount=_dominatedRankingQueryCount - In the implementation block
@property (assign,nonatomic) long long maxCount;                                //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) long long completionResultCount;                   //@synthesize completionResultCount=_completionResultCount - In the implementation block
@property (assign,nonatomic) long long queryID;                                 //@synthesize queryID=_queryID - In the implementation block
@property (assign,nonatomic) BOOL internal; 
@property (assign,nonatomic) BOOL grouped; 
@property (assign,nonatomic) BOOL live; 
@property (assign,nonatomic) BOOL counting; 
@property (assign,nonatomic) BOOL attribute; 
@property (assign,nonatomic) BOOL lowPriority; 
@property (assign,nonatomic) BOOL parseUserQuery; 
@property (assign,nonatomic) BOOL fsOnly; 
@property (assign,nonatomic) BOOL playback; 
@property (assign,nonatomic) BOOL includeUserActivities; 
@property (assign,nonatomic) T fuzzyMask;                                       //@synthesize fuzzyMask=_fuzzyMask - In the implementation block
@property (assign,nonatomic) T fuzzyMatch;                                      //@synthesize fuzzyMatch=_fuzzyMatch - In the implementation block
@property (nonatomic,retain) NSString * completionString;                       //@synthesize completionString=_completionString - In the implementation block
@property (nonatomic,retain) NSArray * completionAttributes;                    //@synthesize completionAttributes=_completionAttributes - In the implementation block
@property (assign,nonatomic) unsigned completionOptions;                        //@synthesize completionOptions=_completionOptions - In the implementation block
@property (nonatomic,copy) NSDictionary * options; 
@property (assign,nonatomic) double currentTime;                                //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSArray * mountPoints;                             //@synthesize mountPoints=_mountPoints - In the implementation block
@property (nonatomic,retain) NSArray * scopes;                                  //@synthesize scopes=_scopes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCurrentTime:(double)arg1 ;
-(BOOL)lowPriority;
-(id)xpc_dictionary;
-(void)setLive:(BOOL)arg1 ;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(void)setFilterQueries:(NSArray *)arg1 ;
-(NSArray *)preferredLanguages;
-(NSString *)clientBundleID;
-(void)setProtectionClasses:(NSArray *)arg1 ;
-(void)setInternal:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)completionResultCount;
-(void)setClientBundleID:(NSString *)arg1 ;
-(long long)strongRankingQueryCount;
-(void)setScopes:(NSArray *)arg1 ;
-(unsigned short)flags;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setFlags:(unsigned short)arg1 ;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(void)setDominantRankingQueryCount:(long long)arg1 ;
-(void)setGrouped:(BOOL)arg1 ;
-(void)setFetchAttributes:(NSArray *)arg1 ;
-(void)setIncludeUserActivities:(BOOL)arg1 ;
-(BOOL)live;
-(NSString *)userQuery;
-(NSArray *)filterQueries;
-(id)initWithQoS:(unsigned)arg1 ;
-(NSString *)keyboardLanguage;
-(NSDictionary *)options;
-(id)debugDescription;
-(void)setPlayback:(BOOL)arg1 ;
-(void)setCompletionAttributes:(NSArray *)arg1 ;
-(BOOL)parseUserQuery;
-(void)setStrongRankingQueryCount:(long long)arg1 ;
-(void)setUserQuery:(NSString *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSArray *)scopes;
-(NSArray *)protectionClasses;
-(void)setCounting:(BOOL)arg1 ;
-(void)setQos:(unsigned)arg1 ;
-(unsigned)qos;
-(void)setDominatedRankingQueryCount:(long long)arg1 ;
-(void)setFsOnly:(BOOL)arg1 ;
-(NSArray *)completionAttributes;
-(void)setParseUserQuery:(BOOL)arg1 ;
-(int)rankingType;
-(void)setFuzzyMask:(T)arg1 ;
-(T)fuzzyMask;
-(BOOL)fsOnly;
-(id)init;
-(BOOL)internal;
-(void)setQueryID:(long long)arg1 ;
-(void)setFuzzyMatch:(T)arg1 ;
-(long long)queryID;
-(T)fuzzyMatch;
-(void)setCompletionString:(NSString *)arg1 ;
-(BOOL)playback;
-(id)initWithCoder:(id)arg1 ;
-(void)setFilterQuery:(NSString *)arg1 ;
-(long long)dominatedRankingQueryCount;
-(double)currentTime;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)grouped;
-(unsigned)completionOptions;
-(void)setMarkedTextArray:(NSArray *)arg1 ;
-(BOOL)includeUserActivities;
-(void)setLowPriority:(BOOL)arg1 ;
-(void)setMaxCount:(long long)arg1 ;
-(NSArray *)fetchAttributes;
-(void)setDisableBundles:(NSArray *)arg1 ;
-(NSArray *)markedTextArray;
-(void)setCompletionResultCount:(long long)arg1 ;
-(void)setCompletionOptions:(unsigned)arg1 ;
-(NSArray *)rankingQueries;
-(void)setRankingQueries:(NSArray *)arg1 ;
-(NSArray *)mountPoints;
-(void)setAttribute:(BOOL)arg1 ;
-(BOOL)attribute;
-(void)setPreferredLanguages:(NSArray *)arg1 ;
-(NSString *)completionString;
-(NSString *)filterQuery;
-(long long)maxCount;
-(NSArray *)bundleIDs;
-(id)description;
-(NSArray *)disableBundles;
-(void)setRankingType:(int)arg1 ;
-(BOOL)counting;
-(long long)dominantRankingQueryCount;
-(void)setMountPoints:(NSArray *)arg1 ;
@end
