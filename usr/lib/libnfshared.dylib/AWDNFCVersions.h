/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNFCVersions : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _hardwareType;
	unsigned _middlewareVersion;
	unsigned _nfccFWRevision;
	unsigned _nfccFWVersion;
	unsigned _nfccHWVersion;
	unsigned _nfccROMVersion;
	NSString* _platformVersion;
	unsigned _seAvailableIndices;
	unsigned _seDeviceType;
	unsigned _seFWVersion;
	unsigned _seHWVersion;
	unsigned _seMigrationInst;
	unsigned _seMigrationPkgs;
	unsigned _seMigrationState;
	unsigned _seOSMode;
	unsigned _seReferenceCounter;
	unsigned _seRestrictedMode;
	unsigned _seSequenceCounter;
	unsigned _seSignKeyType;
	unsigned _seTotalIndices;
	unsigned _seTransientDeselect;
	unsigned _seTransientPersistent;
	unsigned _seTransientReset;
	unsigned _seosHWVersion;
	unsigned _seosMigrationState;
	unsigned _seosOSMode;
	unsigned _seosOSVersion;
	NSString* _seosPlatformID;
	unsigned _seosSignKeyType;
	unsigned _seosTransientDeselect;
	unsigned _seosTransientPersistent;
	unsigned _seosTransientReset;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMiddlewareVersion; 
