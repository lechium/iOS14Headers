/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEORPProblemStatusResponse : PBCodable <NSCopying> {

	NSMutableArray* _problemStatus;
	int _statusCode;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * problemStatus; 
+(Class)problemStatusType;
+(BOOL)isValid:(id)arg1 ;
-(int)statusCode;
-(void)setStatusCode:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addProblemStatus:(id)arg1 ;
-(unsigned long long)problemStatusCount;
-(void)clearProblemStatus;
-(id)problemStatusAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)problemStatus;
-(void)setProblemStatus:(NSMutableArray *)arg1 ;
-(id)jsonRepresentation;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(id)statusCodeAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStatusCode;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

