/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying> {

	float _ctr;
	NSString* _personalizationFeatureId;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasPersonalizationFeatureId; 
@property (nonatomic,retain) NSString * personalizationFeatureId;              //@synthesize personalizationFeatureId=_personalizationFeatureId - In the implementation block
@property (assign,nonatomic) BOOL hasCtr; 
@property (assign,nonatomic) float ctr;                                        //@synthesize ctr=_ctr - In the implementation block
-(float)ctr;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCtr;
-(void)setCtr:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setHasCtr:(BOOL)arg1 ;
-(id)description;
-(void)setPersonalizationFeatureId:(NSString *)arg1 ;
-(BOOL)hasPersonalizationFeatureId;
-(NSString *)personalizationFeatureId;
-(id)dictionaryRepresentation;
@end

