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

@class PBUnknownFields, NSMutableArray;

@interface GEOPDAmenities : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _amenitys;

}

@property (nonatomic,retain) NSMutableArray * amenitys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)amenityType;
+(id)amentiesForPlaceData:(id)arg1 ;
-(BOOL)hasAmenityType:(int)arg1 ;
-(BOOL)valueForAmenityType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addAmenity:(id)arg1 ;
-(void)setAmenitys:(NSMutableArray *)arg1 ;
-(unsigned long long)amenitysCount;
-(void)clearAmenitys;
-(id)amenityAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(NSMutableArray *)amenitys;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

