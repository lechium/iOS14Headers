/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:11 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Extensions/AppleMultitouchSPI.kext/PlugIns/MultitouchHID.plugin/MultitouchHID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MultitouchHID/MultitouchHID-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMultitouchHardwareStatus : PBCodable <NSCopying> {

	SCD_Struct_AW2* _openRows;
	unsigned long long _timestamp;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long openRowsCount; 
@property (nonatomic,readonly) unsigned* openRows; 
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
-(void)addOpenRows:(unsigned)arg1 ;
-(unsigned long long)openRowsCount;
-(void)clearOpenRows;
-(unsigned)openRowsAtIndex:(unsigned long long)arg1 ;
-(unsigned*)openRows;
-(void)setOpenRows:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end
