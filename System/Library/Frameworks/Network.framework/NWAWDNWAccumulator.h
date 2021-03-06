/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NWAWDNWAccumulator : PBCodable <NSCopying> {

	NSMutableArray* _durations;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * durations;              //@synthesize durations=_durations - In the implementation block
+(Class)durationsType;
-(NSMutableArray *)durations;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasName;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setDurations:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(void)clearDurations;
-(void)addDurations:(id)arg1 ;
-(unsigned long long)durationsCount;
-(id)durationsAtIndex:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)description;
-(id)dictionaryRepresentation;
@end

