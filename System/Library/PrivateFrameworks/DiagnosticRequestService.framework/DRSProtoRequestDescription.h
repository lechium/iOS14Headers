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

@class NSString, NSData;

@interface DRSProtoRequestDescription : PBCodable <NSCopying> {

	unsigned long long _requestTime;
	NSString* _build;
	NSData* _contextDictionaryData;
	NSString* _issueCategory;
	NSString* _teamId;
	SCD_Struct_DR1 _has;

}

@property (nonatomic,readonly) BOOL hasTeamId; 
@property (nonatomic,retain) NSString * teamId;                            //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueCategory; 
@property (nonatomic,retain) NSString * issueCategory;                     //@synthesize issueCategory=_issueCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasContextDictionaryData; 
@property (nonatomic,retain) NSData * contextDictionaryData;               //@synthesize contextDictionaryData=_contextDictionaryData - In the implementation block
@property (assign,nonatomic) BOOL hasRequestTime; 
@property (assign,nonatomic) unsigned long long requestTime;               //@synthesize requestTime=_requestTime - In the implementation block
@property (nonatomic,readonly) BOOL hasBuild; 
@property (nonatomic,retain) NSString * build;                             //@synthesize build=_build - In the implementation block
-(void)setRequestTime:(unsigned long long)arg1 ;
-(void)setHasRequestTime:(BOOL)arg1 ;
-(unsigned long long)requestTime;
-(BOOL)hasRequestTime;
-(NSString *)build;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)teamId;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasBuild;
-(BOOL)readFrom:(id)arg1 ;
-(void)setBuild:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)issueCategory;
-(void)setTeamId:(NSString *)arg1 ;
-(BOOL)hasTeamId;
-(void)setIssueCategory:(NSString *)arg1 ;
-(NSData *)contextDictionaryData;
-(void)setContextDictionaryData:(NSData *)arg1 ;
-(BOOL)hasIssueCategory;
-(BOOL)hasContextDictionaryData;
@end
