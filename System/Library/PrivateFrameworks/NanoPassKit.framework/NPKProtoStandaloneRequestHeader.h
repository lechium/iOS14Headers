/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NPKProtoStandaloneRequestHeader : PBCodable <NSCopying> {

	NSMutableArray* _cachedHeroImages;
	int _protocolVersion;
	NSString* _sessionIdentifier;
	NSString* _stepIdentifier;

}

@property (assign,nonatomic) int protocolVersion;                            //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSString * sessionIdentifier;                   //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasStepIdentifier; 
@property (nonatomic,retain) NSString * stepIdentifier;                      //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedHeroImages;              //@synthesize cachedHeroImages=_cachedHeroImages - In the implementation block
+(Class)cachedHeroImagesType;
-(int)protocolVersion;
-(NSString *)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProtocolVersion:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)stepIdentifier;
-(void)setStepIdentifier:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSessionIdentifier;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)protocolVersionAsString:(int)arg1 ;
-(int)StringAsProtocolVersion:(id)arg1 ;
-(void)addCachedHeroImages:(id)arg1 ;
-(unsigned long long)cachedHeroImagesCount;
-(void)clearCachedHeroImages;
-(id)cachedHeroImagesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStepIdentifier;
-(NSMutableArray *)cachedHeroImages;
-(void)setCachedHeroImages:(NSMutableArray *)arg1 ;
@end

