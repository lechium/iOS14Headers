/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class _CDInteractionStore, CNContactStore, HKHealthStore, _PSContactResolver, NSObject;

@interface _PSFamilyRecommender : NSObject {

	os_unfair_lock_s _lock;
	_CDInteractionStore* _interactionStore;
	CNContactStore* _contactStore;
	HKHealthStore* _healthStore;
	_PSContactResolver* _contactResolver;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) _PSContactResolver * contactResolver;                //@synthesize contactResolver=_contactResolver - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                       //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                         //@synthesize healthStore=_healthStore - In the implementation block
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(CNContactStore *)contactStore;
-(id)currentFamilyExcludingMe:(id)arg1 ;
-(id)contactIdsFromContactRelationsAndNamesUsingMe:(id)arg1 ;
-(id)contactIdsFromEmergencyContacts;
-(void)logFeedbackForFamilyRecommenderCallHasRecommendations:(BOOL)arg1 ;
-(id)familyRecipientsForShareSheet;
-(id)familyRecommendations;
-(id)handleAndBundleIdDictionaryForFamilyRecipientContact:(id)arg1 lookBackDays:(long long)arg2 ;
-(id)fetchAllContactIdsFromContactStore:(id)arg1 ;
-(_PSContactResolver *)contactResolver;
-(id)init;
-(id)familyRecommendationSuggestionsForShareSheet;
-(HKHealthStore *)healthStore;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)contactKeysToFetch;
-(id)personRelationshipVocabularyByLocaleDictionary;
-(id)relationshipRegularExpressionForRelationship;
-(BOOL)regexMatchForRegex:(id)arg1 string:(id)arg2 ;
-(unsigned long long)indexToInsertDate:(id)arg1 array:(id)arg2 ;
-(_CDInteractionStore *)interactionStore;
-(id)currentFamily;
-(id)nonFamilyRelations;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setContactResolver:(_PSContactResolver *)arg1 ;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
@end

