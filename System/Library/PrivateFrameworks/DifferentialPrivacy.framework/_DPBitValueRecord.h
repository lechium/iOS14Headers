/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/_DPJSONString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSManagedObjectID;

@interface _DPBitValueRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding> {

	BOOL _submitted;
	short _clearBitValue;
	NSString* _key;
	NSString* _privateBitValueStr;
	double _creationDate;
	long long _reportVersion;
	NSManagedObjectID* _objectId;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) short clearBitValue;                       //@synthesize clearBitValue=_clearBitValue - In the implementation block
@property (nonatomic,copy) NSString * privateBitValueStr;               //@synthesize privateBitValueStr=_privateBitValueStr - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (assign,nonatomic) long long reportVersion;                   //@synthesize reportVersion=_reportVersion - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg1 ;
-(id)entityName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)jsonString;
-(void)setCreationDate:(double)arg1 ;
-(NSManagedObjectID *)objectId;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)reportVersion;
-(void)setReportVersion:(long long)arg1 ;
-(double)creationDate;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(BOOL)submitted;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(id)initWithKey:(id)arg1 clearBitValue:(short)arg2 privateBitValueStr:(id)arg3 creationDate:(double)arg4 submitted:(BOOL)arg5 objectId:(id)arg6 ;
-(NSString *)privateBitValueStr;
-(short)clearBitValue;
-(BOOL)isEqualToBitValueRecord:(id)arg1 ;
-(void)setClearBitValue:(short)arg1 ;
-(void)setPrivateBitValueStr:(NSString *)arg1 ;
@end

