/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DNDDevice : NSObject <NSCopying> {

	unsigned long long _deviceClass;
	unsigned long long _deviceCapabilities;

}

@property (nonatomic,readonly) unsigned long long deviceClass;                     //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceCapabilities;              //@synthesize deviceCapabilities=_deviceCapabilities - In the implementation block
+(id)currentDevice;
+(id)deviceWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2 ;
-(unsigned long long)deviceCapabilities;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)deviceClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_initWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2 ;
@end

