/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMLocalNotification : PBCodable <NSCopying> {

	double _date;
	double _interval;
	NSString* _notification;
	int _trigger;
	SCD_Struct_IC17 _has;

}

@property (assign,nonatomic) BOOL hasTrigger; 
@property (assign,nonatomic) int trigger;                          //@synthesize trigger=_trigger - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                          //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasInterval; 
@property (assign,nonatomic) double interval;                      //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) NSString * notification;              //@synthesize notification=_notification - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(double)arg1 ;
-(BOOL)hasDate;
-(double)date;
-(int)trigger;
-(void)writeTo:(id)arg1 ;
-(double)interval;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)notification;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTrigger;
-(void)setHasTrigger:(BOOL)arg1 ;
-(id)triggerAsString:(int)arg1 ;
-(int)StringAsTrigger:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNotification:(NSString *)arg1 ;
-(BOOL)hasNotification;
-(void)setInterval:(double)arg1 ;
-(void)setTrigger:(int)arg1 ;
-(BOOL)hasInterval;
-(void)setHasInterval:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasDate:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
