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

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOPDViewportInfo;

@interface GEOPDAutocompleteParametersCollectionOnly : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _publisherIds;
	NSString* _query;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_publisherIds : 1;
		unsigned read_query : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,retain) NSMutableArray * publisherIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)publisherIdType;
+(BOOL)isValid:(id)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)query;
-(GEOPDViewportInfo *)viewportInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasQuery;
-(id)jsonRepresentation;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(NSMutableArray *)publisherIds;
-(BOOL)isEqual:(id)arg1 ;
-(void)addPublisherId:(id)arg1 ;
-(unsigned long long)publisherIdsCount;
-(void)clearPublisherIds;
-(id)publisherIdAtIndex:(unsigned long long)arg1 ;
-(void)setPublisherIds:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
