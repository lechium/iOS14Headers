/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOCoarseLocationTessellationOptions : PBCodable <NSCopying> {

	SCD_Struct_GE17* _zoomLevels;
	int _type;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) unsigned long long zoomLevelsCount; 
@property (nonatomic,readonly) unsigned* zoomLevels; 
+(BOOL)isValid:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned*)zoomLevels;
-(void)addZoomLevels:(unsigned)arg1 ;
-(void)clearZoomLevels;
-(void)setZoomLevels:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(int)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)zoomLevelsCount;
-(unsigned)zoomLevelsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

