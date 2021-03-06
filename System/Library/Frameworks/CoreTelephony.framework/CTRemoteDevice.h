/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTDeviceIdentifier, NSArray;

@interface CTRemoteDevice : NSObject <NSSecureCoding> {

	CTDeviceIdentifier* _deviceID;
	NSArray* _remoteDisplayPlans;
	NSArray* _remotePlans;

}

@property (nonatomic,retain) CTDeviceIdentifier * deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSArray * remoteDisplayPlans;               //@synthesize remoteDisplayPlans=_remoteDisplayPlans - In the implementation block
@property (nonatomic,retain) NSArray * remotePlans;                      //@synthesize remotePlans=_remotePlans - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)EID;
-(id)deviceName;
-(void)setDeviceID:(CTDeviceIdentifier *)arg1 ;
-(NSArray *)remotePlans;
-(void)setRemotePlans:(NSArray *)arg1 ;
-(unsigned long long)deviceType;
-(void)setRemoteDisplayPlans:(NSArray *)arg1 ;
-(NSArray *)remoteDisplayPlans;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CTDeviceIdentifier *)deviceID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

