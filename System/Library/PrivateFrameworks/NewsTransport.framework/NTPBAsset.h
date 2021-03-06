/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NTPBAsset : PBCodable <FCKeyValueStoreCoding, NSCopying> {

	int _type;
	NSData* _wrappingKeyID;
	SCD_Struct_NT3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasWrappingKeyID; 
@property (nonatomic,retain) NSData * wrappingKeyID;                //@synthesize wrappingKeyID=_wrappingKeyID - In the implementation block
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(void)writeToKeyValuePair:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasWrappingKeyID;
-(void)writeTo:(id)arg1 ;
-(NSData *)wrappingKeyID;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(void)setWrappingKeyID:(NSData *)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(int)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
@end

