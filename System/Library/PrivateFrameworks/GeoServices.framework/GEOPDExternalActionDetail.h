/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDExternalActionDetail : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _actionLabel;
	NSString* _actionUrlComponent;
	NSString* _actionUrlVerb;
	NSString* _logoId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_actionLabel : 1;
		unsigned read_actionUrlComponent : 1;
		unsigned read_actionUrlVerb : 1;
		unsigned read_logoId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasActionLabel; 
@property (nonatomic,retain) NSString * actionLabel; 
@property (nonatomic,readonly) BOOL hasLogoId; 
@property (nonatomic,retain) NSString * logoId; 
@property (nonatomic,readonly) BOOL hasActionUrlComponent; 
@property (nonatomic,retain) NSString * actionUrlComponent; 
@property (nonatomic,readonly) BOOL hasActionUrlVerb; 
@property (nonatomic,retain) NSString * actionUrlVerb; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)logoId;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasLogoId;
-(void)setLogoId:(NSString *)arg1 ;
-(NSString *)actionLabel;
-(NSString *)actionUrlVerb;
-(void)setActionLabel:(NSString *)arg1 ;
-(void)setActionUrlVerb:(NSString *)arg1 ;
-(BOOL)hasActionLabel;
-(BOOL)hasActionUrlVerb;
-(id)jsonRepresentation;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasActionUrlComponent;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setActionUrlComponent:(NSString *)arg1 ;
-(NSString *)actionUrlComponent;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

