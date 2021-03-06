/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableSample, NSString;

@interface HDCodableCategorySample : PBCodable <HDDecoding, NSCopying> {

	long long _value;
	HDCodableSample* _sample;
	SCD_Struct_HD7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;              //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) long long value;                       //@synthesize value=_value - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableSample *)sample;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasValue;
-(void)setValue:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)value;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSample:(HDCodableSample *)arg1 ;
-(unsigned long long)hash;
-(void)setHasValue:(BOOL)arg1 ;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSample;
@end

