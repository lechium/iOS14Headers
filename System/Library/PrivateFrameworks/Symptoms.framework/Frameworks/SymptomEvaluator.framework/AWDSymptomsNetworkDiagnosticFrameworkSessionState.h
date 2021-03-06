/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkDiagnosticFrameworkSessionState : PBCodable <NSCopying> {

	unsigned long long _stateHeldForSecs;
	unsigned long long _timestamp;
	int _inState;
	NSString* _symptomName;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInState; 
@property (assign,nonatomic) int inState;                                      //@synthesize inState=_inState - In the implementation block
@property (assign,nonatomic) BOOL hasStateHeldForSecs; 
@property (assign,nonatomic) unsigned long long stateHeldForSecs;              //@synthesize stateHeldForSecs=_stateHeldForSecs - In the implementation block
@property (nonatomic,readonly) BOOL hasSymptomName; 
@property (nonatomic,retain) NSString * symptomName;                           //@synthesize symptomName=_symptomName - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setSymptomName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)inState;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)symptomName;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setInState:(int)arg1 ;
-(void)setStateHeldForSecs:(unsigned long long)arg1 ;
-(void)setHasInState:(BOOL)arg1 ;
-(BOOL)hasInState;
-(id)inStateAsString:(int)arg1 ;
-(int)StringAsInState:(id)arg1 ;
-(void)setHasStateHeldForSecs:(BOOL)arg1 ;
-(BOOL)hasStateHeldForSecs;
-(BOOL)hasSymptomName;
-(unsigned long long)stateHeldForSecs;
@end

