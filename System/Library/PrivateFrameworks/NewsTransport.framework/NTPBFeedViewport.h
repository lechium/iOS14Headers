/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBFeedViewport : PBCodable <NSCopying> {

	unsigned long long _feedDBVersion;
	unsigned long long _version;
	NSMutableArray* _elements;
	NSString* _identifier;
	NSMutableArray* _sharedStrings;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned long long version;                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasFeedDBVersion; 
@property (assign,nonatomic) unsigned long long feedDBVersion;              //@synthesize feedDBVersion=_feedDBVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * elements;                     //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) NSMutableArray * sharedStrings;                //@synthesize sharedStrings=_sharedStrings - In the implementation block
+(Class)elementsType;
+(Class)sharedStringsType;
-(BOOL)hasVersion;
-(NSString *)identifier;
-(void)setFeedDBVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasFeedDBVersion;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)elements;
-(void)clearElements;
-(BOOL)hasIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setElements:(NSMutableArray *)arg1 ;
-(unsigned long long)sharedStringsCount;
-(id)elementsAtIndex:(unsigned long long)arg1 ;
-(void)setSharedStrings:(NSMutableArray *)arg1 ;
-(void)setHasVersion:(BOOL)arg1 ;
-(unsigned long long)elementsCount;
-(void)setHasFeedDBVersion:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addSharedStrings:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)feedDBVersion;
-(NSMutableArray *)sharedStrings;
-(id)sharedStringsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)clearSharedStrings;
-(id)description;
-(void)addElements:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

