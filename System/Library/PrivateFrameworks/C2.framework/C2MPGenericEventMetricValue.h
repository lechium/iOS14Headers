/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class C2MPError, NSString;

@interface C2MPGenericEventMetricValue : PBCodable <NSCopying> {

	unsigned long long _dateValue;
	double _doubleValue;
	C2MPError* _errorValue;
	NSString* _stringValue;
	SCD_Struct_C21 _has;

}

@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                    //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                        //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasDateValue; 
@property (assign,nonatomic) unsigned long long dateValue;              //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorValue; 
@property (nonatomic,retain) C2MPError * errorValue;                    //@synthesize errorValue=_errorValue - In the implementation block
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(unsigned long long)dateValue;
-(void)setDoubleValue:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDateValue:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(double)doubleValue;
-(BOOL)hasDoubleValue;
-(BOOL)hasDateValue;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)stringValue;
-(BOOL)hasStringValue;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setErrorValue:(C2MPError *)arg1 ;
-(void)setHasDateValue:(BOOL)arg1 ;
-(BOOL)hasErrorValue;
-(C2MPError *)errorValue;
@end
