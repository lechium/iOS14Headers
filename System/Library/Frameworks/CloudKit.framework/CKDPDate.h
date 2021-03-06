/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPDate : PBCodable <NSCopying> {

	double _time;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) double time;               //@synthesize time=_time - In the implementation block
-(double)time;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTime:(double)arg1 ;
-(void)setHasTime:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasTime;
-(id)dictionaryRepresentation;
@end

