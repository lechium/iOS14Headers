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

@interface AWDIDSRegistrationAuthenticationParametersReceived : PBCodable <NSCopying> {

	unsigned long long _timeIntervalSinceRequest;
	unsigned long long _timestamp;
	int _error;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                                                //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasTimeIntervalSinceRequest; 
@property (assign,nonatomic) unsigned long long timeIntervalSinceRequest;              //@synthesize timeIntervalSinceRequest=_timeIntervalSinceRequest - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeIntervalSinceRequest:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasError:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)error;
-(void)setError:(int)arg1 ;
-(BOOL)hasError;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasTimeIntervalSinceRequest:(BOOL)arg1 ;
-(BOOL)hasTimeIntervalSinceRequest;
-(unsigned long long)timeIntervalSinceRequest;
@end
