/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOResourceFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _scales;
	SCD_Struct_GE90* _scenarios;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_scales : 1;
		unsigned read_scenarios : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long scalesCount; 
@property (nonatomic,readonly) int* scales; 
@property (nonatomic,readonly) unsigned long long scenariosCount; 
@property (nonatomic,readonly) int* scenarios; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)scenariosAsString:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addScenario:(int)arg1 ;
-(int)StringAsScenarios:(id)arg1 ;
-(void)dealloc;
-(id)jsonRepresentation;
-(void)clearScenarios;
-(unsigned long long)scenariosCount;
-(id)init;
-(int)scaleAtIndex:(unsigned long long)arg1 ;
-(void)setScales:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addScale:(int)arg1 ;
-(id)scalesAsString:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setScenarios:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)scales;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)StringAsScales:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)scalesCount;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(int)scenarioAtIndex:(unsigned long long)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(int*)scenarios;
-(id)dictionaryRepresentation;
-(void)clearScales;
@end

