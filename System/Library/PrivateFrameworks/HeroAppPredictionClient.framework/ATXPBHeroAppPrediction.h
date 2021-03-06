/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HeroAppPredictionClient.framework/HeroAppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeroAppPredictionClient/HeroAppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ATXPBHeroAppPrediction : PBCodable <NSCopying> {

	long long _adamId;
	double _latitude;
	double _latitudeAtPredictionTime;
	double _longitude;
	double _longitudeAtPredictionTime;
	long long _radius;
	long long _rank;
	double _score;
	NSString* _bundleId;
	NSData* _clipMetadata;
	NSString* _urlHash;
	BOOL _isTouristApp;
	SCD_Struct_AT1 _has;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                                //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                               //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                            //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasIsTouristApp; 
@property (assign,nonatomic) BOOL isTouristApp;                              //@synthesize isTouristApp=_isTouristApp - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                                   //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) BOOL hasUrlHash; 
@property (nonatomic,retain) NSString * urlHash;                             //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,readonly) BOOL hasClipMetadata; 
@property (nonatomic,retain) NSData * clipMetadata;                          //@synthesize clipMetadata=_clipMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasAdamId; 
@property (assign,nonatomic) long long adamId;                               //@synthesize adamId=_adamId - In the implementation block
@property (assign,nonatomic) BOOL hasRank; 
@property (assign,nonatomic) long long rank;                                 //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) long long radius;                               //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) BOOL hasLatitudeAtPredictionTime; 
@property (assign,nonatomic) double latitudeAtPredictionTime;                //@synthesize latitudeAtPredictionTime=_latitudeAtPredictionTime - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeAtPredictionTime; 
@property (assign,nonatomic) double longitudeAtPredictionTime;               //@synthesize longitudeAtPredictionTime=_longitudeAtPredictionTime - In the implementation block
-(void)setHasLatitude:(BOOL)arg1 ;
-(long long)rank;
-(BOOL)hasLongitude;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasRank;
-(long long)adamId;
-(void)writeTo:(id)arg1 ;
-(void)setHasRank:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasAdamId:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(double)score;
-(void)setLatitudeAtPredictionTime:(double)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setClipMetadata:(NSData *)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setUrlHash:(NSString *)arg1 ;
-(long long)radius;
-(void)setRadius:(long long)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(void)setAdamId:(long long)arg1 ;
-(void)setRank:(long long)arg1 ;
-(BOOL)hasScore;
-(BOOL)isTouristApp;
-(double)latitudeAtPredictionTime;
-(BOOL)hasAdamId;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)clipMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLongitudeAtPredictionTime:(double)arg1 ;
-(double)longitude;
-(double)latitude;
-(NSString *)bundleId;
-(BOOL)hasRadius;
-(void)setIsTouristApp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSString *)urlHash;
-(void)setLatitude:(double)arg1 ;
-(double)longitudeAtPredictionTime;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setHasRadius:(BOOL)arg1 ;
-(BOOL)hasBundleId;
-(id)description;
-(void)setLongitude:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasUrlHash;
-(void)setHasIsTouristApp:(BOOL)arg1 ;
-(BOOL)hasIsTouristApp;
-(BOOL)hasClipMetadata;
-(void)setHasLatitudeAtPredictionTime:(BOOL)arg1 ;
-(BOOL)hasLatitudeAtPredictionTime;
-(void)setHasLongitudeAtPredictionTime:(BOOL)arg1 ;
-(BOOL)hasLongitudeAtPredictionTime;
@end

