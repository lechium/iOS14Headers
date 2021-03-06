/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRRegisterGameControllerResponseMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _controllerID;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasControllerID; 
@property (assign,nonatomic) unsigned long long controllerID;              //@synthesize controllerID=_controllerID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasControllerID:(BOOL)arg1 ;
-(void)setControllerID:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasControllerID;
-(unsigned long long)controllerID;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

