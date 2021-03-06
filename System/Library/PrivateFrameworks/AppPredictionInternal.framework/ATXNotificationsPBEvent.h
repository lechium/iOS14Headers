/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXNotificationsPBEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _event;
	int _pos;
	BOOL _isOffscreen;
	BOOL _topOfPile;
	SCD_Struct_AT8 _has;

}

@property (assign,nonatomic) BOOL hasEvent; 
@property (assign,nonatomic) int event;                                 //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsOffscreen; 
@property (assign,nonatomic) BOOL isOffscreen;                          //@synthesize isOffscreen=_isOffscreen - In the implementation block
@property (assign,nonatomic) BOOL hasPos; 
@property (assign,nonatomic) int pos;                                   //@synthesize pos=_pos - In the implementation block
@property (assign,nonatomic) BOOL hasTopOfPile; 
@property (assign,nonatomic) BOOL topOfPile;                            //@synthesize topOfPile=_topOfPile - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setEvent:(int)arg1 ;
-(int)event;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)topOfPile;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTopOfPile:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasPos;
-(BOOL)hasEvent;
-(id)eventAsString:(int)arg1 ;
-(int)StringAsEvent:(id)arg1 ;
-(void)setHasEvent:(BOOL)arg1 ;
-(void)setPos:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isOffscreen;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(int)pos;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setIsOffscreen:(BOOL)arg1 ;
-(void)setHasIsOffscreen:(BOOL)arg1 ;
-(BOOL)hasIsOffscreen;
-(void)setHasPos:(BOOL)arg1 ;
-(void)setHasTopOfPile:(BOOL)arg1 ;
-(BOOL)hasTopOfPile;
@end

