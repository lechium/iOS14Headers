/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData;

@interface HMPBActionSet : PBCodable <NSCopying> {

	NSString* _actionSetType;
	NSMutableArray* _actions;
	NSData* _homeUUID;
	NSString* _name;
	NSData* _uuid;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;              //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) BOOL hasActionSetType; 
@property (nonatomic,retain) NSString * actionSetType;              //@synthesize actionSetType=_actionSetType - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeUUID; 
@property (nonatomic,retain) NSData * homeUUID;                     //@synthesize homeUUID=_homeUUID - In the implementation block
+(Class)actionsType;
-(void)setActionSetType:(NSString *)arg1 ;
-(BOOL)hasActionSetType;
-(BOOL)hasHomeUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasUuid;
-(NSMutableArray *)actions;
-(NSString *)actionSetType;
-(NSData *)homeUUID;
-(void)addActions:(id)arg1 ;
-(BOOL)hasName;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSData *)uuid;
-(unsigned long long)actionsCount;
-(void)clearActions;
-(id)actionsAtIndex:(unsigned long long)arg1 ;
-(void)setActions:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(void)setHomeUUID:(NSData *)arg1 ;
-(NSString *)name;
-(id)description;
-(id)dictionaryRepresentation;
@end

