/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, _DKPRValueType;

@interface _DKPRValue : PBCodable <NSCopying> {

	double _dateValue;
	double _doubleValue;
	long long _integerValue;
	NSData* _blobValue;
	NSString* _stringValue;
	_DKPRValueType* _type;
	SCD_Struct_DK4 _has;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

