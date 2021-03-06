/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDictionary, NSDate;

@interface CWFXPCEvent : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	long long _type;
	long long _internalType;
	NSString* _interfaceName;
	NSDictionary* _info;
	NSDate* _timestamp;
	unsigned long long _acknowledgementTimeout;

}

@property (nonatomic,copy) NSUUID * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) long long type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long internalType;                                 //@synthesize internalType=_internalType - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                 //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                                      //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long acknowledgementTimeout;              //@synthesize acknowledgementTimeout=_acknowledgementTimeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)info;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)internalType;
-(NSUUID *)UUID;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setInternalType:(long long)arg1 ;
-(unsigned long long)acknowledgementTimeout;
-(id)init;
-(long long)type;
-(void)setInterfaceName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSString *)interfaceName;
-(unsigned long long)hash;
-(BOOL)isEqualToXPCEvent:(id)arg1 ;
-(void)setAcknowledgementTimeout:(unsigned long long)arg1 ;
-(id)description;
-(id)__descriptionForEventType;
@end

