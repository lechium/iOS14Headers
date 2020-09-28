/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterSubclass.h>

@interface GEOVisualLocalizationTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>
+(unsigned char)tileProviderIdentifier;
+(unsigned long long)expiringTilesetsCount;
+(id)locationSensitiveTilesets;
+(SCD_Struct_GE55*)newExpiringTilesets;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)downloadsDataToDisk;
-(SCD_Struct_GE0)kindForTileKey:(const GEOTileKey*)arg1 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
@end
