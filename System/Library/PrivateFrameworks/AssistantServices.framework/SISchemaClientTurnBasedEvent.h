/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SISchemaClientAnyEvent, SISchemaClientTurnContext;

@interface SISchemaClientTurnBasedEvent : PBCodable <NSCopying> {

	SISchemaClientAnyEvent* _event;
	SISchemaClientTurnContext* _turnContext;

}

@property (nonatomic,readonly) BOOL hasTurnContext; 
@property (nonatomic,retain) SISchemaClientTurnContext * turnContext;              //@synthesize turnContext=_turnContext - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) SISchemaClientAnyEvent * event;                       //@synthesize event=_event - In the implementation block
-(void)setEvent:(SISchemaClientAnyEvent *)arg1 ;
-(SISchemaClientAnyEvent *)event;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTurnContext:(SISchemaClientTurnContext *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTurnContext;
-(SISchemaClientTurnContext *)turnContext;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasEvent;
-(id)si_dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

