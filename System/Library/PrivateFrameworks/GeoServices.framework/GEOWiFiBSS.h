/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLatLngE7, GEOLatLng, NSMutableArray;

@interface GEOWiFiBSS : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _attributes;
	NSString* _identifier;
	GEOLatLngE7* _latLngE7;
	GEOLatLng* _location;
	NSMutableArray* _qualities;
	long long _uniqueIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_uniqueIdentifier : 1;
		unsigned read_attributes : 1;
		unsigned read_identifier : 1;
		unsigned read_latLngE7 : 1;
		unsigned read_location : 1;
		unsigned read_qualities : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (nonatomic,readonly) unsigned long long attributesCount; 
@property (nonatomic,readonly) int* attributes; 
@property (nonatomic,retain) NSMutableArray * qualities; 
@property (assign,nonatomic) BOOL hasUniqueIdentifier; 
@property (assign,nonatomic) long long uniqueIdentifier; 
@property (nonatomic,readonly) BOOL hasLatLngE7; 
@property (nonatomic,retain) GEOLatLngE7 * latLngE7; 
+(BOOL)isValid:(id)arg1 ;
+(Class)qualitiesType;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(int*)attributes;
-(GEOLatLng *)location;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(id)jsonRepresentation;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)clearAttributes;
-(id)init;
-(GEOLatLngE7 *)latLngE7;
-(unsigned long long)attributesCount;
-(long long)uniqueIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)addAttributes:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableArray *)qualities;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)addQualities:(id)arg1 ;
-(void)setLatLngE7:(GEOLatLngE7 *)arg1 ;
-(int)attributesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)qualitiesCount;
-(void)clearQualities;
-(id)qualitiesAtIndex:(unsigned long long)arg1 ;
-(void)setAttributes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)attributesAsString:(int)arg1 ;
-(int)StringAsAttributes:(id)arg1 ;
-(void)setQualities:(NSMutableArray *)arg1 ;
-(BOOL)hasLatLngE7;
-(void)setHasUniqueIdentifier:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(id)description;
-(id)dictionaryRepresentation;
@end
