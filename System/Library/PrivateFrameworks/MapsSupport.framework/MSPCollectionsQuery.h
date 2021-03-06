/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/NewMSPQuery.h>

@class MSPFavoritesContainer, NewMSPQuery, NSArray;

@interface MSPCollectionsQuery : NewMSPQuery {

	MSPFavoritesContainer* _itemContainer;
	NewMSPQuery* _itemQuery;

}

@property (readonly) NSArray * contents; 
@property (nonatomic,retain) MSPFavoritesContainer * itemContainer;              //@synthesize itemContainer=_itemContainer - In the implementation block
@property (nonatomic,retain) NewMSPQuery * itemQuery;                            //@synthesize itemQuery=_itemQuery - In the implementation block
-(id)initWithCollectionsContainer:(id)arg1 itemContainer:(id)arg2 delegate:(id)arg3 filteredWithBlock:(/*^block*/id)arg4 ;
-(void)removeObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)contents;
-(NewMSPQuery *)itemQuery;
-(void)removeObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedContents:(id)arg1 ;
-(void)addOrUpdateObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2 ;
-(void)setItemQuery:(NewMSPQuery *)arg1 ;
-(id)initWithCollectionsContainer:(id)arg1 itemContainer:(id)arg2 delegate:(id)arg3 ;
-(void)processContentsUsingBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)subQueryFilteredWithBlock:(/*^block*/id)arg1 ;
-(void)setItemContainer:(MSPFavoritesContainer *)arg1 ;
-(void)addOrUpdateObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MSPFavoritesContainer *)itemContainer;
@end

