/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEORPIncidentLocation : PBCodable <NSCopying> {

	GEOLatLng* _latLng;
	unsigned _zoomLevel;
	struct {
		unsigned has_zoomLevel : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng; 
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) unsigned zoomLevel; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(GEOLatLng *)latLng;
-(id)jsonRepresentation;
-(BOOL)hasZoomLevel;
-(unsigned)zoomLevel;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasLatLng;
-(void)readAll:(BOOL)arg1 ;
-(void)setZoomLevel:(unsigned)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(id)description;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end
