/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SGDCKTimeRange : PBCodable <NSCopying> {

	double _end;
	long long _endUTCOffsetSeconds;
	double _start;
	long long _startUTCOffsetSeconds;
	BOOL _floating;
	SCD_Struct_SG5 _has;

}

@property (assign,nonatomic) BOOL hasStart; 
@property (assign,nonatomic) double start;                                 //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) BOOL hasEnd; 
@property (assign,nonatomic) double end;                                   //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) BOOL hasStartUTCOffsetSeconds; 
@property (assign,nonatomic) long long startUTCOffsetSeconds;              //@synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasEndUTCOffsetSeconds; 
@property (assign,nonatomic) long long endUTCOffsetSeconds;                //@synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasFloating; 
@property (assign,nonatomic) BOOL floating;                                //@synthesize floating=_floating - In the implementation block
-(double)end;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)floating;
-(BOOL)hasEnd;
-(void)writeTo:(id)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStart:(double)arg1 ;
-(void)setHasStart:(BOOL)arg1 ;
-(void)setEnd:(double)arg1 ;
-(double)start;
-(BOOL)hasStart;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)startUTCOffsetSeconds;
-(long long)endUTCOffsetSeconds;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setHasEnd:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStartUTCOffsetSeconds:(long long)arg1 ;
-(void)setHasStartUTCOffsetSeconds:(BOOL)arg1 ;
-(BOOL)hasStartUTCOffsetSeconds;
-(void)setEndUTCOffsetSeconds:(long long)arg1 ;
-(void)setHasEndUTCOffsetSeconds:(BOOL)arg1 ;
-(BOOL)hasEndUTCOffsetSeconds;
-(void)setHasFloating:(BOOL)arg1 ;
-(BOOL)hasFloating;
@end

