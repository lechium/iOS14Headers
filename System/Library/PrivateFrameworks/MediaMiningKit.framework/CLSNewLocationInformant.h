/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSInformant.h>

@interface CLSNewLocationInformant : CLSInformant
+(BOOL)doesRegion:(id)arg1 intersectOtherRegion:(id)arg2 ;
+(id)businessItemsForRegion:(id)arg1 ;
+(id)familyIdentifier;
+(id)createPlaceForBusinessItem:(id)arg1 ;
+(id)regionOfInterestCategories;
+(id)areaOfInterestCategories;
+(id)classIdentifier;
+(id)natureCategories;
+(BOOL)doesRegion:(id)arg1 containLocation:(id)arg2 ;
+(id)filterBusinessItems:(id)arg1 forCategories:(id)arg2 subCategories:(id)arg3 blacklistCategories:(id)arg4 ;
+(id)searchBusinessItemsAtCoordinate:(CLLocationCoordinate2D)arg1 forCategories:(id)arg2 precision:(double)arg3 inCache:(id)arg4 ;
+(id)shiftedLocationFromOriginalLocation:(id)arg1 ;
+(BOOL)location:(CLLocationCoordinate2D)arg1 isCloseToLocation:(CLLocationCoordinate2D)arg2 ;
+(CLLocationCoordinate2D)shiftedCoordinatesFromOriginalCoordinates:(CLLocationCoordinate2D)arg1 ;
+(id)informantDependenciesIdentifiers;
+(id)pointOfInterestCategories;
+(BOOL)location:(CLLocationCoordinate2D)arg1 isFarFromLocation:(CLLocationCoordinate2D)arg2 ;
+(id)_categoriesDescriptionFromCategories:(id)arg1 ;
-(id)_regionOfInterestTraits;
-(id)locationAreaOfInterestCluesForInputClue:(id)arg1 ;
-(id)locationPointOfInterestCluesForInputClue:(id)arg1 ;
-(id)gatherCluesForInvestigation:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_pointOfInterestTraits;
-(id)outputLocationCluesForOuputClueKey:(id)arg1 inputClue:(id)arg2 region:(id)arg3 traits:(id)arg4 categories:(id)arg5 exactMatch:(BOOL)arg6 precision:(double)arg7 cache:(id)arg8 ;
-(id)locationRegionOfInterestCluesForInputClue:(id)arg1 ;
-(id)_regionOfInterestCategories;
@end

