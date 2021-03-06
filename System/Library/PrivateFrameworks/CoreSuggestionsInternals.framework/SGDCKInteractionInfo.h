/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface SGDCKInteractionInfo : PBCodable <NSCopying> {

	NSString* _intentResponseUserActivityString;
	NSString* _interactionBundleId;
	NSString* _interactionGroupId;
	NSString* _interactionId;
	NSString* _interactionTeamId;
	NSData* _reservationContainerReference;
	NSData* _reservationItemReferences;

}

@property (nonatomic,readonly) BOOL hasInteractionId; 
@property (nonatomic,retain) NSString * interactionId;                                 //@synthesize interactionId=_interactionId - In the implementation block
@property (nonatomic,readonly) BOOL hasInteractionGroupId; 
@property (nonatomic,retain) NSString * interactionGroupId;                            //@synthesize interactionGroupId=_interactionGroupId - In the implementation block
@property (nonatomic,readonly) BOOL hasInteractionBundleId; 
@property (nonatomic,retain) NSString * interactionBundleId;                           //@synthesize interactionBundleId=_interactionBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReservationItemReferences; 
@property (nonatomic,retain) NSData * reservationItemReferences;                       //@synthesize reservationItemReferences=_reservationItemReferences - In the implementation block
@property (nonatomic,readonly) BOOL hasReservationContainerReference; 
@property (nonatomic,retain) NSData * reservationContainerReference;                   //@synthesize reservationContainerReference=_reservationContainerReference - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentResponseUserActivityString; 
@property (nonatomic,retain) NSString * intentResponseUserActivityString;              //@synthesize intentResponseUserActivityString=_intentResponseUserActivityString - In the implementation block
@property (nonatomic,readonly) BOOL hasInteractionTeamId; 
@property (nonatomic,retain) NSString * interactionTeamId;                             //@synthesize interactionTeamId=_interactionTeamId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReservationContainerReference:(NSData *)arg1 ;
-(BOOL)hasReservationContainerReference;
-(void)setReservationItemReferences:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)intentResponseUserActivityString;
-(NSData *)reservationItemReferences;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(NSData *)reservationContainerReference;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasInteractionId;
-(BOOL)hasInteractionGroupId;
-(BOOL)hasInteractionBundleId;
-(BOOL)hasReservationItemReferences;
-(BOOL)hasIntentResponseUserActivityString;
-(BOOL)hasInteractionTeamId;
-(NSString *)interactionGroupId;
-(void)setInteractionGroupId:(NSString *)arg1 ;
-(NSString *)interactionBundleId;
-(void)setInteractionBundleId:(NSString *)arg1 ;
-(void)setIntentResponseUserActivityString:(NSString *)arg1 ;
-(NSString *)interactionTeamId;
-(void)setInteractionTeamId:(NSString *)arg1 ;
@end

