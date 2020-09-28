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

@class NSMutableArray;

@interface NTPBBundleIDMapping : PBCodable <NSCopying> {

	NSMutableArray* _bundleIds;

}

@property (nonatomic,retain) NSMutableArray * bundleIds;              //@synthesize bundleIds=_bundleIds - In the implementation block
+(Class)bundleIdsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)bundleIds;
-(unsigned long long)bundleIdsCount;
-(void)clearBundleIds;
-(void)setBundleIds:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)addBundleIds:(id)arg1 ;
-(id)bundleIdsAtIndex:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
@end
