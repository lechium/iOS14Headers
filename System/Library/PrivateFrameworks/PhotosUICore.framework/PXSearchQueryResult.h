/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PXSearchQuery, NSArray, PHFetchResult;

@interface PXSearchQueryResult : NSObject {

	PXSearchQuery* _searchQuery;
	NSArray* _searchResults;
	NSArray* _searchAssetResults;
	PHFetchResult* _curatedAssetsFetchResult;
	NSArray* _searchSuggestions;
	NSArray* _reloadItemIdentifiers;

}

@property (nonatomic,copy,readonly) PXSearchQuery * searchQuery;                           //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchResults;                               //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchAssetResults;                          //@synthesize searchAssetResults=_searchAssetResults - In the implementation block
@property (nonatomic,copy,readonly) PHFetchResult * curatedAssetsFetchResult;              //@synthesize curatedAssetsFetchResult=_curatedAssetsFetchResult - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchSuggestions;                           //@synthesize searchSuggestions=_searchSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reloadItemIdentifiers;                       //@synthesize reloadItemIdentifiers=_reloadItemIdentifiers - In the implementation block
-(PXSearchQuery *)searchQuery;
-(id)initEmptySearchQueryResultForQuery:(id)arg1 ;
-(PHFetchResult *)curatedAssetsFetchResult;
-(NSArray *)reloadItemIdentifiers;
-(id)initWithSearchQuery:(id)arg1 searchResults:(id)arg2 searchAssetResults:(id)arg3 curatedAssetsFetchResult:(id)arg4 searchSuggestions:(id)arg5 reloadItemIdentifiers:(id)arg6 ;
-(NSArray *)searchAssetResults;
-(NSArray *)searchSuggestions;
-(NSArray *)searchResults;
@end

