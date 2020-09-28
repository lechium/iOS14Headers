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

@interface AWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying> {

	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _multipathBytesInCell;
	unsigned long long _multipathBytesInInitial;
	unsigned long long _multipathBytesInWiFi;
	unsigned long long _multipathBytesOutCell;
	unsigned long long _multipathBytesOutInitial;
	unsigned long long _multipathBytesOutWiFi;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                               //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                              //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInCell; 
@property (assign,nonatomic) unsigned long long multipathBytesInCell;                  //@synthesize multipathBytesInCell=_multipathBytesInCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutCell; 
@property (assign,nonatomic) unsigned long long multipathBytesOutCell;                 //@synthesize multipathBytesOutCell=_multipathBytesOutCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesInWiFi;                  //@synthesize multipathBytesInWiFi=_multipathBytesInWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesOutWiFi;                 //@synthesize multipathBytesOutWiFi=_multipathBytesOutWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesInInitial;               //@synthesize multipathBytesInInitial=_multipathBytesInInitial - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesOutInitial;              //@synthesize multipathBytesOutInitial=_multipathBytesOutInitial - In the implementation block
-(void)setHasBytesOut:(BOOL)arg1 ;
-(BOOL)hasBytesIn;
-(BOOL)hasMultipathBytesInInitial;
-(BOOL)hasBytesOut;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(unsigned long long)bytesOut;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)bytesIn;
-(void)setHasMultipathBytesInCell:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasMultipathBytesOutCell:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)multipathBytesInCell;
-(void)setMultipathBytesInWiFi:(unsigned long long)arg1 ;
-(unsigned long long)multipathBytesInWiFi;
-(void)setMultipathBytesOutCell:(unsigned long long)arg1 ;
-(unsigned long long)multipathBytesOutInitial;
-(unsigned long long)multipathBytesOutCell;
-(void)setHasMultipathBytesInInitial:(BOOL)arg1 ;
-(unsigned long long)multipathBytesOutWiFi;
-(void)setHasMultipathBytesOutWiFi:(BOOL)arg1 ;
-(void)setMultipathBytesOutInitial:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)multipathBytesInInitial;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasMultipathBytesOutCell;
-(void)setMultipathBytesInCell:(unsigned long long)arg1 ;
-(BOOL)hasMultipathBytesOutInitial;
-(BOOL)hasMultipathBytesInCell;
-(BOOL)hasMultipathBytesOutWiFi;
-(BOOL)hasMultipathBytesInWiFi;
-(unsigned long long)hash;
-(void)setHasMultipathBytesOutInitial:(BOOL)arg1 ;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(void)setMultipathBytesInInitial:(unsigned long long)arg1 ;
-(void)setMultipathBytesOutWiFi:(unsigned long long)arg1 ;
-(id)description;
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesInWiFi:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end
