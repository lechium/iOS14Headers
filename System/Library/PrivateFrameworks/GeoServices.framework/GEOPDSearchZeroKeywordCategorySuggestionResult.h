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

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _categorys;
	NSMutableArray* _zeroKeywordEntrys;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_categorys : 1;
		unsigned read_zeroKeywordEntrys : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * categorys; 
@property (nonatomic,retain) NSMutableArray * zeroKeywordEntrys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)categoryType;
+(BOOL)isValid:(id)arg1 ;
+(Class)zeroKeywordEntryType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(void)clearCategorys;
-(BOOL)readFrom:(id)arg1 ;
-(void)addCategory:(id)arg1 ;
-(id)jsonRepresentation;
-(NSMutableArray *)categorys;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)categorysCount;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSMutableArray *)zeroKeywordEntrys;
-(void)addZeroKeywordEntry:(id)arg1 ;
-(unsigned long long)zeroKeywordEntrysCount;
-(void)clearZeroKeywordEntrys;
-(id)zeroKeywordEntryAtIndex:(unsigned long long)arg1 ;
-(void)setZeroKeywordEntrys:(NSMutableArray *)arg1 ;
@end

