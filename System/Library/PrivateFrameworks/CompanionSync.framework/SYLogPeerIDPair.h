/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SYLogPeerIDPair : PBCodable <NSCopying> {

	NSString* _generationID;
	NSString* _peerID;

}

@property (nonatomic,retain) NSString * peerID;                    //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) BOOL hasGenerationID; 
@property (nonatomic,retain) NSString * generationID;              //@synthesize generationID=_generationID - In the implementation block
-(NSString *)generationID;
-(NSString *)peerID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setPeerID:(NSString *)arg1 ;
-(void)setGenerationID:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasGenerationID;
@end

