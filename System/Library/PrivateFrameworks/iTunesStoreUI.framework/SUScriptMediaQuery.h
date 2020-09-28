/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, MPMediaQuery, NSString;

@interface SUScriptMediaQuery : SUScriptObject {

	NSArray* _collections;
	NSArray* _filterPredicates;
	NSArray* _items;
	BOOL _watchingLibrary;

}

@property (nonatomic,readonly) MPMediaQuery * nativeQuery; 
@property (readonly) NSArray * collections; 
@property (copy) id filterPredicates; 
@property (copy) NSString * groupingType; 
@property (readonly) NSArray * items; 
@property (readonly) NSString * comparisonTypeContains; 
@property (readonly) NSString * comparisonTypeEquals; 
@property (readonly) NSString * groupingTypeAlbum; 
@property (readonly) NSString * groupingTypeAlbumArtist; 
@property (readonly) NSString * groupingTypeArtist; 
@property (readonly) NSString * groupingTypeComposer; 
@property (readonly) NSString * groupingTypeGenre; 
@property (readonly) NSString * groupingTypePlaylist; 
@property (readonly) NSString * groupingTypePodcastTitle; 
@property (readonly) NSString * groupingTypeTitle; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSArray *)items;
-(id)canFilterByProperty:(id)arg1 ;
-(id)filterPredicates;
-(void)setGroupingType:(NSString *)arg1 ;
-(NSString *)groupingType;
-(void)setFilterPredicates:(id)arg1 ;
-(void)addFilterPredicate:(id)arg1 ;
-(void)removeFilterPredicate:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(NSArray *)collections;
-(id)_className;
-(id)scriptAttributeKeys;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)_resetCaches;
-(void)_beginWatchingLibraryIfNecessary;
-(id)makeFilterPredicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3 ;
-(MPMediaQuery *)nativeQuery;
-(NSString *)comparisonTypeContains;
-(NSString *)comparisonTypeEquals;
-(NSString *)groupingTypeAlbum;
-(NSString *)groupingTypeAlbumArtist;
-(NSString *)groupingTypeArtist;
-(NSString *)groupingTypeComposer;
-(NSString *)groupingTypeGenre;
-(NSString *)groupingTypePlaylist;
-(NSString *)groupingTypePodcastTitle;
-(NSString *)groupingTypeTitle;
@end
