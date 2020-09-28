/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTSupportOctagonMessage : PBCodable <NSCopying> {

	int _supported;
	SCD_Struct_OT1 _has;

}

@property (assign,nonatomic) BOOL hasSupported; 
@property (assign,nonatomic) int supported;                  //@synthesize supported=_supported - In the implementation block
-(void)setSupported:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)supported;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasSupported:(BOOL)arg1 ;
-(BOOL)hasSupported;
-(id)supportedAsString:(int)arg1 ;
-(int)StringAsSupported:(id)arg1 ;
@end
