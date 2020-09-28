/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NWPBAddressEndpoint : PBCodable <NSCopying> {

	NSData* _address;

}

@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) NSData * address;               //@synthesize address=_address - In the implementation block
-(BOOL)hasAddress;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)address;
-(void)setAddress:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
