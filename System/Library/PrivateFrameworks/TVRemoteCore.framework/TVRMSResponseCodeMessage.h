/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:44 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVRMSResponseCodeMessage : PBCodable <NSCopying> {

	int _responseCode;
	SCD_Struct_TV4 _has;

}

@property (assign,nonatomic) BOOL hasResponseCode; 
@property (assign,nonatomic) int responseCode;                  //@synthesize responseCode=_responseCode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setResponseCode:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)responseCode;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasResponseCode:(BOOL)arg1 ;
-(BOOL)hasResponseCode;
@end
