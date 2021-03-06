/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACMutedMessage : PBCodable <NSCopying> {

	NSString* _category;
	int _originIdentifier;
	BOOL _muted;
	SCD_Struct_NA1 _has;

}

@property (assign,nonatomic) BOOL hasMuted; 
@property (assign,nonatomic) BOOL muted;                            //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                   //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                  //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(BOOL)muted;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(int)originIdentifier;
-(NSString *)category;
-(BOOL)hasCategory;
-(BOOL)hasMuted;
-(void)setCategory:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasMuted:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setOriginIdentifier:(int)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
@end

