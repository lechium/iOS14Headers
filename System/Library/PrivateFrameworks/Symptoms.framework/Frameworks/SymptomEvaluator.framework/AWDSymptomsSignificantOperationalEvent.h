/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsSignificantOperationalEvent : PBCodable <NSCopying> {

	long long _errorCode;
	unsigned long long _timestamp;
	NSString* _alternateName;
	int _error;
	NSString* _errorDomain;
	int _name;
	int _status;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) int name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasAlternateName; 
@property (nonatomic,retain) NSString * alternateName;                  //@synthesize alternateName=_alternateName - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                       //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(NSString *)alternateName;
-(void)setAlternateName:(NSString *)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasError:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)status;
-(int)error;
-(void)setErrorCode:(long long)arg1 ;
-(void)setError:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(BOOL)hasError;
-(BOOL)hasName;
-(void)setHasName:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)nameAsString:(int)arg1 ;
-(int)StringAsName:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(int)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(BOOL)hasErrorCode;
-(int)name;
-(void)setHasStatus:(BOOL)arg1 ;
-(long long)errorCode;
-(id)description;
-(id)dictionaryRepresentation;
-(id)errorAsString:(int)arg1 ;
-(int)StringAsError:(id)arg1 ;
-(BOOL)hasAlternateName;
@end
