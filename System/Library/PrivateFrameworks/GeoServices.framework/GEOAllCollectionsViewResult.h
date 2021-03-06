/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDAllCollectionsViewResult, NSArray;

@interface GEOAllCollectionsViewResult : NSObject {

	GEOPDAllCollectionsViewResult* _allCollectionsViewResult;
	NSArray* _places;

}

@property (nonatomic,readonly) NSArray * collectionIdentifiers; 
@property (nonatomic,readonly) NSArray * resultFilters; 
-(NSArray *)resultFilters;
-(id)initWithAllCollectionsViewResult:(id)arg1 withPlaces:(id)arg2 ;
-(id)initWithAllCollectionsViewResult:(id)arg1 ;
-(NSArray *)collectionIdentifiers;
@end