@property (assign,nonatomic) unsigned middlewareVersion;                    //@synthesize middlewareVersion=_middlewareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasPlatformVersion; 
@property (nonatomic,retain) NSString * platformVersion;                    //@synthesize platformVersion=_platformVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccHWVersion; 
@property (assign,nonatomic) unsigned nfccHWVersion;                        //@synthesize nfccHWVersion=_nfccHWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccROMVersion; 
@property (assign,nonatomic) unsigned nfccROMVersion;                       //@synthesize nfccROMVersion=_nfccROMVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccFWVersion; 
@property (assign,nonatomic) unsigned nfccFWVersion;                        //@synthesize nfccFWVersion=_nfccFWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccFWRevision; 
@property (assign,nonatomic) unsigned nfccFWRevision;                       //@synthesize nfccFWRevision=_nfccFWRevision - In the implementation block
@property (assign,nonatomic) BOOL hasSeDeviceType; 
@property (assign,nonatomic) unsigned seDeviceType;                         //@synthesize seDeviceType=_seDeviceType - In the implementation block
@property (assign,nonatomic) BOOL hasSeHWVersion; 
@property (assign,nonatomic) unsigned seHWVersion;                          //@synthesize seHWVersion=_seHWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSeFWVersion; 
@property (assign,nonatomic) unsigned seFWVersion;                          //@synthesize seFWVersion=_seFWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSeSignKeyType; 
@property (assign,nonatomic) unsigned seSignKeyType;                        //@synthesize seSignKeyType=_seSignKeyType - In the implementation block
@property (assign,nonatomic) BOOL hasSeSequenceCounter; 
@property (assign,nonatomic) unsigned seSequenceCounter;                    //@synthesize seSequenceCounter=_seSequenceCounter - In the implementation block
@property (assign,nonatomic) BOOL hasSeReferenceCounter; 
@property (assign,nonatomic) unsigned seReferenceCounter;                   //@synthesize seReferenceCounter=_seReferenceCounter - In the implementation block
@property (assign,nonatomic) BOOL hasSeOSMode; 
@property (assign,nonatomic) unsigned seOSMode;                             //@synthesize seOSMode=_seOSMode - In the implementation block
@property (assign,nonatomic) BOOL hasSeRestrictedMode; 
@property (assign,nonatomic) unsigned seRestrictedMode;                     //@synthesize seRestrictedMode=_seRestrictedMode - In the implementation block
@property (assign,nonatomic) BOOL hasSeMigrationState; 
@property (assign,nonatomic) unsigned seMigrationState;                     //@synthesize seMigrationState=_seMigrationState - In the implementation block
@property (assign,nonatomic) BOOL hasSeMigrationPkgs; 
@property (assign,nonatomic) unsigned seMigrationPkgs;                      //@synthesize seMigrationPkgs=_seMigrationPkgs - In the implementation block
@property (assign,nonatomic) BOOL hasSeMigrationInst; 
@property (assign,nonatomic) unsigned seMigrationInst;                      //@synthesize seMigrationInst=_seMigrationInst - In the implementation block
@property (nonatomic,readonly) BOOL hasSeosPlatformID; 
@property (nonatomic,retain) NSString * seosPlatformID;                     //@synthesize seosPlatformID=_seosPlatformID - In the implementation block
@property (assign,nonatomic) BOOL hasSeosHWVersion; 
@property (assign,nonatomic) unsigned seosHWVersion;                        //@synthesize seosHWVersion=_seosHWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSeosOSVersion; 
@property (assign,nonatomic) unsigned seosOSVersion;                        //@synthesize seosOSVersion=_seosOSVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSeosOSMode; 
@property (assign,nonatomic) unsigned seosOSMode;                           //@synthesize seosOSMode=_seosOSMode - In the implementation block
@property (assign,nonatomic) BOOL hasSeosSignKeyType; 
@property (assign,nonatomic) unsigned seosSignKeyType;                      //@synthesize seosSignKeyType=_seosSignKeyType - In the implementation block
@property (assign,nonatomic) BOOL hasSeosMigrationState; 
@property (assign,nonatomic) unsigned seosMigrationState;                   //@synthesize seosMigrationState=_seosMigrationState - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareType; 
@property (assign,nonatomic) unsigned hardwareType;                         //@synthesize hardwareType=_hardwareType - In the implementation block
@property (assign,nonatomic) BOOL hasSeTransientDeselect; 
@property (assign,nonatomic) unsigned seTransientDeselect;                  //@synthesize seTransientDeselect=_seTransientDeselect - In the implementation block
@property (assign,nonatomic) BOOL hasSeTransientReset; 
@property (assign,nonatomic) unsigned seTransientReset;                     //@synthesize seTransientReset=_seTransientReset - In the implementation block
@property (assign,nonatomic) BOOL hasSeTransientPersistent; 
@property (assign,nonatomic) unsigned seTransientPersistent;                //@synthesize seTransientPersistent=_seTransientPersistent - In the implementation block
@property (assign,nonatomic) BOOL hasSeAvailableIndices; 
@property (assign,nonatomic) unsigned seAvailableIndices;                   //@synthesize seAvailableIndices=_seAvailableIndices - In the implementation block
@property (assign,nonatomic) BOOL hasSeTotalIndices; 
@property (assign,nonatomic) unsigned seTotalIndices;                       //@synthesize seTotalIndices=_seTotalIndices - In the implementation block
@property (assign,nonatomic) BOOL hasSeosTransientDeselect; 
@property (assign,nonatomic) unsigned seosTransientDeselect;                //@synthesize seosTransientDeselect=_seosTransientDeselect - In the implementation block
@property (assign,nonatomic) BOOL hasSeosTransientReset; 
@property (assign,nonatomic) unsigned seosTransientReset;                   //@synthesize seosTransientReset=_seosTransientReset - In the implementation block
@property (assign,nonatomic) BOOL hasSeosTransientPersistent; 
@property (assign,nonatomic) unsigned seosTransientPersistent;              //@synthesize seosTransientPersistent=_seosTransientPersistent - In the implementation block
-(unsigned)nfccHWVersion;
-(unsigned)seDeviceType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)seosPlatformID;
-(BOOL)hasNfccROMVersion;
-(void)setSeosTransientDeselect:(unsigned)arg1 ;
-(void)setHasSeMigrationState:(BOOL)arg1 ;
-(void)setHasNfccFWVersion:(BOOL)arg1 ;
-(BOOL)hasSeosTransientDeselect;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasNfccROMVersion:(BOOL)arg1 ;
-(void)setPlatformVersion:(NSString *)arg1 ;
-(BOOL)hasSeHWVersion;
-(unsigned)seosOSVersion;
-(unsigned)seosTransientDeselect;
-(unsigned)nfccFWVersion;
-(void)writeTo:(id)arg1 ;
-(NSString *)platformVersion;
-(BOOL)hasSeTransientPersistent;
-(void)setSeosOSVersion:(unsigned)arg1 ;
-(void)setHasSeosSignKeyType:(BOOL)arg1 ;
-(unsigned)seOSMode;
-(void)setSeTotalIndices:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)nfccROMVersion;
-(void)setSeMigrationState:(unsigned)arg1 ;
-(unsigned)seTotalIndices;
-(unsigned)hardwareType;
-(unsigned)seosOSMode;
-(BOOL)hasSeAvailableIndices;
-(void)setHasSeTransientReset:(BOOL)arg1 ;
-(void)setHasMiddlewareVersion:(BOOL)arg1 ;
-(void)setHasNfccFWRevision:(BOOL)arg1 ;
-(unsigned)seRestrictedMode;
-(void)setSeMigrationInst:(unsigned)arg1 ;
-(unsigned)seSequenceCounter;
-(void)setHasSeosOSVersion:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)setSeosOSMode:(unsigned)arg1 ;
-(BOOL)hasSeosOSMode;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasSeosHWVersion;
-(BOOL)hasSeosTransientReset;
-(unsigned)nfccFWRevision;
-(unsigned)seMigrationState;
-(void)setHasSeSequenceCounter:(BOOL)arg1 ;
-(void)setSeosTransientPersistent:(unsigned)arg1 ;
-(void)setHasSeTransientDeselect:(BOOL)arg1 ;
-(BOOL)hasSeTransientReset;
-(BOOL)hasNfccFWVersion;
-(BOOL)hasSeMigrationPkgs;
-(void)setSeDeviceType:(unsigned)arg1 ;
-(void)setMiddlewareVersion:(unsigned)arg1 ;
-(BOOL)hasPlatformVersion;
-(void)setSeosHWVersion:(unsigned)arg1 ;
-(BOOL)hasSeTotalIndices;
-(void)setHasSeosTransientPersistent:(BOOL)arg1 ;
-(BOOL)hasSeosPlatformID;
-(void)setHasSeosOSMode:(BOOL)arg1 ;
-(void)setSeTransientDeselect:(unsigned)arg1 ;
-(BOOL)hasNfccFWRevision;
-(void)setHasSeHWVersion:(BOOL)arg1 ;
-(void)setSeSignKeyType:(unsigned)arg1 ;
-(BOOL)hasSeRestrictedMode;
-(unsigned)seMigrationPkgs;
-(unsigned)seTransientPersistent;
-(unsigned)seSignKeyType;
-(void)setHasNfccHWVersion:(BOOL)arg1 ;
-(void)setSeHWVersion:(unsigned)arg1 ;
-(BOOL)hasSeMigrationState;
-(void)setNfccROMVersion:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSeFWVersion:(BOOL)arg1 ;
-(unsigned)seosTransientPersistent;
-(void)setHasSeosTransientDeselect:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSeTransientPersistent:(unsigned)arg1 ;
-(void)setSeAvailableIndices:(unsigned)arg1 ;
-(void)setSeTransientReset:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSeSignKeyType:(BOOL)arg1 ;
-(unsigned)seFWVersion;
-(void)setHasSeReferenceCounter:(BOOL)arg1 ;
-(unsigned)seosSignKeyType;
-(void)setHasSeAvailableIndices:(BOOL)arg1 ;
-(void)setHasSeDeviceType:(BOOL)arg1 ;
-(BOOL)hasMiddlewareVersion;
-(void)setSeOSMode:(unsigned)arg1 ;
-(unsigned)middlewareVersion;
-(void)setSeRestrictedMode:(unsigned)arg1 ;
-(unsigned)seTransientReset;
-(unsigned)seTransientDeselect;
-(void)setSeosPlatformID:(NSString *)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasHardwareType;
-(void)setHasSeosMigrationState:(BOOL)arg1 ;
-(unsigned)seMigrationInst;
-(BOOL)hasSeReferenceCounter;
-(BOOL)hasSeosTransientPersistent;
-(void)setHasSeTransientPersistent:(BOOL)arg1 ;
-(void)setSeReferenceCounter:(unsigned)arg1 ;
-(void)setHasSeMigrationPkgs:(BOOL)arg1 ;
-(BOOL)hasSeosSignKeyType;
-(unsigned)seosMigrationState;
-(void)setHasSeOSMode:(BOOL)arg1 ;
-(BOOL)hasSeTransientDeselect;
-(BOOL)hasSeosMigrationState;
-(void)setNfccFWVersion:(unsigned)arg1 ;
-(BOOL)hasSeMigrationInst;
-(void)setNfccHWVersion:(unsigned)arg1 ;
-(unsigned long long)hash;
-(unsigned)seReferenceCounter;
-(BOOL)hasNfccHWVersion;
-(BOOL)hasSeDeviceType;
-(BOOL)hasSeOSMode;
-(void)setHasSeRestrictedMode:(BOOL)arg1 ;
-(void)setHasSeosHWVersion:(BOOL)arg1 ;
-(void)setSeFWVersion:(unsigned)arg1 ;
-(void)setSeMigrationPkgs:(unsigned)arg1 ;
-(void)setHasSeMigrationInst:(BOOL)arg1 ;
-(unsigned)seosTransientReset;
-(unsigned)seosHWVersion;
-(BOOL)hasSeosOSVersion;
-(void)setHasHardwareType:(BOOL)arg1 ;
-(void)setHasSeosTransientReset:(BOOL)arg1 ;
-(BOOL)hasSeSequenceCounter;
-(void)setNfccFWRevision:(unsigned)arg1 ;
-(void)setHasSeTotalIndices:(BOOL)arg1 ;
-(BOOL)hasSeSignKeyType;
-(void)setSeosTransientReset:(unsigned)arg1 ;
-(void)setSeosSignKeyType:(unsigned)arg1 ;
-(id)description;
-(unsigned)seAvailableIndices;
-(void)setHardwareType:(unsigned)arg1 ;
-(void)setSeosMigrationState:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)seHWVersion;
-(BOOL)hasSeFWVersion;
-(void)setSeSequenceCounter:(unsigned)arg1 ;
@end
