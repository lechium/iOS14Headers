/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMailError : PBCodable <NSCopying> {

	long long _genericErrorCode;
	int _errorCode;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                           //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasGenericErrorCode; 
@property (assign,nonatomic) long long genericErrorCode;              //@synthesize genericErrorCode=_genericErrorCode - In the implementation block
-(void)setHasErrorCode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasErrorCode;
-(int)errorCode;
-(id)description;
-(id)dictionaryRepresentation;
-(id)errorCodeAsString:(int)arg1 ;
-(int)StringAsErrorCode:(id)arg1 ;
-(void)setGenericErrorCode:(long long)arg1 ;
-(void)setHasGenericErrorCode:(BOOL)arg1 ;
-(BOOL)hasGenericErrorCode;
-(long long)genericErrorCode;
@end

