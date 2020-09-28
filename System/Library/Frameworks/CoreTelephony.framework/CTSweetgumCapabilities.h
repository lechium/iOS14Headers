/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTSweetgumCapabilities : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsServices;
	BOOL _supportsUsage;
	BOOL _supportsPlans;
	BOOL _supportsApplications;

}

@property (assign,nonatomic) BOOL supportsServices;                  //@synthesize supportsServices=_supportsServices - In the implementation block
@property (assign,nonatomic) BOOL supportsUsage;                     //@synthesize supportsUsage=_supportsUsage - In the implementation block
@property (assign,nonatomic) BOOL supportsPlans;                     //@synthesize supportsPlans=_supportsPlans - In the implementation block
@property (assign,nonatomic) BOOL supportsApplications;              //@synthesize supportsApplications=_supportsApplications - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)supportsUsage;
-(BOOL)supportsPlans;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSupportsApplications:(BOOL)arg1 ;
-(void)setSupportsUsage:(BOOL)arg1 ;
-(BOOL)supportsApplications;
-(void)setSupportsServices:(BOOL)arg1 ;
-(void)setSupportsPlans:(BOOL)arg1 ;
-(BOOL)supportsServices;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
