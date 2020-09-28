/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMultiTabsState : PBCodable <NSCopying> {

	unsigned _currentTabIndex;
	unsigned _numberOfTabsOpen;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasNumberOfTabsOpen; 
@property (assign,nonatomic) unsigned numberOfTabsOpen; 
@property (assign,nonatomic) BOOL hasCurrentTabIndex; 
@property (assign,nonatomic) unsigned currentTabIndex; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setNumberOfTabsOpen:(unsigned)arg1 ;
-(void)setCurrentTabIndex:(unsigned)arg1 ;
-(unsigned)numberOfTabsOpen;
-(BOOL)hasNumberOfTabsOpen;
-(void)setHasNumberOfTabsOpen:(BOOL)arg1 ;
-(unsigned)currentTabIndex;
-(void)setHasCurrentTabIndex:(BOOL)arg1 ;
-(BOOL)hasCurrentTabIndex;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
