/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TinCanShared/TinCanShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDTinCanInCallEvent : PBCodable <NSCopying> {

	long long _offsetTimeMs;
	unsigned _eventType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasOffsetTimeMs; 
@property (assign,nonatomic) long long offsetTimeMs;              //@synthesize offsetTimeMs=_offsetTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                  //@synthesize eventType=_eventType - In the implementation block
-(void)setEventType:(unsigned)arg1 ;
-(BOOL)hasEventType;
-(void)setHasEventType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)eventType;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setOffsetTimeMs:(long long)arg1 ;
-(void)setHasOffsetTimeMs:(BOOL)arg1 ;
-(BOOL)hasOffsetTimeMs;
-(long long)offsetTimeMs;
@end
