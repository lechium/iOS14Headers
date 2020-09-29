/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PXTimelineDataSource, NSArray;

@interface PXTimelineScheduler : NSObject {

	double _duration;
	PXTimelineDataSource* _timelineDataSource;
	NSArray* _memoryTimelineEntries;
	NSArray* _featuredPhotoTimelineEntries;
	NSArray* _bestContent;
	NSArray* _timelineCandidates;
	unsigned long long _currentTimelineCandidateIndex;

}

@property (nonatomic,retain) PXTimelineDataSource * timelineDataSource;                     //@synthesize timelineDataSource=_timelineDataSource - In the implementation block
@property (nonatomic,retain) NSArray * memoryTimelineEntries;                               //@synthesize memoryTimelineEntries=_memoryTimelineEntries - In the implementation block
@property (nonatomic,retain) NSArray * featuredPhotoTimelineEntries;                        //@synthesize featuredPhotoTimelineEntries=_featuredPhotoTimelineEntries - In the implementation block
@property (nonatomic,retain) NSArray * bestContent;                                         //@synthesize bestContent=_bestContent - In the implementation block
@property (nonatomic,retain) NSArray * timelineCandidates;                                  //@synthesize timelineCandidates=_timelineCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long currentTimelineCandidateIndex;              //@synthesize currentTimelineCandidateIndex=_currentTimelineCandidateIndex - In the implementation block
@property (assign,nonatomic) double duration;                                               //@synthesize duration=_duration - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)initWithTimelineDataSource:(id)arg1 ;
-(id)scheduledTimelineEntriesWithOptions:(id)arg1 ;
-(void)_initTimelineEntriesAtDate:(id)arg1 ;
-(id)_scheduledTimelineEntriesWithOptions:(id)arg1 atDate:(id)arg2 ;
-(PXTimelineDataSource *)timelineDataSource;
-(id)_findBestContentAndRemoveFromSourceAtDate:(id)arg1 ;
-(id)_sortedTimelineEntriesForMemoriesAtDate:(id)arg1 ;
-(id)_timelineEntriesFromAssetCollections:(id)arg1 ;
-(id)_timelineEntryByBestContentIntervalAtDate:(id)arg1 numberOfDays:(long long)arg2 options:(id)arg3 ;
-(void)setTimelineDataSource:(PXTimelineDataSource *)arg1 ;
-(long long)_startOfDayIndexWithOffsetDay:(long long)arg1 entriesCount:(long long)arg2 perDayLimit:(long long)arg3 ;
-(id)_timelineAtDate:(id)arg1 startOfDayCandidatesIndex:(long long)arg2 timelineEntryByBestContentInterval:(id)arg3 options:(id)arg4 ;
-(id)_coalesceRepeatedTimelineEntries:(id)arg1 ;
-(NSArray *)memoryTimelineEntries;
-(NSArray *)bestContent;
-(void)setMemoryTimelineEntries:(NSArray *)arg1 ;
-(NSArray *)featuredPhotoTimelineEntries;
-(void)setFeaturedPhotoTimelineEntries:(NSArray *)arg1 ;
-(void)setBestContent:(NSArray *)arg1 ;
-(NSArray *)timelineCandidates;
-(void)setTimelineCandidates:(NSArray *)arg1 ;
-(unsigned long long)currentTimelineCandidateIndex;
-(void)setCurrentTimelineCandidateIndex:(unsigned long long)arg1 ;
-(id)init;
@end
