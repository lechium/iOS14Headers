/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitSignificantTimeEvent : PBCodable <NSCopying> {

	NSString* _significantEvent;
	BOOL _offsetPresent;
	SCD_Struct_AW7 _has;

}

@property (nonatomic,readonly) BOOL hasSignificantEvent; 
@property (nonatomic,retain) NSString * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (assign,nonatomic) BOOL hasOffsetPresent; 
@property (assign,nonatomic) BOOL offsetPresent;                       //@synthesize offsetPresent=_offsetPresent - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)significantEvent;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasSignificantEvent;
-(void)setOffsetPresent:(BOOL)arg1 ;
-(void)setHasOffsetPresent:(BOOL)arg1 ;
-(BOOL)hasOffsetPresent;
-(BOOL)offsetPresent;
@end

