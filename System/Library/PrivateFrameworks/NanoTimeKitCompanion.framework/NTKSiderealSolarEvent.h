/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NTKSiderealSolarEvent : NSObject <NSSecureCoding> {

	double _degree;
	NSDate* _time;
	long long _type;

}

@property (nonatomic,readonly) NSDate * time;               //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double angle; 
@property (nonatomic,readonly) double degree; 
+(BOOL)supportsSecureCoding;
+(id)eventWithType:(long long)arg1 time:(id)arg2 degree:(double)arg3 ;
+(id)eventWithType:(long long)arg1 degree:(double)arg2 ;
-(double)angle;
-(NSDate *)time;
-(double)degree;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugNameForType:(long long)arg1 ;
@end

