/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BLTPBAckInitialSequenceNumberRequest : PBRequest <NSCopying> {

	NSData* _sessionIdentifier;
	unsigned _sessionState;
	BOOL _assert;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasAssert; 
@property (assign,nonatomic) BOOL assert;                              //@synthesize assert=_assert - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSData * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSessionState; 
@property (assign,nonatomic) unsigned sessionState;                    //@synthesize sessionState=_sessionState - In the implementation block
-(NSData *)sessionIdentifier;
-(BOOL)hasSessionState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)sessionState;
-(void)setSessionIdentifier:(NSData *)arg1 ;
-(void)setSessionState:(unsigned)arg1 ;
-(BOOL)assert;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSessionIdentifier;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasSessionState:(BOOL)arg1 ;
-(void)setAssert:(BOOL)arg1 ;
-(void)setHasAssert:(BOOL)arg1 ;
-(BOOL)hasAssert;
@end
