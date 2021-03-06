/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDLensProjection, GEOPDOrientedPosition;

@interface GEOPDCameraMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _textureIds;
	GEOPDLensProjection* _lensProjection;
	GEOPDOrientedPosition* _position;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _cameraNumber;
	int _imageHeight;
	int _imageWidth;
	struct {
		unsigned has_cameraNumber : 1;
		unsigned has_imageHeight : 1;
		unsigned has_imageWidth : 1;
		unsigned read_textureIds : 1;
		unsigned read_lensProjection : 1;
		unsigned read_position : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCameraNumber; 
@property (assign,nonatomic) int cameraNumber; 
@property (assign,nonatomic) BOOL hasImageWidth; 
@property (assign,nonatomic) int imageWidth; 
@property (assign,nonatomic) BOOL hasImageHeight; 
@property (assign,nonatomic) int imageHeight; 
@property (nonatomic,readonly) BOOL hasLensProjection; 
@property (nonatomic,retain) GEOPDLensProjection * lensProjection; 
@property (nonatomic,readonly) BOOL hasPosition; 
@property (nonatomic,retain) GEOPDOrientedPosition * position; 
@property (nonatomic,readonly) unsigned long long textureIdsCount; 
@property (nonatomic,readonly) unsigned* textureIds; 
+(BOOL)isValid:(id)arg1 ;
-(void)setPosition:(GEOPDOrientedPosition *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDLensProjection *)lensProjection;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPosition;
-(void)dealloc;
-(GEOPDOrientedPosition *)position;
-(id)jsonRepresentation;
-(BOOL)hasLensProjection;
-(void)setCameraNumber:(int)arg1 ;
-(int)imageHeight;
-(id)init;
-(void)setImageWidth:(int)arg1 ;
-(void)setHasCameraNumber:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasImageWidth:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)imageWidth;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTextureIds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addTextureId:(unsigned)arg1 ;
-(unsigned long long)textureIdsCount;
-(unsigned*)textureIds;
-(unsigned)textureIdAtIndex:(unsigned long long)arg1 ;
-(void)setImageHeight:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasCameraNumber;
-(id)initWithDictionary:(id)arg1 ;
-(int)cameraNumber;
-(unsigned long long)hash;
-(void)setHasImageHeight:(BOOL)arg1 ;
-(BOOL)hasImageHeight;
-(void)setLensProjection:(GEOPDLensProjection *)arg1 ;
-(id)description;
-(void)clearTextureIds;
-(BOOL)hasImageWidth;
-(id)dictionaryRepresentation;
@end

