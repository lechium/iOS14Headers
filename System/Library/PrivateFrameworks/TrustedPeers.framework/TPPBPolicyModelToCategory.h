/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TPPBPolicyModelToCategory : PBCodable <NSCopying> {

	NSString* _category;
	NSString* _prefix;

}

@property (nonatomic,readonly) BOOL hasPrefix; 
@property (nonatomic,retain) NSString * prefix;                //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)category;
-(BOOL)hasCategory;
-(void)setCategory:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasPrefix;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)prefix;
-(id)description;
-(id)dictionaryRepresentation;
@end

