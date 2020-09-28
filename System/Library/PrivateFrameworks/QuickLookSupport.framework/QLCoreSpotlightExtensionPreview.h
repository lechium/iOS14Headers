/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookSupport/QLExtensionPreview.h>

@class NSString, NSURL;

@interface QLCoreSpotlightExtensionPreview : QLExtensionPreview {

	NSString* _searchableItemUniqueIdentifier;
	NSString* _query;
	NSString* _searchableItemTitle;
	NSURL* _searchableItemURL;

}

@property (copy) NSString * searchableItemUniqueIdentifier;              //@synthesize searchableItemUniqueIdentifier=_searchableItemUniqueIdentifier - In the implementation block
@property (copy) NSString * query;                                       //@synthesize query=_query - In the implementation block
@property (copy) NSString * searchableItemTitle;                         //@synthesize searchableItemTitle=_searchableItemTitle - In the implementation block
@property (copy) NSURL * searchableItemURL;                              //@synthesize searchableItemURL=_searchableItemURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)query;
-(id)initWithCoder:(id)arg1 ;
-(void)setSearchableItemUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)searchableItemUniqueIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSearchableItemURL:(NSURL *)arg1 ;
-(void)setSearchableItemTitle:(NSString *)arg1 ;
-(NSString *)searchableItemTitle;
-(NSURL *)searchableItemURL;
-(id)initWithQuery:(id)arg1 searchableItemURL:(id)arg2 searchableItemTitle:(id)arg3 searchableItemUUID:(id)arg4 description:(id)arg5 ;
@end
