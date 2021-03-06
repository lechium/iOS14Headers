/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDMDNSResponderResolveStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _domains;
	NSMutableArray* _servers;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * servers;                  //@synthesize servers=_servers - In the implementation block
@property (nonatomic,retain) NSMutableArray * domains;                  //@synthesize domains=_domains - In the implementation block
+(Class)domainType;
+(Class)serverType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSMutableArray *)domains;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSMutableArray *)servers;
-(void)mergeFrom:(id)arg1 ;
-(void)addServer:(id)arg1 ;
-(void)addDomain:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setDomains:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(void)clearDomains;
-(unsigned long long)domainsCount;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setServers:(NSMutableArray *)arg1 ;
-(unsigned long long)serversCount;
-(void)clearServers;
-(id)serverAtIndex:(unsigned long long)arg1 ;
-(id)domainAtIndex:(unsigned long long)arg1 ;
@end

