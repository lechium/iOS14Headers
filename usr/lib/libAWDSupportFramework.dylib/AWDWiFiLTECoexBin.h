/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiLTECoexBin : PBCodable <NSCopying> {

	unsigned long long _ctsnotrxafterrts;
	unsigned long long _rxframe;
	unsigned long long _rxrtry;
	unsigned long long _txassocreq;
	unsigned long long _txassocrsp;
	unsigned long long _txdeauth;
	unsigned long long _txframe;
	unsigned long long _txnocts;
	unsigned long long _txreassocreq;
	unsigned long long _txreassocrsp;
	unsigned long long _txretrans;
	unsigned long long _txrts;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasRxframe; 
@property (assign,nonatomic) unsigned long long rxframe;                       //@synthesize rxframe=_rxframe - In the implementation block
@property (assign,nonatomic) BOOL hasTxframe; 
@property (assign,nonatomic) unsigned long long txframe;                       //@synthesize txframe=_txframe - In the implementation block
@property (assign,nonatomic) BOOL hasRxrtry; 
@property (assign,nonatomic) unsigned long long rxrtry;                        //@synthesize rxrtry=_rxrtry - In the implementation block
@property (assign,nonatomic) BOOL hasTxretrans; 
@property (assign,nonatomic) unsigned long long txretrans;                     //@synthesize txretrans=_txretrans - In the implementation block
@property (assign,nonatomic) BOOL hasTxnocts; 
@property (assign,nonatomic) unsigned long long txnocts;                       //@synthesize txnocts=_txnocts - In the implementation block
@property (assign,nonatomic) BOOL hasTxrts; 
@property (assign,nonatomic) unsigned long long txrts;                         //@synthesize txrts=_txrts - In the implementation block
@property (assign,nonatomic) BOOL hasTxdeauth; 
@property (assign,nonatomic) unsigned long long txdeauth;                      //@synthesize txdeauth=_txdeauth - In the implementation block
@property (assign,nonatomic) BOOL hasTxassocreq; 
@property (assign,nonatomic) unsigned long long txassocreq;                    //@synthesize txassocreq=_txassocreq - In the implementation block
@property (assign,nonatomic) BOOL hasTxassocrsp; 
@property (assign,nonatomic) unsigned long long txassocrsp;                    //@synthesize txassocrsp=_txassocrsp - In the implementation block
@property (assign,nonatomic) BOOL hasTxreassocreq; 
@property (assign,nonatomic) unsigned long long txreassocreq;                  //@synthesize txreassocreq=_txreassocreq - In the implementation block
@property (assign,nonatomic) BOOL hasTxreassocrsp; 
@property (assign,nonatomic) unsigned long long txreassocrsp;                  //@synthesize txreassocrsp=_txreassocrsp - In the implementation block
@property (assign,nonatomic) BOOL hasCtsnotrxafterrts; 
@property (assign,nonatomic) unsigned long long ctsnotrxafterrts;              //@synthesize ctsnotrxafterrts=_ctsnotrxafterrts - In the implementation block
-(unsigned long long)txreassocrsp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRxrtry:(unsigned long long)arg1 ;
-(void)setTxframe:(unsigned long long)arg1 ;
-(void)setHasTxnocts:(BOOL)arg1 ;
-(BOOL)hasTxretrans;
-(void)writeTo:(id)arg1 ;
-(void)setHasTxframe:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasTxdeauth:(BOOL)arg1 ;
-(BOOL)hasTxreassocrsp;
-(BOOL)hasCtsnotrxafterrts;
-(unsigned long long)txassocreq;
-(unsigned long long)rxframe;
-(unsigned long long)txdeauth;
-(void)setTxassocrsp:(unsigned long long)arg1 ;
-(BOOL)hasRxrtry;
-(void)setTxretrans:(unsigned long long)arg1 ;
-(void)setHasTxretrans:(BOOL)arg1 ;
-(unsigned long long)txrts;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)txframe;
-(void)copyTo:(id)arg1 ;
-(void)setTxreassocreq:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasTxassocrsp:(BOOL)arg1 ;
-(void)setHasTxreassocrsp:(BOOL)arg1 ;
-(void)setHasRxrtry:(BOOL)arg1 ;
-(unsigned long long)txnocts;
-(void)setTxassocreq:(unsigned long long)arg1 ;
-(void)setHasTxassocreq:(BOOL)arg1 ;
-(unsigned long long)ctsnotrxafterrts;
-(unsigned long long)txassocrsp;
-(void)setHasTxrts:(BOOL)arg1 ;
-(void)setHasTxreassocreq:(BOOL)arg1 ;
-(unsigned long long)txretrans;
-(void)setTxdeauth:(unsigned long long)arg1 ;
-(void)setTxrts:(unsigned long long)arg1 ;
-(BOOL)hasRxframe;
-(BOOL)hasTxrts;
-(BOOL)hasTxnocts;
-(unsigned long long)hash;
-(void)setCtsnotrxafterrts:(unsigned long long)arg1 ;
-(unsigned long long)rxrtry;
-(BOOL)hasTxframe;
-(void)setTxreassocrsp:(unsigned long long)arg1 ;
-(void)setHasCtsnotrxafterrts:(BOOL)arg1 ;
-(unsigned long long)txreassocreq;
-(void)setTxnocts:(unsigned long long)arg1 ;
-(BOOL)hasTxreassocreq;
-(BOOL)hasTxdeauth;
-(void)setRxframe:(unsigned long long)arg1 ;
-(id)description;
-(void)setHasRxframe:(BOOL)arg1 ;
-(BOOL)hasTxassocrsp;
-(BOOL)hasTxassocreq;
-(id)dictionaryRepresentation;
@end
