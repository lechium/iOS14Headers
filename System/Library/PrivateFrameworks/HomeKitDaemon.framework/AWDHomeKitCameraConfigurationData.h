/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitCameraConfigurationData : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _homeConfigurations;
	BOOL _isDemoConfiguration;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeConfigurations;              //@synthesize homeConfigurations=_homeConfigurations - In the implementation block
@property (assign,nonatomic) BOOL hasIsDemoConfiguration; 
@property (assign,nonatomic) BOOL isDemoConfiguration;                         //@synthesize isDemoConfiguration=_isDemoConfiguration - In the implementation block
+(Class)homeConfigurationsType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSMutableArray *)homeConfigurations;
-(void)addHomeConfigurations:(id)arg1 ;
-(unsigned long long)homeConfigurationsCount;
-(void)clearHomeConfigurations;
-(id)homeConfigurationsAtIndex:(unsigned long long)arg1 ;
-(void)setIsDemoConfiguration:(BOOL)arg1 ;
-(void)setHasIsDemoConfiguration:(BOOL)arg1 ;
-(BOOL)hasIsDemoConfiguration;
-(void)setHomeConfigurations:(NSMutableArray *)arg1 ;
-(BOOL)isDemoConfiguration;
@end

