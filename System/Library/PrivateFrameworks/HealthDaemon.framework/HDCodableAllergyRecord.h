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

@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, NSData, HDCodableMedicalRecord, HDCodableAllergyReactionList;

@interface HDCodableAllergyRecord : PBCodable <HDDecoding, NSCopying> {

	HDCodableMedicalCodingList* _allergyCodings;
	NSString* _asserter;
	HDCodableMedicalCoding* _criticalityCoding;
	NSData* _lastOccurenceDate;
	HDCodableMedicalRecord* _medicalRecord;
	NSData* _onsetDate;
	HDCodableAllergyReactionList* _reactions;
	NSData* _recordedDate;
	HDCodableMedicalCoding* _statusCoding;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                   //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasAllergyCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * allergyCodings;              //@synthesize allergyCodings=_allergyCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasOnsetDate; 
@property (nonatomic,retain) NSData * onsetDate;                                       //@synthesize onsetDate=_onsetDate - In the implementation block
@property (nonatomic,readonly) BOOL hasAsserter; 
@property (nonatomic,retain) NSString * asserter;                                      //@synthesize asserter=_asserter - In the implementation block
@property (nonatomic,readonly) BOOL hasReactions; 
@property (nonatomic,retain) HDCodableAllergyReactionList * reactions;                 //@synthesize reactions=_reactions - In the implementation block
@property (nonatomic,readonly) BOOL hasCriticalityCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * criticalityCoding;               //@synthesize criticalityCoding=_criticalityCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasLastOccurenceDate; 
@property (nonatomic,retain) NSData * lastOccurenceDate;                               //@synthesize lastOccurenceDate=_lastOccurenceDate - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordedDate; 
@property (nonatomic,retain) NSData * recordedDate;                                    //@synthesize recordedDate=_recordedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * statusCoding;                    //@synthesize statusCoding=_statusCoding - In the implementation block
-(NSData *)onsetDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(HDCodableAllergyReactionList *)reactions;
-(HDCodableMedicalCoding *)criticalityCoding;
-(NSString *)asserter;
-(HDCodableMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(NSData *)recordedDate;
-(NSData *)lastOccurenceDate;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(HDCodableMedicalCoding *)statusCoding;
-(HDCodableMedicalCodingList *)allergyCodings;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(void)setStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(BOOL)hasMedicalRecord;
-(BOOL)hasStatusCoding;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(void)setAsserter:(NSString *)arg1 ;
-(void)setRecordedDate:(NSData *)arg1 ;
-(BOOL)hasAsserter;
-(BOOL)hasRecordedDate;
-(void)setAllergyCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setOnsetDate:(NSData *)arg1 ;
-(void)setReactions:(HDCodableAllergyReactionList *)arg1 ;
-(void)setCriticalityCoding:(HDCodableMedicalCoding *)arg1 ;
-(void)setLastOccurenceDate:(NSData *)arg1 ;
-(BOOL)hasOnsetDate;
-(BOOL)hasAllergyCodings;
-(BOOL)hasReactions;
-(BOOL)hasCriticalityCoding;
-(BOOL)hasLastOccurenceDate;
@end

