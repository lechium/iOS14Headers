/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYMessageHeader, NSString;

@interface SYSyncSessionRestartRequest : PBRequest <NSCopying> {

	SYMessageHeader* _header;
	NSString* _sessionID;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SYMessageHeader *)header;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(NSString *)sessionID;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

