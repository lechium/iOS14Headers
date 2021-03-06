/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutinePersistenceMirroringTickleFight : PBCodable <NSCopying> {

	SCD_Struct_AW15* _tickleTimes;
	unsigned long long _timestamp;
	int _operationType;
	int _recordType;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long tickleTimesCount; 
@property (nonatomic,readonly) int* tickleTimes; 
@property (assign,nonatomic) BOOL hasRecordType; 
@property (assign,nonatomic) int recordType;                                     //@synthesize recordType=_recordType - In the implementation block
@property (assign,nonatomic) BOOL hasOperationType; 
@property (assign,nonatomic) int operationType;                                  //@synthesize operationType=_operationType - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)operationType;
-(void)dealloc;
-(unsigned long long)timestamp;
-(BOOL)hasRecordType;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasRecordType:(BOOL)arg1 ;
-(void)setOperationType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRecordType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(int)recordType;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(unsigned long long)tickleTimesCount;
-(void)clearTickleTimes;
-(int)tickleTimesAtIndex:(unsigned long long)arg1 ;
-(void)addTickleTimes:(int)arg1 ;
-(int*)tickleTimes;
-(void)setTickleTimes:(int*)arg1 count:(unsigned long long)arg2 ;
@end

