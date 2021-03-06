/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, WLKArtworkVariantListing, NSNumber, NSArray, WLKVideo, NSDictionary, WLKContentRating;

@interface WLKBasicContentMetadata : NSObject {

	NSString* _contentTypeString;
	BOOL _isEvod;
	BOOL _appleOriginal;
	unsigned long long _contentType;
	NSString* _canonicalID;
	NSURL* _tvAppDeeplinkURL;
	NSString* _title;
	NSString* _shortTitle;
	NSString* _descriptiveText;
	WLKArtworkVariantListing* _images;
	NSNumber* _commonSenseRecommendedAge;
	NSArray* _categories;
	NSArray* _genres;
	WLKVideo* _backgroundVideo;
	NSArray* _trailers;
	NSDictionary* _rolesSummary;
	WLKContentRating* _contentRating;

}

@property (nonatomic,readonly) unsigned long long contentType;                         //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                            //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * tvAppDeeplinkURL;                          //@synthesize tvAppDeeplinkURL=_tvAppDeeplinkURL - In the implementation block
@property (nonatomic,readonly) BOOL isEvod;                                            //@synthesize isEvod=_isEvod - In the implementation block
@property (getter=isAppleOriginal,nonatomic,readonly) BOOL appleOriginal;              //@synthesize appleOriginal=_appleOriginal - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortTitle;                             //@synthesize shortTitle=_shortTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptiveText;                        //@synthesize descriptiveText=_descriptiveText - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariantListing * images;                      //@synthesize images=_images - In the implementation block
@property (nonatomic,readonly) NSNumber * commonSenseRecommendedAge;                   //@synthesize commonSenseRecommendedAge=_commonSenseRecommendedAge - In the implementation block
@property (nonatomic,copy,readonly) NSArray * categories;                              //@synthesize categories=_categories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * genres;                                  //@synthesize genres=_genres - In the implementation block
@property (nonatomic,readonly) WLKVideo * backgroundVideo;                             //@synthesize backgroundVideo=_backgroundVideo - In the implementation block
@property (nonatomic,readonly) NSArray * trailers;                                     //@synthesize trailers=_trailers - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * rolesSummary;                       //@synthesize rolesSummary=_rolesSummary - In the implementation block
@property (nonatomic,readonly) WLKContentRating * contentRating;                       //@synthesize contentRating=_contentRating - In the implementation block
+(unsigned long long)contentTypeForString:(id)arg1 ;
+(Class)_classForContentType:(unsigned long long)arg1 ;
-(WLKArtworkVariantListing *)images;
-(unsigned long long)contentType;
-(BOOL)isEvod;
-(NSArray *)genres;
-(NSString *)title;
-(NSURL *)tvAppDeeplinkURL;
-(id)init;
-(NSString *)descriptiveText;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)canonicalID;
-(NSString *)shortTitle;
-(NSArray *)categories;
-(WLKContentRating *)contentRating;
-(id)description;
-(NSNumber *)commonSenseRecommendedAge;
-(BOOL)isAppleOriginal;
-(WLKVideo *)backgroundVideo;
-(NSArray *)trailers;
-(NSDictionary *)rolesSummary;
@end

