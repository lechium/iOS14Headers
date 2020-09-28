/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRPlaybackQueue : PBCodable <NSCopying> {

	NSMutableArray* _contentItems;
	int _location;
	SCD_Struct_NM12 _has;

}

@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentItems;              //@synthesize contentItems=_contentItems - In the implementation block
+(Class)contentItemType;
-(void)setHasLocation:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)contentItems;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearContentItems;
-(int)location;
-(void)setLocation:(int)arg1 ;
-(void)setContentItems:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)contentItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasLocation;
-(unsigned long long)contentItemsCount;
-(id)description;
-(void)addContentItem:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
