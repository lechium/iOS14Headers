/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionDescriptor.h>

@protocol NTSectionDescriptor, NTSectionQueueDescriptor;
@class NSString, NSURL;

@interface NTNewsTodayResultsSourceFetchHelperSectionDescriptor : NSObject <NTSectionDescriptor> {

	id<NTSectionDescriptor> _sectionDescriptor;
	id<NTSectionQueueDescriptor> _parentSectionQueueDescriptor;

}

@property (nonatomic,copy,readonly) id<NTSectionDescriptor> sectionDescriptor;                              //@synthesize sectionDescriptor=_sectionDescriptor - In the implementation block
@property (nonatomic,copy,readonly) id<NTSectionQueueDescriptor> parentSectionQueueDescriptor;              //@synthesize parentSectionQueueDescriptor=_parentSectionQueueDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * compactName; 
@property (nonatomic,copy,readonly) NSString * referralBarName; 
@property (nonatomic,copy,readonly) NSString * personalizationFeatureID; 
@property (nonatomic,readonly) unsigned long long cachedResultCutoffTime; 
@property (nonatomic,readonly) unsigned long long fallbackOrder; 
@property (nonatomic,readonly) unsigned long long minimumStoriesAllocation; 
@property (nonatomic,readonly) unsigned long long maximumStoriesAllocation; 
@property (nonatomic,readonly) int readArticlesFilterMethod; 
@property (nonatomic,readonly) int seenArticlesFilterMethod; 
@property (nonatomic,readonly) long long seenArticlesMinimumTimeSinceFirstSeenToFilter; 
@property (nonatomic,readonly) long long supplementalInterSectionFilterOptions; 
@property (nonatomic,readonly) long long supplementalIntraSectionFilterOptions; 
@property (nonatomic,readonly) int promotionCriterion; 
@property (nonatomic,readonly) NSString * backingTagID; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameColorLight; 
@property (nonatomic,copy,readonly) NSString * nameColorDark; 
@property (nonatomic,copy,readonly) NSString * actionTitle; 
@property (nonatomic,copy,readonly) NSURL * actionURL; 
@property (nonatomic,copy,readonly) NSURL * nameActionURL; 
@property (nonatomic,copy,readonly) NSString * backgroundColorLight; 
@property (nonatomic,copy,readonly) NSString * backgroundColorDark; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)minimumStoriesAllocation;
-(NSString *)compactName;
-(unsigned long long)cachedResultCutoffTime;
-(int)readArticlesFilterMethod;
-(int)seenArticlesFilterMethod;
-(NSString *)actionTitle;
-(NSString *)backingTagID;
-(int)promotionCriterion;
-(unsigned long long)fallbackOrder;
-(unsigned long long)maximumStoriesAllocation;
-(NSString *)nameColorLight;
-(long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
-(NSString *)personalizationFeatureID;
-(NSString *)referralBarName;
-(NSString *)nameColorDark;
-(id)init;
-(NSURL *)actionURL;
-(NSString *)backgroundColorLight;
-(NSString *)backgroundColorDark;
-(NSString *)name;
-(NSURL *)nameActionURL;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg1 ;
-(id)assembleResultsWithCatchUpOperation:(id)arg1 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3 ;
-(id)initWithSectionDescriptor:(id)arg1 parentSectionQueueDescriptor:(id)arg2 ;
-(id<NTSectionQueueDescriptor>)parentSectionQueueDescriptor;
-(id<NTSectionDescriptor>)sectionDescriptor;
-(long long)supplementalInterSectionFilterOptions;
-(long long)supplementalIntraSectionFilterOptions;
@end

