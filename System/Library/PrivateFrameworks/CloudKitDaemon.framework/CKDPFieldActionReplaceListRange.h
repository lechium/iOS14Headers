/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPListRange, NSMutableArray;

@interface CKDPFieldActionReplaceListRange : PBCodable <NSCopying> {

	CKDPListRange* _range;
	NSMutableArray* _values;

}

@property (nonatomic,readonly) BOOL hasRange; 
@property (nonatomic,retain) CKDPListRange * range;                //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;              //@synthesize values=_values - In the implementation block
+(Class)valueType;
-(CKDPListRange *)range;
-(void)addValue:(id)arg1 ;
-(NSMutableArray *)values;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(unsigned long long)valuesCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasRange;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRange:(CKDPListRange *)arg1 ;
-(void)clearValues;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

