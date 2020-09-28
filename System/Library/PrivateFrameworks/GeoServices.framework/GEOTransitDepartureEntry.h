/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitDepartureEntry : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _tripMuid;
	unsigned _departureTime;
	struct {
		unsigned has_tripMuid : 1;
		unsigned has_departureTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTripMuid; 
@property (assign,nonatomic) unsigned long long tripMuid; 
@property (assign,nonatomic) BOOL hasDepartureTime; 
@property (assign,nonatomic) unsigned departureTime; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)departureTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDepartureTime;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)tripMuid;
-(void)setDepartureTime:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setHasDepartureTime:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(void)setTripMuid:(unsigned long long)arg1 ;
-(void)setHasTripMuid:(BOOL)arg1 ;
-(BOOL)hasTripMuid;
-(id)dictionaryRepresentation;
@end
