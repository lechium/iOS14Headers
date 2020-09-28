/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface FPSearchableItemVersion : PBCodable <NSCopying> {

	NSData* _contentVersion;
	NSData* _metadataVersion;

}

@property (nonatomic,readonly) BOOL hasContentVersion; 
@property (nonatomic,retain) NSData * contentVersion;                //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadataVersion; 
@property (nonatomic,retain) NSData * metadataVersion;               //@synthesize metadataVersion=_metadataVersion - In the implementation block
+(id)stringFromVersion:(id)arg1 ;
+(id)versionFromString:(id)arg1 ;
-(NSData *)metadataVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setContentVersion:(NSData *)arg1 ;
-(void)setMetadataVersion:(NSData *)arg1 ;
-(BOOL)hasContentVersion;
-(BOOL)hasMetadataVersion;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)contentVersion;
-(id)dictionaryRepresentation;
@end
