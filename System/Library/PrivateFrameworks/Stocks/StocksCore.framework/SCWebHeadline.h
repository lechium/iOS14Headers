/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StocksCore/StocksCore-Structs.h>
#import <libobjc.A.dylib/FCHeadlineProviding.h>

@class NSString, NSDate, FCHeadlineThumbnail, NSURL, NSArray, FCCoverArt, NSSet, FCFeedPersonalizedItemScoreProfile, FCTopStoriesStyleConfiguration, NSData, FCHeadlineExperimentalTitleMetadata, FCIssue, FCArticleAudioTrack, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector;

@interface SCWebHeadline : NSObject <FCHeadlineProviding> {

	NSString* _identifier;
	NSString* _articleID;
	NSURL* _contentURL;
	NSString* _title;
	NSString* _shortExcerpt;
	NSDate* _publishDate;
	NSString* _sourceName;

}

@property (nonatomic,copy,readonly) NSString * versionIdentifier; 
@property (nonatomic,copy,readonly) NSString * identifier;                                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * articleID;                                                                      //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * referencedArticleID; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,copy,readonly) NSString * primaryAudience; 
@property (nonatomic,copy,readonly) NSString * title;                                                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleCompact; 
@property (nonatomic,copy,readonly) NSDate * publishDate;                                                                      //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,readonly) long long backendArticleVersion; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel; 
@property (nonatomic,copy,readonly) NSString * sourceName;                                                                     //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,readonly) CGRect thumbnailFocalFrame; 
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnail; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailMedium; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailUltraHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidget; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetHQ; 
@property (nonatomic,copy,readonly) NSString * shortExcerpt;                                                                   //@synthesize shortExcerpt=_shortExcerpt - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessoryText; 
@property (nonatomic,copy,readonly) NSURL * contentURL;                                                                        //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSDate * lastFetchedDate; 
@property (nonatomic,copy,readonly) NSArray * topics; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,readonly) NSURL * videoURL; 
@property (nonatomic,readonly) double videoDuration; 
@property (getter=isFeatureCandidate,nonatomic,readonly) BOOL featureCandidate; 
@property (getter=isSponsored,nonatomic,readonly) BOOL sponsored; 
@property (getter=isDisplayingAsNativeAd,nonatomic,readonly) BOOL displayAsNativeAd; 
@property (nonatomic,copy,readonly) NSString * sponsoredBy; 
@property (nonatomic,copy,readonly) NSArray * iAdCategories; 
@property (nonatomic,copy,readonly) NSArray * iAdKeywords; 
@property (nonatomic,copy,readonly) NSArray * iAdSectionIDs; 
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs; 
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs; 
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL isDraft; 
@property (nonatomic,copy,readonly) NSString * localDraftPath; 
@property (nonatomic,copy,readonly) NSArray * relatedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * moreFromPublisherArticleIDs; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,readonly) FCCoverArt * coverArt; 
@property (nonatomic,copy,readonly) NSString * videoCallToActionTitle; 
@property (nonatomic,copy,readonly) NSURL * videoCallToActionURL; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,readonly) BOOL needsRapidUpdates; 
@property (nonatomic,readonly) BOOL showMinimalChrome; 
@property (getter=isPressRelease,nonatomic,readonly) BOOL pressRelease; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites; 
@property (getter=isBoundToContext,nonatomic,readonly) BOOL boundToContext; 
@property (getter=isHiddenFromFeeds,nonatomic,readonly) BOOL hiddenFromFeeds; 
@property (nonatomic,copy,readonly) NSString * surfacedBySectionID; 
@property (nonatomic,copy,readonly) NSString * surfacedByChannelID; 
@property (nonatomic,copy,readonly) NSString * surfacedByTopicID; 
@property (nonatomic,copy,readonly) NSString * surfacedByBinID; 
@property (nonatomic,copy,readonly) NSSet * surfacedByTagIDs; 
@property (nonatomic,readonly) double tileProminenceScore; 
@property (nonatomic,readonly) FCFeedPersonalizedItemScoreProfile * scoreProfile; 
@property (nonatomic,readonly) BOOL isTopStory; 
@property (nonatomic,readonly) unsigned long long topStoryType; 
@property (nonatomic,readonly) BOOL usesImageOnTopLayout; 
@property (nonatomic,readonly) unsigned long long feedOrder; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (nonatomic,readonly) unsigned long long storyType; 
@property (nonatomic,readonly) FCTopStoriesStyleConfiguration * storyStyle; 
@property (nonatomic,copy,readonly) NSDate * displayDate; 
@property (nonatomic,readonly) BOOL showSubscriptionRequiredText; 
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) BOOL showPublisherLogo; 
@property (nonatomic,readonly) id<FCNativeAdProviding> associatedAd; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs; 
@property (nonatomic,readonly) BOOL isFullTrackAvailableToAll; 
@property (nonatomic,readonly) unsigned long long role; 
@property (getter=isBundlePaid,nonatomic,readonly) BOOL bundlePaid; 
@property (nonatomic,readonly) id<FCHeadlineStocksFields> stocksFields; 
@property (nonatomic,readonly) NSData * backingArticleRecordData; 
@property (nonatomic,copy,readonly) FCHeadlineExperimentalTitleMetadata * experimentalTitleMetadata; 
@property (nonatomic,readonly) BOOL webEmbedsEnabled; 
@property (nonatomic,copy,readonly) FCIssue * masterIssue; 
@property (getter=isIssueOnly,nonatomic,readonly) BOOL issueOnly; 
@property (nonatomic,readonly) BOOL showBundleSoftPaywall; 
@property (nonatomic,copy,readonly) NSArray * linkedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * linkedIssueIDs; 
@property (nonatomic,copy,readonly) NSString * callToActionText; 
@property (nonatomic,readonly) BOOL isLocalDraft; 
@property (nonatomic,readonly) BOOL useTransparentNavigationBar; 
@property (nonatomic,readonly) FCArticleAudioTrack * narrativeTrack; 
@property (nonatomic,readonly) FCArticleAudioTrack * narrativeTrackSample; 
@property (nonatomic,readonly) NSString * narrativeTrackTextRanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * feedID; 
@property (nonatomic,readonly) unsigned long long order; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) unsigned long long publishDateMilliseconds; 
@property (nonatomic,readonly) unsigned long long feedHalfLifeMilliseconds; 
@property (getter=isFromBlockedStorefront,nonatomic,readonly) BOOL fromBlockedStorefront; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) long long publisherArticleVersion; 
@property (nonatomic,readonly) BOOL canBePurchased; 
@property (nonatomic,copy,readonly) NSString * sourceFeedID; 
@property (nonatomic,copy,readonly) NSString * itemID; 
@property (nonatomic,readonly) unsigned long long halfLife; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,readonly) BOOL hasGlobalUserFeedback; 
@property (getter=isANF,nonatomic,readonly) BOOL anf; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * publisherCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * globalConversionStats; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * publisherConversionStats; 
@property (nonatomic,readonly) long long bodyTextLength; 
@property (nonatomic,readonly) BOOL isFeatured; 
@property (nonatomic,readonly) BOOL hasAudioTrack; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVector; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVectorAlt; 
-(FCHeadlineThumbnail *)thumbnailUltraHQ;
-(NSString *)identifier;
-(NSString *)primaryAudience;
-(BOOL)isPaid;
-(BOOL)isFromBlockedStorefront;
-(NSString *)sourceChannelID;
-(unsigned long long)contentType;
-(unsigned long long)articleContentType;
-(NSString *)publisherID;
-(unsigned long long)order;
-(BOOL)isFeatureCandidate;
-(double)globalScore;
-(FCHeadlineThumbnail *)thumbnailWidgetLQ;
-(id<FCChannelProviding>)sourceChannel;
-(NSString *)itemID;
-(long long)publisherArticleVersion;
-(NSURL *)videoURL;
-(BOOL)hasThumbnail;
-(unsigned long long)publishDateMilliseconds;
-(long long)feedElementType;
-(NSArray *)iAdCategories;
-(NSString *)surfacedByTopicID;
-(NSArray *)allowedStorefrontIDs;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(NSString *)articleID;
-(BOOL)showMinimalChrome;
-(BOOL)hasVideo;
-(NSString *)localDraftPath;
-(BOOL)isTopStory;
-(NSString *)language;
-(BOOL)showPublisherLogo;
-(FCHeadlineThumbnail *)thumbnailLQ;
-(NSArray *)moreFromPublisherArticleIDs;
-(NSString *)title;
-(NSSet *)surfacedByTagIDs;
-(BOOL)showSubscriptionRequiredText;
-(NSString *)sourceFeedID;
-(NSString *)sponsoredBy;
-(NSString *)surfacedBySectionID;
-(id)thumbnailWidgetTagged;
-(id)thumbnailWidgetHQTagged;
-(NSURL *)contentURL;
-(BOOL)isExplicitContent;
-(unsigned long long)feedOrder;
-(NSString *)videoCallToActionTitle;
-(long long)minimumNewsVersion;
-(id)thumbnailWidgetLQTagged;
-(BOOL)isDisplayingAsNativeAd;
-(BOOL)canBePurchased;
-(NSArray *)topicIDs;
-(NSArray *)iAdSectionIDs;
-(BOOL)isPressRelease;
-(NSString *)titleCompact;
-(FCCoverArt *)coverArt;
-(BOOL)needsRapidUpdates;
-(FCFeedPersonalizedItemScoreProfile *)scoreProfile;
-(BOOL)isBlockedExplicitContent;
-(NSString *)versionIdentifier;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)articleRecirculationConfigJSON;
-(FCHeadlineThumbnail *)thumbnailWidgetHQ;
-(NSArray *)blockedStorefrontIDs;
-(NSString *)referencedArticleID;
-(NSString *)surfacedByChannelID;
-(BOOL)isDraft;
-(BOOL)usesImageOnTopLayout;
-(NSURL *)videoCallToActionURL;
-(CGRect)thumbnailFocalFrame;
-(FCHeadlineThumbnail *)thumbnailMedium;
-(double)globalUserFeedback;
-(NSString *)surfacedByBinID;
-(unsigned long long)halfLife;
-(FCHeadlineThumbnail *)thumbnailWidget;
-(BOOL)hasGlobalUserFeedback;
-(FCHeadlineThumbnail *)thumbnail;
-(NSArray *)iAdKeywords;
-(unsigned long long)topStoryType;
-(BOOL)isSponsored;
-(NSDate *)publishDate;
-(unsigned long long)storyType;
-(NSString *)shortExcerpt;
-(NSString *)accessoryText;
-(NSArray *)publisherSpecifiedArticleIDs;
-(NSString *)sourceName;
-(BOOL)isANF;
-(long long)backendArticleVersion;
-(NSDate *)lastFetchedDate;
-(FCHeadlineThumbnail *)thumbnailHQ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(id<FCNativeAdProviding>)associatedAd;
-(BOOL)isDeleted;
-(NSArray *)relatedArticleIDs;
-(NSString *)clusterID;
-(NSArray *)topics;
-(FCTopStoriesStyleConfiguration *)storyStyle;
-(unsigned long long)feedHalfLifeMilliseconds;
-(NSDate *)displayDate;
-(NSDate *)lastModifiedDate;
-(double)videoDuration;
-(NSString *)feedID;
-(double)tileProminenceScore;
-(BOOL)isFullTrackAvailableToAll;
-(BOOL)isHiddenFromAutoFavorites;
-(BOOL)isHiddenFromFeeds;
-(BOOL)isBoundToContext;
-(id)initWithURL:(id)arg1 title:(id)arg2 shortExcerpt:(id)arg3 publishDate:(id)arg4 sourceName:(id)arg5 ;
-(id)endOfArticleTopicIDs;
@end
