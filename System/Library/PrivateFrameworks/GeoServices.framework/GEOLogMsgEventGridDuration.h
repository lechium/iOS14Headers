/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventGridDuration : PBCodable <NSCopying> {

	NSMutableArray* _endStateErrorReasons;
	int _displayType;
	unsigned _durationMs;
	int _endState;
	int _previousState;
	struct {
		unsigned has_displayType : 1;
		unsigned has_durationMs : 1;
		unsigned has_endState : 1;
		unsigned has_previousState : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDurationMs; 
@property (assign,nonatomic) unsigned durationMs; 
@property (assign,nonatomic) BOOL hasEndState; 
@property (assign,nonatomic) int endState; 
@property (nonatomic,retain) NSMutableArray * endStateErrorReasons; 
@property (assign,nonatomic) BOOL hasPreviousState; 
@property (assign,nonatomic) int previousState; 
@property (assign,nonatomic) BOOL hasDisplayType; 
@property (assign,nonatomic) int displayType; 
+(Class)endStateErrorReasonType;
+(BOOL)isValid:(id)arg1 ;
-(void)setDisplayType:(int)arg1 ;
-(unsigned)durationMs;
-(void)addEndStateErrorReason:(id)arg1 ;
-(unsigned long long)endStateErrorReasonsCount;
-(BOOL)hasDurationMs;
-(void)clearEndStateErrorReasons;
-(id)endStateErrorReasonAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPreviousState;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(void)setHasPreviousState:(BOOL)arg1 ;
-(id)previousStateAsString:(int)arg1 ;
-(int)StringAsPreviousState:(id)arg1 ;
-(void)setHasDisplayType:(BOOL)arg1 ;
-(BOOL)hasDisplayType;
-(id)displayTypeAsString:(int)arg1 ;
-(int)StringAsDisplayType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)endState;
-(id)jsonRepresentation;
-(int)previousState;
-(int)displayType;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDurationMs:(unsigned)arg1 ;
-(NSMutableArray *)endStateErrorReasons;
-(void)setEndStateErrorReasons:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setPreviousState:(int)arg1 ;
-(BOOL)hasEndState;
-(void)setHasEndState:(BOOL)arg1 ;
-(id)endStateAsString:(int)arg1 ;
-(int)StringAsEndState:(id)arg1 ;
-(id)description;
-(void)setEndState:(int)arg1 ;
-(id)dictionaryRepresentation;
@end

