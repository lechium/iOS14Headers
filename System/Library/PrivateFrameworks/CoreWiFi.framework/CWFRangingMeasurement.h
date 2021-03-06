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

@interface CWFRangingMeasurement : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _roundTripTime;
	long long _RSSI;
	unsigned long long _channel;

}

@property (assign,nonatomic) unsigned long long roundTripTime;              //@synthesize roundTripTime=_roundTripTime - In the implementation block
@property (assign,nonatomic) long long RSSI;                                //@synthesize RSSI=_RSSI - In the implementation block
@property (assign,nonatomic) unsigned long long channel;                    //@synthesize channel=_channel - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)RSSI;
-(void)setChannel:(unsigned long long)arg1 ;
-(void)setRSSI:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)channel;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRoundTripTime:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)roundTripTime;
-(id)description;
-(BOOL)isEqualToRangingMeasurement:(id)arg1 ;
@end

