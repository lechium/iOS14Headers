/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOFormattedString;

@interface GEODrivingWalkingInstruction : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _continueCommands;
	GEOFormattedString* _distance;
	NSMutableArray* _mergeCommands;
	NSMutableArray* _normalCommands;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_continueCommands : 1;
		unsigned read_distance : 1;
		unsigned read_mergeCommands : 1;
		unsigned read_normalCommands : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDistance; 
@property (nonatomic,retain) GEOFormattedString * distance; 
@property (nonatomic,retain) NSMutableArray * normalCommands; 
@property (nonatomic,retain) NSMutableArray * continueCommands; 
@property (nonatomic,retain) NSMutableArray * mergeCommands; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)normalCommandType;
+(Class)continueCommandType;
+(Class)mergeCommandType;
+(BOOL)isValid:(id)arg1 ;
-(void)setDistance:(GEOFormattedString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addNormalCommand:(id)arg1 ;
-(void)addContinueCommand:(id)arg1 ;
-(void)addMergeCommand:(id)arg1 ;
-(unsigned long long)normalCommandsCount;
-(void)clearNormalCommands;
-(NSMutableArray *)mergeCommands;
-(id)normalCommandAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)continueCommandsCount;
-(void)clearContinueCommands;
-(id)continueCommandAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)mergeCommandsCount;
-(void)clearMergeCommands;
-(id)mergeCommandAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)normalCommands;
-(void)setNormalCommands:(NSMutableArray *)arg1 ;
-(NSMutableArray *)continueCommands;
-(void)setContinueCommands:(NSMutableArray *)arg1 ;
-(void)setMergeCommands:(NSMutableArray *)arg1 ;
-(id)jsonRepresentation;
-(id)init;
-(BOOL)hasDistance;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOFormattedString *)distance;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
