/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOPDBrowseCategory, GEOPDAutocompleteEntry, NSArray, NSData, NSString, GEOFeatureStyleAttributes, NSURL;

@interface GEOSearchCategory : NSObject <NSSecureCoding> {

	GEOPDBrowseCategory* _browseCategory;
	GEOPDAutocompleteEntry* _autocompleteEntry;
	NSArray* _subcategories;

}

@property (getter=_suggestionEntryMetadata,nonatomic,readonly) NSData * suggestionEntryMetadata; 
@property (getter=_autocompleteEntry,nonatomic,readonly) GEOPDAutocompleteEntry * autocompleteEntry;              //@synthesize autocompleteEntry=_autocompleteEntry - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSString * shortDisplayString; 
@property (nonatomic,readonly) NSString * popularTokenString; 
@property (nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) NSArray * subcategories;                                                           //@synthesize subcategories=_subcategories - In the implementation block
@property (nonatomic,readonly) id<GEOVenueIdentifier> venueIdentifier; 
@property (nonatomic,readonly) int displayMode; 
@property (nonatomic,readonly) int sortOrder; 
@property (nonatomic,readonly) int subCategoryType; 
@property (getter=isSubCategorySameAsTopLevel,nonatomic,readonly) BOOL subCategorySameAsTopLevel; 
@property (nonatomic,readonly) NSURL * mapsURL; 
+(BOOL)supportsSecureCoding;
+(id)categoryForURL:(id)arg1 ;
+(void)sendFeedbackForVisibleCategories:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(int)sortOrder;
-(int)displayMode;
-(NSURL *)mapsURL;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(NSString *)displayString;
-(id<GEOVenueIdentifier>)venueIdentifier;
-(id)_browseCategory;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)popularTokenString;
-(NSArray *)subcategories;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBrowseCategory:(id)arg1 ;
-(id)_autocompleteEntry;
-(id)serverMetadata;
-(void)sendFeedback;
-(id)initWithAutocompleteEntry:(id)arg1 ;
-(id)_suggestionEntryMetadata;
-(NSString *)shortDisplayString;
-(int)subCategoryType;
-(BOOL)isSubCategorySameAsTopLevel;
@end
