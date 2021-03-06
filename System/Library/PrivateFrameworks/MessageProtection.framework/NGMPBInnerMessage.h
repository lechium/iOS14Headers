/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NGMPBInnerMessage : PBCodable <NSCopying> {

	unsigned _counter;
	NSData* _debugInfo;
	NSData* _ktGossipData;
	NSData* _message;
	SCD_Struct_NG3 _has;

}

@property (nonatomic,retain) NSData * message;                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL hasCounter; 
@property (assign,nonatomic) unsigned counter;                    //@synthesize counter=_counter - In the implementation block
@property (nonatomic,readonly) BOOL hasKtGossipData; 
@property (nonatomic,retain) NSData * ktGossipData;               //@synthesize ktGossipData=_ktGossipData - In the implementation block
@property (nonatomic,readonly) BOOL hasDebugInfo; 
@property (nonatomic,retain) NSData * debugInfo;                  //@synthesize debugInfo=_debugInfo - In the implementation block
-(unsigned)counter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)attributes;
-(NSData *)debugInfo;
-(void)setDebugInfo:(NSData *)arg1 ;
-(void)setMessage:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCounter:(unsigned)arg1 ;
-(unsigned long long)hash;
-(NSData *)message;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setKtGossipData:(NSData *)arg1 ;
-(BOOL)hasKtGossipData;
-(NSData *)ktGossipData;
-(BOOL)hasCounter;
-(void)setHasCounter:(BOOL)arg1 ;
-(BOOL)hasDebugInfo;
@end

