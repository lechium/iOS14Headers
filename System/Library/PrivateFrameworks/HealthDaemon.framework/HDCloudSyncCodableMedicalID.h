/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalIDData, NSMutableArray;

@interface HDCloudSyncCodableMedicalID : PBCodable <NSCopying> {

	HDCodableMedicalIDData* _medicalIDData;
	NSMutableArray* _medicalIDLogs;

}

@property (nonatomic,readonly) BOOL hasMedicalIDData; 
@property (nonatomic,retain) HDCodableMedicalIDData * medicalIDData;              //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) NSMutableArray * medicalIDLogs;                      //@synthesize medicalIDLogs=_medicalIDLogs - In the implementation block
+(Class)medicalIDLogsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMedicalIDData:(HDCodableMedicalIDData *)arg1 ;
-(HDCodableMedicalIDData *)medicalIDData;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addMedicalIDLogs:(id)arg1 ;
-(unsigned long long)medicalIDLogsCount;
-(void)clearMedicalIDLogs;
-(id)medicalIDLogsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMedicalIDData;
-(NSMutableArray *)medicalIDLogs;
-(void)setMedicalIDLogs:(NSMutableArray *)arg1 ;
@end
