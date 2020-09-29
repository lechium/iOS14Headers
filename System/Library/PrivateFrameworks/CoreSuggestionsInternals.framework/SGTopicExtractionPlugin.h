/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/FIAPPlugin.h>

@class SGTopicDissector, NSString;

@interface SGTopicExtractionPlugin : NSObject <FIAPPlugin> {

	SGTopicDissector* _dissector;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)getTextContentFromSearchableItem:(id)arg1 ;
-(NSString *)identifier;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 ;
-(id)_harvestPodcastsIntent:(id)arg1 identifier:(id)arg2 groupIdentifier:(id)arg3 ;
-(id)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 ;
-(id)setup;
-(id)extractionsFromText:(id)arg1 bundleId:(id)arg2 ;
-(id)processSearchableItem:(id)arg1 ;
-(id)initWithTopicDissector:(id)arg1 ;
-(id)init;
-(BOOL)_shouldDeferProcessingSearchableItem:(id)arg1 ;
-(id)extractionsFromSearchableItem:(id)arg1 ;
-(BOOL)interestedInSearchableItem:(id)arg1 ;
-(void)extractAndDonateTopicsForText:(id)arg1 isPlainText:(BOOL)arg2 bundleId:(id)arg3 groupId:(id)arg4 documentId:(id)arg5 contactHandles:(id)arg6 weight:(double)arg7 isOutgoing:(BOOL)arg8 ;
@end
