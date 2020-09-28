/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HKElectrocardiogramSessionConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _wornOnRightArm;
	NSUUID* _sessionUUID;
	long long _mode;
	double _maximumDuration;

}

@property (nonatomic,copy) NSUUID * sessionUUID;                  //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) long long mode;                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double maximumDuration;              //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign,nonatomic) BOOL wornOnRightArm;                 //@synthesize wornOnRightArm=_wornOnRightArm - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sessionConfigurationWithUUID:(id)arg1 mode:(long long)arg2 maximumDuration:(double)arg3 wornOnRightArm:(BOOL)arg4 ;
-(long long)mode;
-(void)setMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)maximumDuration;
-(void)setMaximumDuration:(double)arg1 ;
-(BOOL)wornOnRightArm;
-(void)setWornOnRightArm:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)sessionUUID;
@end
