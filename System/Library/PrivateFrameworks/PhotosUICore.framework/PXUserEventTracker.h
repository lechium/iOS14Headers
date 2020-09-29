/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUserEventTrackerCommon.h>

@class NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon {

	double _timeLoggedOnDetailViewWillAppear;
	double _timeLoggedOnMemoriesFeedWillAppear;
	unsigned long long _totalNumberOfRelatedJumps;
	unsigned long long _MaxDepthOfRelatedJumps;
	NSHashTable* __relatedLookupTable;

}

@property (setter=_setRelatedLookupTable:,nonatomic,retain) NSHashTable * _relatedLookupTable;              //@synthesize _relatedLookupTable=__relatedLookupTable - In the implementation block
+(id)sharedInstance;
-(void)livePhotoEffectSavingFailed;
-(void)logForYouSuggestionViewed1UpCount;
-(void)livePhotoEffectPreviewFinishedRendering:(double)arg1 ;
-(void)didFinishViewingDetailsWithCurrentContext:(id)arg1 ;
-(void)_logAggdAddValueForScalarKey:(CFStringRef)arg1 value:(long long)arg2 ;
-(void)logPeopleHomeNumberOfPeopleWithContactName:(unsigned long long)arg1 numberOfPeopleWithStringName:(unsigned long long)arg2 ;
-(void)didPlayMiroMovieForAssetCollection:(id)arg1 ;
-(void)livePhotoEffectReverted;
-(void)livePhotoEffectSelected:(long long)arg1 ;
-(void)livePhotoEffectShared;
-(void)logForYouMemoriesDetailsCount;
-(void)logConfirmAdditionalVisionFaceCountConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2 ;
-(void)logFirstTimeExpericeReadiness:(BOOL)arg1 forLibrarySize:(long long)arg2 ;
-(void)_aggdDurationLoggingDryrun:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logForYouSharedAlbumInvitationAcceptedCount;
-(void)logSearchNumberOfTermsInSearchFieldOnSuccessfulSearch:(unsigned long long)arg1 ;
-(void)logImpressionCountForEventSource:(unsigned long long)arg1 ;
-(void)livePhotoEffectOptionsAppeared;
-(void)didFavoriteMemory;
-(void)logPeopleHomeFavoritePersonCount:(unsigned long long)arg1 totalPersonCount:(unsigned long long)arg2 ;
-(void)logPeopleDetailKeyPhotoChanged;
-(void)logSearchTapSearch;
-(void)logSearchWordEmbeddingSelected;
-(void)_logAggdDurationCounterForLogState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)_logAggdDurationCounterForLogSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)livePhotoEffectSavingFinished:(double)arg1 ;
-(NSHashTable *)_relatedLookupTable;
-(void)logSearchNextTokenSuggestionTapped;
-(void)logViewCountForLogSubState:(unsigned long long)arg1 ;
-(void)willViewDetailsWithCurrentContext:(id)arg1 ;
-(void)logUserDidSelectGadgetAccessoryButtonWithKey:(CFStringRef)arg1 ;
-(void)logTappedZKItemType:(long long)arg1 ;
-(id)init;
-(void)logSearchResultType:(unsigned long long)arg1 ;
-(BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)arg1 ;
-(void)willViewMemoriesFeedView;
-(void)_aggdJumpCountLoggingDryrun:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)logForYouSuggestionSharedCount;
-(void)livePhotoEffectSuggested:(long long)arg1 ;
-(void)_resetDetailViewTraversalStatistics;
-(void)didNavigateInOneUpFromOrigin:(long long)arg1 ;
-(void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logForYouMemoriesFeedCount;
-(void)logViewCountForLogState:(unsigned long long)arg1 ;
-(void)logViewCountForLogSubSubState:(unsigned long long)arg1 ;
-(void)logZKSectionVisible:(BOOL)arg1 forSectionType:(long long)arg2 ;
-(void)logBootstrapMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)logInterestingMemoryNotificationSeenCount;
-(void)logSearchZeroKeywordSearch;
-(void)logConfirmAdditionalMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)logPeopleDetailShowFaces;
-(void)logForYouSuggestionSavedCount;
-(void)_logAggdDurationCounterForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)didFinishViewingMemoriesFeedView;
-(void)_setRelatedLookupTable:(id)arg1 ;
-(void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logConfirmAdditionalSuggestionsConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2 ;
-(void)logPeopleDetailCount;
-(void)didCreateMemoryViaAddToMemories;
-(void)logForYouSharedAlbumInvitationReportedAsJunkCount;
-(void)logSearchSiriFoundResults:(BOOL)arg1 ;
-(void)logNavigationListViewTapWithKey:(CFStringRef)arg1 ;
-(void)livePhotoEffectSuggestionApplied;
-(void)logPeopleConfirmAdditionalViewCount;
-(void)logNamingTypeSelection:(unsigned long long)arg1 ;
-(void)logForYouInboxItemSelectedWithType:(long long)arg1 ;
-(void)logSearchPerSessionNextTokenSuggestionTapped:(BOOL)arg1 wordCompletionTapped:(BOOL)arg2 ;
-(void)logPeopleMeSuggestionConfirmed:(BOOL)arg1 ;
-(void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
-(void)_logAggdRelatedJumpStatistics:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2 ;
-(void)logPeopleHomeCount;
-(void)didViewDetailsForAssetCollection:(id)arg1 ;
-(void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
-(CFStringRef)_aggdKeyForFirstTimeExperienceIsReady:(BOOL)arg1 librarySize:(long long)arg2 ;
-(void)logSearchWordCompletionTapped;
-(void)logForYouSuggestionViewedCount;
-(void)logInterestingMemoryNotificationRespondedCount;
-(void)logForYouSharedAlbumInvitationDeclinedCount;
-(void)logPeopleRemoveFromPeopleHome;
-(void)logSearchWordEmbeddingsPresented;
-(void)didConfirmDeleteOfMemory;
-(void)didPresentOneUpFromOrigin:(long long)arg1 ;
-(void)logBootstrapMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)livePhotoEffectRenderingFailed;
-(void)logPeopleDetailNotThisPerson;
-(void)logSearchSuccessfulResult:(BOOL)arg1 ;
-(void)logConfirmAdditionalMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)logMergeCandidateInlineControlWithSignature:(unsigned long long)arg1 ;
-(void)logForYouInboxViewedCount;
-(void)logPeopleAddToPeopleHome;
-(void)logForYouContextualMemoriesDetailsCount;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2 ;
@end
