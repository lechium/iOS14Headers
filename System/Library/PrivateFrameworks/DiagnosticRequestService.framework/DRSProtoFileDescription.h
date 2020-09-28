/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DRSProtoFileDescription : PBCodable <NSCopying> {

	unsigned long long _logSize;
	NSString* _fileName;
	NSString* _logType;
	SCD_Struct_DR1 _has;

}

@property (nonatomic,readonly) BOOL hasLogType; 
@property (nonatomic,retain) NSString * logType;                      //@synthesize logType=_logType - In the implementation block
@property (assign,nonatomic) BOOL hasLogSize; 
@property (assign,nonatomic) unsigned long long logSize;              //@synthesize logSize=_logSize - In the implementation block
@property (nonatomic,readonly) BOOL hasFileName; 
@property (nonatomic,retain) NSString * fileName;                     //@synthesize fileName=_fileName - In the implementation block
-(NSString *)logType;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)hasFileName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)logSize;
-(BOOL)hasLogType;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setLogSize:(unsigned long long)arg1 ;
-(void)setLogType:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasLogSize:(BOOL)arg1 ;
-(BOOL)hasLogSize;
@end
