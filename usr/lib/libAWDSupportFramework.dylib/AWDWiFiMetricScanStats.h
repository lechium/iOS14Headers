/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiMetricScanStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _scanStats;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * scanStats;                //@synthesize scanStats=_scanStats - In the implementation block
+(Class)scanStatsType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setScanStats:(NSMutableArray *)arg1 ;
-(void)addScanStats:(id)arg1 ;
-(unsigned long long)scanStatsCount;
-(void)clearScanStats;
-(id)scanStatsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)scanStats;
@end

