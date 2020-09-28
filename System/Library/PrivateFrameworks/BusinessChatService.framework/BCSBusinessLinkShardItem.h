/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BCSBusinessLinkShardItem : PBCodable <NSCopying> {

	long long _count;
	long long _index;
	long long _ttl;
	NSData* _filter;
	SCD_Struct_BC5 _has;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) long long index;               //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) long long count;               //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) long long ttl;                 //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) NSData * filter;               //@synthesize filter=_filter - In the implementation block
-(void)setIndex:(long long)arg1 ;
-(BOOL)hasTtl;
-(NSData *)filter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasIndex;
-(void)setHasTtl:(BOOL)arg1 ;
-(void)setTtl:(long long)arg1 ;
-(long long)index;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(void)setCount:(long long)arg1 ;
-(BOOL)hasFilter;
-(BOOL)hasCount;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)count;
-(void)setHasCount:(BOOL)arg1 ;
-(long long)ttl;
-(void)setFilter:(NSData *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
