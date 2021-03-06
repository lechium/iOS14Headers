/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoBalanceReminderForBalanceAndPassResponse : PBCodable <NSCopying> {

	NSData* _balanceReminderBytes;
	NSData* _errorData;
	BOOL _pending;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasBalanceReminderBytes; 
@property (nonatomic,retain) NSData * balanceReminderBytes;               //@synthesize balanceReminderBytes=_balanceReminderBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                          //@synthesize errorData=_errorData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)pending;
-(id)description;
-(id)dictionaryRepresentation;
-(NSData *)errorData;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setBalanceReminderBytes:(NSData *)arg1 ;
-(BOOL)hasBalanceReminderBytes;
-(NSData *)balanceReminderBytes;
@end

