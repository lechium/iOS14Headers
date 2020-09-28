/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDTransitVehiclePositionParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _tripIds;

}

@property (nonatomic,readonly) unsigned long long tripIdsCount; 
@property (nonatomic,readonly) unsigned long long* tripIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned long long)tripIdsCount;
-(void)clearTripIds;
-(unsigned long long)tripIdAtIndex:(unsigned long long)arg1 ;
-(void)setTripIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long*)tripIds;
-(void)dealloc;
-(id)jsonRepresentation;
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
-(void)addTripId:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
@end
